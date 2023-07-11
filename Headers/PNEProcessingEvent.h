//
// Created by Evgeniy Sinev on Sat Aug 16 01:03:06 MSK 2014
//

#import <Foundation/Foundation.h>

@class PaynetStatusResponse;

typedef NS_ENUM(NSUInteger, PNEShouldGetSignature) {

    /**
     * Don't need to get signature
     */
    PNEShouldGetSignature_NO  = 0,

    /**
     * Get signature from the customer
     */
    PNEShouldGetSignature_YES = 1,

    /**
     * You should invoke this method only if type is PNEProcessingEventType_RESULT
     * and result.status is PaynetStatusTypeApproved
     */
    PNEShouldGetSignature_ErrorWrongState = -1,

    /**
     * Couldn't parse 9F34 tag
     */
    PNEShouldGetSignature_Error9434Parsing = -2

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
    , PNEProcessingEventType_ERROR_BAD_CREDENTIALS
    , PNEProcessingEventType_REVERSAL_SENDING
    , PNEProcessingEventType_REVERSAL_RESPONSE_WAITING
};

@property (readonly, nonatomic) PNEProcessingEventType type;
@property (copy, readonly, nonatomic) NSString * errorMessage;
@property (copy, readonly, nonatomic) PaynetStatusResponse * result;

- (instancetype)initWithType:(PNEProcessingEventType)aType;

- (instancetype)initWithType:(PNEProcessingEventType)aType errorMessage:(NSString *)anErrorMessage;

- (instancetype)initWithType:(PNEProcessingEventType)aType result:(PaynetStatusResponse *)aResult errorMessage:(NSString *)anErrorMessage;

- (instancetype)initWithResult:(PaynetStatusResponse *)aResult;

- (PNEShouldGetSignature) shouldGetSignature;

+ (instancetype)eventWithResult:(PaynetStatusResponse *)aResult;

+ (instancetype)eventWithResult:(PaynetStatusResponse *)aResult errorMessage:(NSString *)anErrorMessage;

+ (instancetype)eventWithType:(PNEProcessingEventType)aType;

+ (instancetype)eventWithType:(PNEProcessingEventType)aType errorMessage:(NSString *)anErrorMessage;


@end
