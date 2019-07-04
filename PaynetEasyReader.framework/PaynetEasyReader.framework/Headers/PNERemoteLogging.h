#import <Foundation/Foundation.h>

@interface PNERemoteLogging : NSObject

+(void)incrementSession;

+(void)     send:(const char*) aSender
            line:(int) aLine
  originalFormat:(NSString *)aOriginalFormat
                , ...
;

@end



