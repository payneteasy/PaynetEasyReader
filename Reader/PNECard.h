//
// Created by Evgeniy Sinev on Sat Aug 16 00:27:04 MSK 2014
//

#import <Foundation/Foundation.h>

@interface PNECard : NSObject

@property (copy, readonly, nonatomic) NSString *scheme;
@property (copy, readonly, nonatomic) NSString *expiryYear2;
@property (copy, readonly, nonatomic) NSString *expiryMonth;
@property (copy, readonly, nonatomic) NSString *encryptedData;
@property (copy, readonly, nonatomic) NSString *panFirstDigits;
@property (copy, readonly, nonatomic) NSString *panLastDigits;
@property (copy, readonly, nonatomic) NSString *cardHolderName;
@property (      readonly, nonatomic) BOOL      pinEntered;

- (instancetype)initWithScheme:(NSString *)aScheme
                   expiryYear2:(NSString *)expiryYear2
                   expiryMonth:(NSString *)expiryMonth
                 encryptedData:(NSString *)encryptedData
                panFirstDigits:(NSString *)panFirstDigits
                 panLastDigits:(NSString *)panLastDigits
                cardHolderName:(NSString *)cardHolderName
                    pinEntered:(BOOL      )aPinEntered;

- (NSString *)description;

@end
