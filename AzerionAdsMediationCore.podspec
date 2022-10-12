Pod::Spec.new do |s|

s.name = 'AzerionAdsMediationCore'
s.version = '1.0.0'
s.summary = 'Core framework that contains interfaces related to other mediation adapters.'
s.homepage = 'https://github.com/azerion/azerion-mediation-core-ios'
s.authors = { 'Azerion' => 'adsdk_techuser@azerion.com' }
s.source = { :git => 'https://github.com/azerion/azerion-mediation-core-ios.git', :tag => "v#{s.version}" }
s.source_files = 'AzerionAdsMediationCore.xcframework/*/*/Headers/*.{h}'
s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
s.documentation_url = 'https://github.com/azerion/azerion-mediation-core-ios'
s.ios.deployment_target = '10.0'
s.vendored_frameworks = 'AzerionAdsMediationCore.xcframework'

end
