//
// Created by Evgeniy Sinev on 28/03/16.
// Copyright (c) 2016 payneteasy. All rights reserved.
//

#import <Foundation/Foundation.h>

// This message is used to indicate to the EPOS the status of an ICC transaction.
// The EPOS may choose to terminate the transaction if external events require it to do so.

// Status values marked with 'cancellation' will check the response value
// and will react to a transaction cancellation request.
typedef NS_ENUM(int16_t, SpireStatusType) {

      SpireStatusType_CardEntryPrompted                 = 0xA0  // cancellation
    , SpireStatusType_SmartcardInserted                 = 0xA1  // cancellation
    , SpireStatusType_SmartcardRemovePrompted           = 0xA2  // cancellation
    , SpireStatusType_SmartcardRemoved                  = 0xA3
    , SpireStatusType_CardEntryBypassed                 = 0xA4
    , SpireStatusType_CardEntryTimedOut                 = 0xA5
    , SpireStatusType_CardEntryAborted                  = 0xA6
    , SpireStatusType_CardSwiped                        = 0xA7  // cancellation
    , SpireStatusType_CardSwipeError                    = 0xA8  // cancellation
    , SpireStatusType_ContactlessCardTapped             = 0xA9  // cancellation
    , SpireStatusType_ContactlessCardTapError           = 0xAA  // cancellation
    , SpireStatusType_ApplicationSelectionStarted       = 0xB0  // cancellation
    , SpireStatusType_ApplicationSelectionCompleted     = 0xB1  // cancellation
    , SpireStatusType_PinEntryStarted                   = 0xC0  // cancellation
    , SpireStatusType_PinEntryCompleted                 = 0xC1
    , SpireStatusType_PinEntryAborted                   = 0xC2
    , SpireStatusType_PinEntryBypassed                  = 0xC3
    , SpireStatusType_PinEntryTimedOut                  = 0xC4
    , SpireStatusType_LastPinEntry                      = 0xC5
    , SpireStatusType_AmountConfirmationStarted         = 0xD0  // cancellation
    , SpireStatusType_AmountConfirmationCompleted       = 0xD1
    , SpireStatusType_AmountConfirmationAborted         = 0xD2
    , SpireStatusType_AmountConfirmationBypassed        = 0xD3
    , SpireStatusType_AmountConfirmationTimedOut        = 0xD4
    , SpireStatusType_DCCSelectionStarted               = 0xE0  // cancellation
    , SpireStatusType_DCCCardholderCurrencySelected     = 0xE1
    , SpireStatusType_DCCCardholderCurrencyNotSelected  = 0xE2
    , SpireStatusType_DCCSelectionTimedOut              = 0xE3
    , SpireStatusType_GratuityEntryStarted              = 0xF0 // cancellation
    , SpireStatusType_GratuityEntered                   = 0xF1
    , SpireStatusType_GratuityNotEntered                = 0xF2
    , SpireStatusType_GratuityEntryTimedOut             = 0xF3

    , SpireStatusType_UNKNOWN                           =   -1
};

