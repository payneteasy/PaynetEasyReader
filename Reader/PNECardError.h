//
// Created by Evgeniy Sinev on Sat Aug 16 00:27:31 MSK 2014
//

#import <Foundation/Foundation.h>

@interface PNECardError : NSObject <NSCopying>

typedef NS_ENUM(NSInteger, PNECardErrorType) {


      PNECardErrorType_PARSE_PACKET_ERROR                = 100 + 2
    , PNECardErrorType_PARSE_TRACK_ERROR                 = 100 + 3
    , PNECardErrorType_EMPTY_CARD_INFO                   = 100 + 4
    , PNECardErrorType_UNKNOWN_CARD_TYPE                 = 100 + 5
    , PNECardErrorType_CARD_NOT_VALID                    = 100 + 6
    , PNECardErrorType_SKIP                              = 100 + 7
    , PNECardErrorType_BAD_PACKET_LRC                    = 100 + 8

    , PNECardErrorType_ERROR_DOWNLOADING_CONFIGURATION   = 100 +  9
    , PNECardErrorType_NO_CONFIGURATION_CONTINUATION     = 100 + 10
    , PNECardErrorType_AMOUNT_NOT_MATCHED_APPROVED       = 100 + 11
    , PNECardErrorType_AMOUNT_NOT_MATCHED_DECLINED       = 100 + 12

    // see 6.24 START TRANSACTION:    SW1 = '9F' with SW2 = (See Table Below)
    // see 6.25 CONTINUE TRANSACTION: SW1 = '9F' with SW2 = (See Table Below)
    , PNECardErrorType_NOT_SRED_READY                    = 1000 + 0xE0 // Not SRED Ready
    , PNECardErrorType_INVALID_DATA_IN_COMMAND_APDU      = 1000 + 0x21 // Invalid data in command APDU
    , PNECardErrorType_TERMINAL_NOT_READY                = 1000 + 0x22 // Terminal not ready (Continue before Start)
    , PNECardErrorType_NO_SMART_CARD_IN_SLOT             = 1000 + 0x23 // No smartcard in slot
    , PNECardErrorType_INVALID_CARD                      = 1000 + 0x25 // Invalid card, card responded incorrectly, no MSR fall back allowed
    , PNECardErrorType_TRANSACTION_ALREADY_IN_PROGRESS   = 1000 + 0x26 // Transaction already in progress.
    , PNECardErrorType_DATA_MISSING_FROM_COMMAND_APDU    = 1000 + 0x27 // Data missing from command APDU (data field should list missing object(s)
    , PNECardErrorType_UNSUPPORTED_CARD                  = 1000 + 0x28 // Unsupported card, EMV Kernel not configured for this card, MSR fall back allowed
    , PNECardErrorType_MISSING_FILE                      = 1000 + 0x2a // Missing file (data field should list missing file)
    , PNECardErrorType_ICC_READ_ERROR                    = 1000 + 0x30 // ICC Read error, MSR fall back allowed
    , PNECardErrorType_INVALID_ISSUER_PUBLIC_KEY         = 1000 + 0x40 // Invalid issuer public key, hash check failed
    , PNECardErrorType_USER_CANCELLED                    = 1000 + 0x41 // User Cancelled, Transaction Cancelled by the Cancel key pressed or a command Abort received

    // see 6.26 START CONTACTLESS TRANSACTION
    , PNECardErrorType_TRANSACTION_TIMED_OUT             = 1000 + 0x42 // Transaction Timed Out - Polling time-out elapsed with no card presented in field
    , PNECardErrorType_TRANSACTION_ABORTED_BY_INSERTED   = 1000 + 0x43 // Transaction Aborted by a card being inserted
    , PNECardErrorType_TRANSACTION_ABORTED_BY_SWIPED     = 1000 + 0x44 // Transaction Aborted by a card being swiped
    , PNECardErrorType_NO_APPLICATIONS                   = 1000 + 0xC1 // No applications for the transaction conditions: Transaction should be performed using ICC or MSR
    , PNECardErrorType_TRANSACTION_NOT_POSSIBLE          = 1000 + 0xC2 // Transaction not possible: Transaction should be performed using ICC, MSR or another Card
    , PNECardErrorType_USE_ICC                           = 1000 + 0xC3 // The card asked for Chip interface: Transaction should be performed using ICC
    , PNECardErrorType_TERMINAL_CONNECTION_LOST          = 1000 + 0xC4 // Connection to terminal is lost
    , PNECardErrorType_HARDWARE_ERROR                    = 1000 + 0xCF // Hardware error


//    // 11.4 P2PE INITIALISE
//    , PNECardErrorType_                   = 1000 + 0xE0 // System file/certificate missing.
//    , PNECardErrorType_                   = 1000 + 0xE1 // Failed to generate RSA key
//    , PNECardErrorType_                   = 1000 + 0xE2 // Failed to load RSA key
//    , PNECardErrorType_                   = 1000 + 0xE3 // Failed to create RSA Certificate
//    , PNECardErrorType_                   = 1000 + 0xE4 // Failed to prepare output files
//    , PNECardErrorType_                   = 1000 + 0xE5 // Internal Error, contact Miura Systems

    , PNECardErrorType_SPIRE_GENERAL_FAILURE                                = 2000 +  0 // (mPOS) General Failure
    , PNECardErrorType_SPIRE_CHIP_APPLICATION_SELECTION_FAILURE             = 2000 +  1 // (Chip) Application Selection Failure
    , PNECardErrorType_SPIRE_CHIP_INITIATE_APPLICATION_PROCESSING_FAILURE   = 2000 +  2 // (Chip) Initiate Application Processing Failure
    , PNECardErrorType_SPIRE_CHIP_READ_APPLICATION_DATA_FAILURE             = 2000 +  3 // (Chip) Read Application Data Failure
    , PNECardErrorType_SPIRE_CHIP_OFFLINE_DATA_AUTHENTICATION_FAILURE       = 2000 +  4 // (Chip) Offline Data Authentication Failure
    , PNECardErrorType_SPIRE_CHIP_PROCESS_RESTRICTIONS_FAILURE              = 2000 +  5 // (Chip) Process Restrictions Failure
    , PNECardErrorType_SPIRE_CHIP_TERMINAL_RISK_MANAGEMENT_FAILURE          = 2000 +  6 // (Chip) Terminal Risk Management Failure
    , PNECardErrorType_SPIRE_CHIP_CARDHOLDER_VERIFICATION_METHOD_FAILURE    = 2000 +  7 // (Chip) Cardholder Verification Method Failure
    , PNECardErrorType_SPIRE_CHIP_TERMINAL_ACTION_ANALYSIS_FAILURE          = 2000 +  8 // (Chip) Terminal Action Analysis Failure
    , PNECardErrorType_SPIRE_CHIP_CARD_ACTION_ANALYSIS_FAILURE              = 2000 +  9 // (Chip) Card Action Analysis Failure
    , PNECardErrorType_SPIRE_CHIP_COMPLETION_FAILURE                        = 2000 + 10 // (Chip) Completion Failure
    , PNECardErrorType_SPIRE_EPOS_TRANSACTION_TERMINATED                    = 2000 + 11 // (EPOS) Transaction Terminated
    , PNECardErrorType_SPIRE_CHIP_NO_ANSWER_TO_RESET                        = 2000 + 12 // (Chip) No Answer to Reset
    , PNECardErrorType_SPIRE_SWIPE_READ_FAILURE                             = 2000 + 13 // (Swipe) Read Failure
    , PNECardErrorType_SPIRE_CHIP_CARD_REMOVED                              = 2000 + 14 // (Chip) Card Removed
    , PNECardErrorType_SPIRE_MPOS_USER_CANCELLED                            = 2000 + 15 // (mPOS) User Cancelled
    , PNECardErrorType_SPIRE_CHIP_NO_SUPPORTED_APPLICATIONS                 = 2000 + 16 // (Chip) No Supported Applications
    , PNECardErrorType_SPIRE_CHIP_CARD_BLOCKED                              = 2000 + 17 // (Chip) Card Blocked
    , PNECardErrorType_SPIRE_CHIP_READ_FAILURE                              = 2000 + 18 // (Chip) Read Failure
    , PNECardErrorType_SPIRE_MPOS_USER_TIME_OUT                             = 2000 + 19 // (mPOS) User Time Out
    , PNECardErrorType_SPIRE_MPOS_DUKPT_KEY_FAILURE                         = 2000 + 20 // (mPOS) DUKPT Key Failure
    , PNECardErrorType_SPIRE_MPOS_MK_SK_KEY_FAILURE                         = 2000 + 21 // (mPOS) MK/SK Key Failure
    , PNECardErrorType_SPIRE_CONTACTLESS_NOT_ALLOWED                        = 2000 + 22 // (Contactless) Not Allowed
    , PNECardErrorType_SPIRE_CONTACTLESS_ABORTED                            = 2000 + 23 // (Contactless) Aborted

    // Common
};


@property (readonly, nonatomic) PNECardErrorType type;
@property (readonly, nonatomic) NSString *       errorMessage;
@property (readonly, nonatomic) NSError  *       error; // since 0.2.0

- (instancetype)initWithType:(PNECardErrorType)aType errorMessage:(NSString *)anErrorMessage;

// since 0.2.0
- (instancetype)initWithType:(PNECardErrorType)aType error:(NSError *)aError;

- (NSString *)description;

@end
