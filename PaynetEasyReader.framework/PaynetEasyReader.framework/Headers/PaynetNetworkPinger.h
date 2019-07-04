//
//  PaynetNetworkPinger.h
//
//  Created by Sergey Anisiforov on 16/02/2018.
//  Copyright © 2018 payneteasy. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PaynetNetworkAddress;
@class PaynetNetworkRange;
@class PaynetSocketInfo;

@protocol PaynetNetworkPingerDelegate
- (void)paynetNetworkPingerOnStart;
- (void)paynetNetworkPingerOnScan:(PaynetNetworkRange *)range;
- (void)paynetNetworkPingerOnFind:(PaynetSocketInfo *)socket;
- (void)paynetNetworkPingerOnFinish;
@end

typedef void (^SocketPingerScanBlock)(PaynetNetworkRange *range);
typedef void (^SocketPingerResultBlock)(NSArray<PaynetSocketInfo *> *result);

@interface PaynetNetworkPinger : NSObject

- (instancetype)initWithConnectorClass:(Class)connectorClass;

- (void)startPingWithRange:(PaynetNetworkRange *)range
                 scanBlock:(SocketPingerScanBlock)scanBlock
               resultBlock:(SocketPingerResultBlock)resultBlock;

- (void)stopPing;

@property (nonatomic, assign) NSInteger socketPoolSize;
@property (nonatomic, assign) NSInteger socketPingCount;
@property (nonatomic, assign) NSTimeInterval socketPingTimeout;
@property (nonatomic, weak) id<PaynetNetworkPingerDelegate> delegate;
@property (nonatomic, copy) SocketPingerScanBlock scanBlock;
@property (nonatomic, copy) SocketPingerResultBlock resultBlock;

@end
