//
// Created by Evgeniy Sinev on Sat Aug 16 01:03:06 MSK 2014
//

#import <Foundation/Foundation.h>

@class PaynetStatusResponse;

extern NSString *const PNEProcessingErrorDomain;

typedef NS_ENUM(NSUInteger, PNEProcessingErrorCode) {
    /**
     * You should invoke this method only if type is PNEProcessingEventType_RESULT
     * and result.status is PaynetStatusTypeApproved
     */
     PNEProcessingErrorCodeWrongState = 0,

    /**
     * Couldn't parse 9F34 tag
     */
     PNEProcessingErrorCode9434ParsingError = 1

};



@interface PNEProcessingEvent : NSObject

typedef NS_ENUM(NSInteger, PNEProcessingEventType) {
      PNEProcessingEventType_EXCEPTION
    , PNEProcessingEventType_ERROR_3D_SECURE

    , PNEProcessingEventType_SALE_SENDING
    , PNEProcessingEventType_SALE_RESPONSE_WAITING
    , PNEProcessingEventType_ADVICE_REQUIRED
    , PNEProcessingEventType_ADVICE_SENDING
    , PNEProcessingEventType_ADVICE_RESPONSE_WAITING
    , PNEProcessingEventType_RESULT
};

@property (readonly, nonatomic) PNEProcessingEventType type;
@property (copy, readonly, nonatomic) NSString * errorMessage;
@property (copy, readonly, nonatomic) PaynetStatusResponse * result;

- (instancetype)initWithType:(PNEProcessingEventType)aType errorMessage:(NSString *)anErrorMessage;

- (instancetype)initWithType:(PNEProcessingEventType)aType;

- (instancetype)initWithResult:(PaynetStatusResponse *)aResult;

- (BOOL) shouldGetSignature:(NSError **)aErrorPtr;

+ (instancetype)eventWithResult:(PaynetStatusResponse *)aResult;


+ (instancetype)eventWithType:(PNEProcessingEventType)aType;


+ (instancetype)eventWithType:(PNEProcessingEventType)aType errorMessage:(NSString *)anErrorMessage;


@end
