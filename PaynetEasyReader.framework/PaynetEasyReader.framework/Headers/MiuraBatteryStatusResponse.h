//
// Created by Evgeniy Sinev on 14/04/16.
//

#import <Foundation/Foundation.h>

@class BerTlv;


typedef NS_ENUM(NSInteger, MiuraBatteryStatusType) {
    MiuraBatteryStatusType_NOT_CHARGING  =  0,
    MiuraBatteryStatusType_CHARGING      =  1,
    MiuraBatteryStatusType_FULLY_CHARGED =  2,
    MiuraBatteryStatusType_UNKNOWN       = -1
};


@interface MiuraBatteryStatusResponse : NSObject

@property (nonatomic, readonly) MiuraBatteryStatusType  batteryStatus;
@property (nonatomic, readonly) int8_t                  batteryPercentage;

+ (BOOL)isApplied:(BerTlv *)aBerTlv;

- (id)initWithBerTlv:(BerTlv *)aBerTlv;

- (NSString *)description;

@end