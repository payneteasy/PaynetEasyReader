//
// Created by Evgeniy Sinev on 07/08/14.
// Copyright (c) 2014 Evgeniy Sinev. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PNEReaderManager;
@class PNEReaderInfo;
@protocol PNEReaderPresenter;


@interface PNEReaderFactory : NSObject

- (id<PNEReaderManager>) createManager:(PNEReaderInfo *)aReader
                                amount:(NSDecimalNumber *)anAmount
                              currency:(NSString *)aCurrency
                             presenter:(id<PNEReaderPresenter>) aPresenter;
@end