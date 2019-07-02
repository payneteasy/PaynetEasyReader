#import <Foundation/Foundation.h>

@class PNEConfigurationContinuation;

@interface PNEConfigurationContinuationBuilder : NSObject

+ (instancetype)configurationContinuation;

+ (instancetype)configurationContinuationFromExistingConfigurationContinuation:(PNEConfigurationContinuation *)existingConfigurationContinuation;

- (PNEConfigurationContinuation *)build;

- (instancetype)withBaseUrl:(NSString *)baseUrl;

- (instancetype)withMerchantLogin:(NSString *)merchantLogin;

- (instancetype)withMerchantKey:(NSString *)merchantKey;

- (instancetype)withMerchantEndPointId:(int64_t)merchantEndPointId;

- (instancetype)withMerchantName:(NSString *)merchantName;

@end

