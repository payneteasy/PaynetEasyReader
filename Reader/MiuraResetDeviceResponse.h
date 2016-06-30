//
// Created by Evgeniy Sinev on Wed Aug 13 01:22:29 MSK 2014
//

#import <Foundation/Foundation.h>

@class BerTlv;

@interface MiuraResetDeviceResponse : NSObject


@property(copy, nonatomic, readonly) NSString *deviceSerialNumber;

@property(copy, nonatomic, readonly) BerTlv *tlv;

- (id)initWithBerTlv:(BerTlv *)aBerTlv;

- (NSString *)description;

+ (BOOL)isApplied:(BerTlv *)aBerTlv;

@end
