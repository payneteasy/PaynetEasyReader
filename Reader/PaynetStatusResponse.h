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
@property (      nonatomic, readonly) NSUInteger               paynetOrderId;
@property (copy, nonatomic, readonly) NSString *               merchantOrderId;
@property (copy, nonatomic, readonly) NSString *               stage;
@property (copy, nonatomic, readonly) NSString *               responseCode;
@property (copy, nonatomic, readonly) NSString *               emvIssueResponse;


- (id) initWithDictionary:(NSDictionary *)aDictionary;

- (id)initWithError:(NSError *)error;

- (id)initWithErrorStatusCode:(NSInteger)code;

- (NSString *)description;


@end
