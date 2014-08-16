//
// Created by Evgeniy Sinev on 07/08/14.
// Copyright (c) 2014 Evgeniy Sinev. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PNEReaderEvent;
@class PNEProcessingContinuation;
@class PNECard;
@class PNECardError;
@class PNEProcessingEvent;

@protocol PNEReaderPresenter <NSObject>

- (void) stateChanged:(PNEReaderEvent *)aEvent;

- (PNEProcessingContinuation *) onCard:(PNECard *)aCard;

- (void) onCardError:(PNECardError *)aError;

- (void) onProcessingEvent:(PNEProcessingEvent *)aEvent;

@end