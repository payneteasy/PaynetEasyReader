#scp admin@10.0.1.13:/Users/admin/svn/PaynetEasyReader/Reader/libPaynetEasyReader.a Reader/libPaynetEasyReader.a

set -eux

ID=52930
wget -O Reader/libPaynetEasyReader.a   http://paynet-qa.clubber.me/reader-ios/libPaynetEasyReader-${ID}.a
wget -O PaynetEasyReader.framework.zip http://paynet-qa.clubber.me/reader-ios/PaynetEasyReader.framework-${ID}.zip

cat how-to-release.txt
