//
//  Created by Sergey Anisiforov on 28/02/2019.
//  Copyright © 2019 payneteasy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTextCheckingResult (Values)

- (NSString *)valueOfRangeWithIndex:(NSInteger)index source:(NSString *)source;

@end
