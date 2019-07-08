#scp admin@10.0.1.13:/Users/admin/svn/PaynetEasyReader/Reader/libPaynetEasyReader.a Reader/libPaynetEasyReader.a

set -eux

ID=104235
#wget -O Reader/libPaynetEasyReader.a   http://paynet-qa.clubber.me/reader-ios/libPaynetEasyReader-${ID}.a
wget -O PaynetEasyReader.framework.zip http://paynet-qa.clubber.me/reader-ios/PaynetEasyReader.framework-${ID}.zip

rm -rf unzip
rm -rf PaynetEasyReader.framework
unzip PaynetEasyReader.framework.zip -d unzip
mv unzip/Carthage/Build/iOS/PaynetEasyReader.framework PaynetEasyReader.framework
rm -rf unzip

cd PaynetEasyReader.framework
lipo -remove x86_64 PaynetEasyReader -o PaynetEasyReader
lipo -remove i386 PaynetEasyReader -o PaynetEasyReader
cd ..

cat how-to-release.txt
