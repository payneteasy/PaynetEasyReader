//
// Created by Evgeniy Sinev on Sat Aug 16 01:58:34 MSK 2014
//

#import <Foundation/Foundation.h>

@class BerTlv;

@interface MiuraDeviceStatusMessage : NSObject

typedef NS_ENUM(NSInteger, MiuraDeviceStatusType) {
      MiuraDeviceStatusType_DEVICE_POWER_ON
    , MiuraDeviceStatusType_PIN_ENTRY_EVENT
    , MiuraDeviceStatusType_APPLICATION_SELECTION
    , MiuraDeviceStatusType_DEVICE_POWERING_OFF
    , MiuraDeviceStatusType_DEVICE_REBOOTING
    , MiuraDeviceStatusType_MPI_RESTARTING
    , MiuraDeviceStatusType_NOT_FOUND
    , MiuraDeviceStatusType_UNKNOWN
};

typedef NS_ENUM(NSInteger, MiuraPinEntryStatus) {
      MiuraPinEntryStatus_LAST_POSSIBLE_ATTEMPT
    , MiuraPinEntryStatus_PIN_OK
    , MiuraPinEntryStatus_INCORRECT_PIN
    , MiuraPinEntryStatus_PIN_ENTRY_ERROR
    , MiuraPinEntryStatus_PIN_ENTRY_COMPLETED
    , MiuraPinEntryStatus_NOT_FOUND
};

@property (readonly, nonatomic) MiuraDeviceStatusType type;
@property (copy, readonly, nonatomic) NSString       *text;
@property (readonly, nonatomic) MiuraPinEntryStatus   pinEntryStatus;
@property (readonly, nonatomic) NSUInteger            pinDigits;

- (id)initWithTlv:(BerTlv *)aTlv ;

- (NSString *)description;
+(BOOL) isApplied:(BerTlv *) aTlv;

@end
