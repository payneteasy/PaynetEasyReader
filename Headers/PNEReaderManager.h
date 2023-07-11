//
// Created by Evgeniy Sinev on 07/08/14.
// Copyright (c) 2014 Evgeniy Sinev. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PNEReaderManager <NSObject>

- (void)start;
- (void)stop;

- (void)cancelPayment;
- (void)returnPayment;
- (void)reconciliation;

@end
