/**
 * This file is generated using the remodel generation script.
 * The name of the input file is PNEConfigurationContinuation.value
 */

#import <Foundation/Foundation.h>

@interface PNEConfigurationContinuation : NSObject <NSCopying, NSCoding>

/**
 * reader configuration service base url. For example: https://gate.payneteasy.com/rki-proxy
 */
@property (nonatomic, readonly, copy) NSString *baseUrl;
/**
 * merchant login
 */
@property (nonatomic, readonly, copy) NSString *merchantLogin;
/**
 * merchant control key
 */
@property (nonatomic, readonly, copy) NSString *merchantKey;
/**
 * end point id
 */
@property (nonatomic, readonly) int64_t merchantEndPointId;
/**
 * merchant name, some readers can display it on its display
 */
@property (nonatomic, readonly, copy) NSString *merchantName;

- (instancetype)initWithBaseUrl:(NSString *)baseUrl merchantLogin:(NSString *)merchantLogin merchantKey:(NSString *)merchantKey merchantEndPointId:(int64_t)merchantEndPointId merchantName:(NSString *)merchantName;

@end

