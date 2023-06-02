//
// Created by Evgeniy Sinev on Sat Aug 16 00:29:18 MSK 2014
//

#import <Foundation/Foundation.h>

@interface PNEProcessingContinuation : NSObject

@property (copy, readonly, nonatomic) NSString   * baseUrl;
@property (copy, readonly, nonatomic) NSString   * merchantLogin;
@property (copy, readonly, nonatomic) NSString   * merchantKey;
@property (      readonly, nonatomic) NSUInteger   merchantEndPointId;
@property (copy, readonly, nonatomic) NSString   * orderInvoiceNumber;

@property (copy,           nonatomic) NSString * customerEmail;
@property (copy,           nonatomic) NSString * customerAddress;
@property (copy,           nonatomic) NSString * customerCountry;
@property (copy,           nonatomic) NSString * customerPhone;
@property (copy,           nonatomic) NSString * orderMerchantData;
@property (copy,           nonatomic) NSString * orderDescription;

- (instancetype)initWithBaseUrl:(NSString *)aBaseUrl
                  merchantLogin:(NSString *)aMerchantLogin
                    merchantKey:(NSString *)aMerchantKey
             merchantEndPointId:(NSUInteger)aMerchantEndPointId
             orderInvoiceNumber:(NSString *)anOrderInvoiceNumber;

+ (instancetype)continuationWithBaseUrl:(NSString *)aBaseUrl
                          merchantLogin:(NSString *)aMerchantLogin
                            merchantKey:(NSString *)aMerchantKey
                     merchantEndPointId:(NSUInteger)aMerchantEndPointId
                     orderInvoiceNumber:(NSString *)anOrderInvoiceNumber;


@end
