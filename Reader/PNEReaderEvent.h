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

    // since 0.2.0
    , PNEReaderState_CONFIGURATION_DOWNLOADING
    , PNEReaderState_CONFIGURATION_UPLOADING
    , PNEReaderState_CONFIGURATION_COMPLETE

    , PNEReaderState_SENDING_SALE
    , PNEReaderState_SENDING_EMF_FINAL_ADVICE


    //
    // MIURA STATUS
    //
    // MiuraResetDeviceResponse
    , PNEReaderState_MIURA_DEVICE_INFO

    // MiuraCardStatusMessage
    , PNEReaderState_MIURA_CARD_STATUS

    // MiuraDeviceStatusMessage
    , PNEReaderState_MIURA_DEVICE_STATUS_CHANGE

    // MiuraBatteryStatusResponse
    , PNEReaderState_MIURA_BATTERY_STATUS_RESPONSE

    //
    // Spire
    //
    , PNEReaderState_SPIRE_COMPLETE_TRANSACTION
    , PNEReaderState_SPIRE_GET_AMOUNT
    , PNEReaderState_SPIRE_GET_SWIPED_DATA
    , PNEReaderState_SPIRE_GET_TRANSACTION_DATA
    , PNEReaderState_SPIRE_GO_ONLINE
    , PNEReaderState_SPIRE_PROCESS_SWIPED_DATA
    , PNEReaderState_SPIRE_STATUS_REPORT         // SpireStatusReport49Event
    , PNEReaderState_SPIRE_TERMINATE_TRANSACTION
    , PNEReaderState_SPIRE_INIT_TRANSACTION
    
    , PNEReaderState_SCANNING

};

@property (readonly, nonatomic) PNEReaderState state;
@property (copy, readonly, nonatomic) id message;

- (instancetype)initWithState:(PNEReaderState)aState message:(id)aMessage;

- (instancetype)initWithState:(PNEReaderState)aState;

- (NSString *)description;

+ (instancetype)eventWithState:(PNEReaderState)aState;

+ (instancetype)eventWithState:(PNEReaderState)aState message:(id)aMessage;


@end
