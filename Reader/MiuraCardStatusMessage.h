//
// Created by Evgeniy Sinev on Wed Aug 13 01:22:29 MSK 2014
//

#import <Foundation/Foundation.h>

@class BerTlv;

@interface MiuraCardStatusMessage : NSObject

@property(nonatomic, readonly) BOOL isCardPresent;
@property(nonatomic, readonly) BOOL isEmvCompatible;

@property(nonatomic, readonly) BOOL isMsrDataAvailable;
@property(nonatomic, readonly) BOOL isTrack1Available;
@property(nonatomic, readonly) BOOL isTrack2Available;
@property(nonatomic, readonly) BOOL isTrack3Available;

@property(copy, nonatomic, readonly) NSString *track1;
@property(copy, nonatomic, readonly) NSString *track2;
@property(copy, nonatomic, readonly) NSString *track3;
@property(copy, nonatomic, readonly) NSString *maskedTrack2;

@property(copy, nonatomic, readonly) BerTlv *tlv;

- (id)initWithBerTlv:(BerTlv *)aBerTlv;

- (NSString *)description;

+ (BOOL)isApplied:(BerTlv *)aBerTlv;

@end
