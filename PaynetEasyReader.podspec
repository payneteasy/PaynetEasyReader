Pod::Spec.new do |spec|
  spec.name             = 'PaynetEasyReader'
  spec.version          = '0.2.32-4'
  spec.license          = { type: 'APACHE', file: 'LICENSE.txt' }
  spec.homepage         = 'https://www.payneteasy.com'
  spec.authors          = { 'PaynetEasyReader' => 'es@payneteasy.com' }
  spec.summary          = 'mPOS library'
  spec.source           = { :git => 'https://github.com/payneteasy/PaynetEasyReader.git', :tag => "#{spec.version}" }
  spec.platform         = :ios, '8.0'
  spec.ios.deployment_target = '8.0'
  spec.ios.vendored_frameworks = 'PaynetEasyReader.framework'
  spec.requires_arc     = true
  spec.source_files     = 'PaynetEasyReader.framework/Headers/*.h'
  spec.dependency         'BerTlv', '~> 0.2'
  spec.dependency         'evsinev/TDOAuth', '~> 1.0'
  spec.dependency         'RemoteLogger', '~> 0.1'
end
