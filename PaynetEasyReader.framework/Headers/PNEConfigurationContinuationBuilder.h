#import <Foundation/Foundation.h>

@class PNEConfigurationContinuation;

@interface PNEConfigurationContinuationBuilder : NSObject

+ (instancetype)configurationContinuation;

+ (instancetype)configurationContinuationFromExistingConfigurationContinuation:(PNEConfigurationContinuation *)existingConfigurationContinuation;

- (PNEConfigurationContinuation *)build;

- (instancetype)withBaseRkiUrl:(NSString *)baseRkiUrl;

- (instancetype)withBaseProcessingUrl:(NSString *)baseProcessingUrl;

- (instancetype)withMerchantLogin:(NSString *)merchantLogin;

- (instancetype)withMerchantKey:(NSString *)merchantKey;

- (instancetype)withMerchantEndPointId:(int64_t)merchantEndPointId;

- (instancetype)withMerchantName:(NSString *)merchantName;

@end

