Pod::Spec.new do |spec|
  spec.name             = 'PaynetEasyReader'
  spec.version          = '0.2.16-S-2'
  spec.license          = { type: 'APACHE', file: 'LICENSE.txt' }
  spec.homepage         = 'https://www.payneteasy.com'
  spec.authors          = { 'PaynetEasyReader' => 'es@payneteasy.com' }
  spec.summary          = 'mPOS library'
  spec.source           = { :git => 'https://github.com/payneteasy/PaynetEasyReader.git', :tag => "#{spec.version}" }
  spec.platform         = :ios, '8.0'
  spec.ios.deployment_target = '8.0'
  spec.requires_arc     = true
  spec.source_files     = 'Reader/*.h'
  spec.preserve_path    = 'Reader/*.a'
  #spec.frameworks      = 'UIKit'
  spec.dependency         'BerTlv', '~> 0.1.4'
  spec.dependency         'TDOAuth', '~> 1.0'
  spec.dependency         'RemoteLogger', '0.1.2'
  spec.libraries        = 'PaynetEasyReader'
  spec.xcconfig         = { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/PaynetEasyReader/Reader"' }
end

