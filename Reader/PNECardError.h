//
// Created by Evgeniy Sinev on Sat Aug 16 00:27:31 MSK 2014
//

#import <Foundation/Foundation.h>

@interface PNECardError : NSObject

typedef NS_ENUM(NSInteger, PNECardErrorType) {
      PNECardErrorType_PARSE_PACKET_ERROR
    , PNECardErrorType_PARSE_TRACK_ERROR
    , PNECardErrorType_EMPTY_CARD_INFO
    , PNECardErrorType_UNKNOWN_CARD_TYPE
    , PNECardErrorType_CARD_NOT_VALID
    , PNECardErrorType_USER_CANCELLED
    , PNECardErrorType_SKIP
    , PNECardErrorType_INVALID_DATA_IN_COMMAND_APDU
    , PNECardErrorType_TERMINAL_NOR_READY
    , PNECardErrorType_NO_SMART_CARD_IN_SLOT
    , PNECardErrorType_INVALID_CARD
    , PNECardErrorType_TRANSACTION_ALREADY_IN_PROGRESS
    , PNECardErrorType_DATA_MISSING_FROM_COMMAND_APDU
    , PNECardErrorType_UNSUPPORTED_CARD
    , PNECardErrorType_MISSING_FILE
    , PNECardErrorType_ICC_READ_ERROR
};


@property (readonly, nonatomic) PNECardErrorType type;
@property (readonly, nonatomic) NSString *       errorMessage;

- (instancetype)initWithType:(PNECardErrorType)aType errorMessage:(NSString *)anErrorMessage;

@end
