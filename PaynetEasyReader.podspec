Pod::Spec.new do |spec|
  spec.name                    = 'PaynetEasyReader'
  spec.version                 = '0.2.32-10'
  spec.license                 = { type: 'APACHE', file: 'LICENSE.txt' }
  spec.homepage                = 'https://www.payneteasy.com'
  spec.authors                 = { 'PaynetEasyReader' => 'es@payneteasy.com' }
  spec.summary                 = 'mPOS library'
  spec.source                  = { :git => 'https://github.com/payneteasy/PaynetEasyReader.git', :tag => "#{spec.version}" }
  spec.platform                = :ios, '12.0'
  spec.ios.deployment_target   = '12.0'
  spec.swift_version           = '4.1'
  spec.requires_arc            = true
  spec.source_files            = 'Headers/*.h'
  spec.dependency              'BerTlv', '~> 0.2'
  spec.dependency              'TDOAuth', '~> 1.0'
  spec.dependency              'RemoteLogger', '~> 0.1'
end
