#scp admin@10.0.1.13:/Users/admin/svn/PaynetEasyReader/Reader/libPaynetEasyReader.a Reader/libPaynetEasyReader.a

set -eux

ID=103798
#wget -O Reader/libPaynetEasyReader.a   http://paynet-qa.clubber.me/reader-ios/libPaynetEasyReader-${ID}.a
wget -O PaynetEasyReader.framework.zip http://paynet-qa.clubber.me/reader-ios/PaynetEasyReader.framework-${ID}.zip

rm -rf unzip
unzip PaynetEasyReader.framework.zip -d unzip
mv unzip/Carthage/Build/iOS/PaynetEasyReader.framework PaynetEasyReader.framework
rm -rf unzip

cat how-to-release.txt
