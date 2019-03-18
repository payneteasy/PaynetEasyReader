//
//  Created by Sergey Anisiforov on 25/02/2019.
//  Copyright © 2019 payneteasy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PNETransaction : NSObject

@property (nonatomic, strong) NSDecimalNumber *amountCents;
@property (nonatomic, strong) NSString *currencyNum;

+ (instancetype)transactionWithAmountCents:(NSDecimalNumber *)amountCents currencyCode:(NSString *)currencyCode;

@end
