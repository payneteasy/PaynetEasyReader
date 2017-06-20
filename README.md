PaynetEasyReader SDK for iOS
============================

PaynetEasyReader SDK provides fast, easy integration with mPOS readers in mobile apps.

Supported mPOS
--------------

* Spire Payments
 * SPm2
 * SPm20
* Miura Systems
 * Miura Shuttle (M006)
 * Miura M010
 * Miura M007 

Instructions
------------

The PaynetEasyReader SDK includes header files and a single static library. We'll walk you through integration and usage.

### Sign up for 

* You'll need to contact to payneteasy.com for merchant login.
 

### Requirements

*   Supports target deployment of iOS version 7.0+ and instruction set armv7+ (including 64-bit), x86_64, i386 (for emulator).

### Setup

Add to your Podfile
```
pod "PaynetEasyReader", :git => 'git@github.com:evsinev/PaynetEasyReader.git', :tag => '$VERSION'
```
Please change $VERSION to the latest from the https://github.com/payneteasy/PaynetEasyReader/releases

### For Miura and Spire

Add to your *-Info.plist
```xml
<key>UISupportedExternalAccessoryProtocols</key>
  <array>
    <string>com.miura.shuttle</string>
    <string>com.thyron</string>
  </array>
```

### Sample Code

Implement protocol PNEReaderPresenter
```obj-c

- (void)stateChanged:(PNEReaderEvent *)aEvent {
   // displays reader status
}

- (PNEProcessingContinuation *)onCard:(PNECard *)aCard {
    // provide payneteasy.com account info
    PNEProcessingContinuation * continuation = [PNEProcessingContinuation
            continuationWithBaseUrl:@"https://sandbox.payneteasy.com/paynet"
                      merchantLogin:MERCHANT_LOGIN
                        merchantKey:MERCHANT_KEY
                 merchantEndPointId:END_POINT_ID
                 orderInvoiceNumber:[[NSUUID UUID] UUIDString]];

    return continuation;
}

- (void)onCardError:(PNECardError *)aError {
    // deal with errors
}

- (void)onProcessingEvent:(PNEProcessingEvent *)aEvent {
    // wait for Result event
}

- (PNEConfigurationContinuation *)onConfiguration {
    return [[PNEConfigurationContinuation alloc]
            initWithBaseUrl:@"https://paynet-qa.clubber.me/paynet/rki"
              merchantLogin:_payment.merchantLogin
                merchantKey:_payment.merchantKey
         merchantEndPointId:_payment.merchantEndPointId
               merchantName:_payment.merchantName
    ];
}

```

Starts Reader Manager

```obj-c
PNEReaderFactory *factory = [[PNEReaderFactory alloc] init];
PNEReaderInfo *reader = [PNEReaderInfo infoWithType:PNEReaderType_MIURA_OR_SPIRE];
// Note: manager must be a property or a field or a static local variable, to prevent an elimination
manager = [factory createManager:reader
                          amount:[NSDecimalNumber decimalNumberWithString:@"1.00"]
                        currency:@"RUB"
                       presenter:self];
[manager start];
```

