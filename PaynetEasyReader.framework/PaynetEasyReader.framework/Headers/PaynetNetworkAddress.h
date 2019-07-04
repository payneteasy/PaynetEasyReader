//
//  PaynetNetworkAddress.h
//
//  Created by Sergey Anisiforov on 16/02/2018.
//  Copyright © 2018 payneteasy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PaynetNetworkAddress : NSObject

- (instancetype)initWithHost:(NSString *)host port:(int16_t)port;

@property (nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) int16_t port;

@end


@interface PaynetNetworkRange : NSObject

- (instancetype)initWithFromHost:(NSString *)fromHost toHost:(NSString *)toHost port:(int16_t)port;

- (void)exceptHost:(NSString *)host;
- (void)setReverseDirection:(BOOL)reverseDirection;

@property (nonatomic, readonly) NSString *fromHost;
@property (nonatomic, readonly) NSString *toHost;
@property (nonatomic, readonly) int16_t port;
@property (nonatomic, readonly) NSArray *exceptionHosts;
@property (nonatomic, readonly) BOOL reverseDirection;

@end


@interface PaynetSocketInfo : NSObject

- (instancetype)initWithAddress:(PaynetNetworkAddress *)address terminalId:(NSString *)terminalId;

@property (nonatomic, readonly) PaynetNetworkAddress *address;
@property (nonatomic, readonly) NSString *terminalId;

@end
