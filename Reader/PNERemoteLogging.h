#import <Foundation/Foundation.h>

@interface PNERemoteLogging : NSObject

+(void)incrementSession;

+(void)     send:(const char*) aSender
            line:(int) aLine
  originalFormat:(NSString *)aOriginalFormat
                , ...
;

+ (dispatch_queue_t)internalQueue;
@end



