//
// Created by Evgeniy Sinev on Fri Aug 15 01:40:24 MSK 2014
//

#import <Foundation/Foundation.h>

@interface PaynetStatusResponse : NSObject

typedef NS_ENUM(NSInteger, PaynetStatusResponseType) {
    // error
      PaynetStatusResponseTypeError              = 1
    // validation-error
    , PaynetStatusResponseTypeValidationError    = 2

    // status-response
    , PaynetStatusResponseTypeResponse           = 3

    // ???
    , PaynetStatusResponseTypeUnknown            = 4

    // Network Error
    , PaynetStatusResponseTypeNetworkError       = 5

    // Timeout
    , PaynetStatusResponseTypeTimeout            = 6
};

typedef NS_ENUM(NSInteger, PaynetStatusType) {
    PaynetStatusTypeApproved     = 1
    , PaynetStatusTypeDeclined   = 2
    , PaynetStatusTypeFiltered   = 3
    , PaynetStatusTypeProcessing = 4
    , PaynetStatusTypeUnknown    = 5
    , PaynetStatusTypeError      = 6
};


@property (      nonatomic, readonly) PaynetStatusResponseType type;
@property (      nonatomic, readonly) PaynetStatusType         status;
@property (      nonatomic, readonly) NSInteger                errorCode;
@property (copy, nonatomic, readonly) NSString *               errorMessage;
@property (      nonatomic, readonly) int64_t                  paynetOrderId;
@property (copy, nonatomic, readonly) NSString *               merchantOrderId;
@property (copy, nonatomic, readonly) NSString *               stage;
@property (copy, nonatomic, readonly) NSString *               responseCode;
@property (copy, nonatomic, readonly) NSString *               emvIssueResponse;

@property (copy, nonatomic, readonly) NSString *               terminalId;
@property (copy, nonatomic, readonly) NSString *               paynetProcessingDate;
@property (copy, nonatomic, readonly) NSString *               acquirerProcessingDate;
@property (copy, nonatomic, readonly) NSString *               readerProcessingDate;
@property (copy, nonatomic, readonly) NSString *               emvTerminalAid_9F06;
@property (copy, nonatomic, readonly) NSString *               emvTvr_95;
@property (copy, nonatomic, readonly) NSString *               emvAppLabel_50;
@property (copy, nonatomic, readonly) NSString *               emvCvm_9F34;
@property (copy, nonatomic, readonly) NSString *               emvPanSequence_5f34;
@property (copy, nonatomic, readonly) NSString *               emvCid_9f27;
@property (copy, nonatomic, readonly) NSString *               emvAppCryptogram_9f26;
@property (copy, nonatomic, readonly) NSString *               cardholderName;
@property (copy, nonatomic, readonly) NSString *               cardType;
@property (copy, nonatomic, readonly) NSString *               lastFourDigits;
@property (copy, nonatomic, readonly) NSString *               receiptId;
@property (copy, nonatomic, readonly) NSString *               rrn;
@property (copy, nonatomic, readonly) NSString *               authCode;


- (id) initWithDictionary:(NSDictionary *)aDictionary;

- (id)initWithError:(NSError *)error;

- (id)initWithErrorTimeout;

- (id)initWithErrorStatusCode:(NSInteger)code headers:(NSDictionary *)headers;

- (NSDictionary *)dictionary;

- (NSString *)description;


@end
