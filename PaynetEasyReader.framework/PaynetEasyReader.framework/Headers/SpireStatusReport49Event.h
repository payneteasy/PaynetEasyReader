//
//  Generated. Do not edit!!!
//

#import <Foundation/Foundation.h>

#import "SpireEvent.h"

#import "SpireStatusType.h"


@interface SpireStatusReport49Event : SpireEvent

@property (nonatomic         ) int8_t                 messageIdentifier             ;
@property (nonatomic         ) int8_t                 sequenceNumber                ;
@property (nonatomic         ) SpireStatusType        status                        ;

- (id)init;

- (id)initFromData:(NSData *)aData;

- (NSData *)createData;

- (NSString *)description;

@end