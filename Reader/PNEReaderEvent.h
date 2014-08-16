//
// Created by Evgeniy Sinev on Sat Aug 16 00:27:58 MSK 2014
//

#import <Foundation/Foundation.h>

@interface PNEReaderEvent : NSObject

typedef NS_ENUM(NSInteger, PNEReaderState) {

      PNEReaderState_STARTED
    , PNEReaderState_CONNECTING
    , PNEReaderState_CONNECTED
    , PNEReaderState_NOT_CONNECTED
    , PNEReaderState_MIURA_DEVICE_INFO
    , PNEReaderState_MIURA_CARD_STATUS
    , PNEReaderState_MIURA_DEVICE_STATUS_CHANGE

};

@property (readonly, nonatomic) PNEReaderState state;
@property (copy, readonly, nonatomic) id message;

- (instancetype)initWithState:(PNEReaderState)aState message:(id)aMessage;

- (instancetype)initWithState:(PNEReaderState)aState;

- (NSString *)description;

+ (instancetype)eventWithState:(PNEReaderState)aState;


+ (instancetype)eventWithState:(PNEReaderState)aState message:(id)aMessage;


@end
