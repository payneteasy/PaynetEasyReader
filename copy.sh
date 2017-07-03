cd Reader
cp ../../reader-ios/Pod/Classes/*.h .

# Network
cp ../../reader-ios/Pod/Classes/Private/Network/Messages/PaynetStatusResponse.h .

# Miura
cp ../../reader-ios/Pod/Classes/Private/Miura/Apdu/Response/MiuraCardStatusMessage.h .
cp ../../reader-ios/Pod/Classes/Private/Miura/Apdu/Response/MiuraDeviceStatusMessage.h .
cp ../../reader-ios/Pod/Classes/Private/Miura/Apdu/Response/MiuraBatteryStatusResponse.h .
cp ../../reader-ios/Pod/Classes/Private/Miura/Apdu/Response/MiuraResetDeviceResponse.h .

# Spire
cp ../../reader-ios/Pod/Classes/Private/Spire/Messages/Events/SpireStatusReport49Event.h .
cp ../../reader-ios/Pod/Classes/Private/Spire/Messages/Types/SpireStatusType.h .
cp ../../reader-ios/Pod/Classes/Private/Spire/Messages/Base/ISpireMessage.h .
cp ../../reader-ios/Pod/Classes/Private/Spire/Messages/Base/SpireEvent.h .
