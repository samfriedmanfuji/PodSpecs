#
# Be sure to run `pod lib lint Fujifilm_SPA_SDK_iOS.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'Fujifilm_SPA_SDK_iOS'
  s.version          = '2.4.0'
  s.summary              = "Enable photo product output with Fujifilm! Access over 100 photo products and control the availability and pricing through fujifilmapi.com"
  s.description          = <<-DESC
                            Enable photo product output through Fujifilm! Gives you access to over 100 popular photo gift products and allows you to control the availability and pricing of each product through our web portal. Please visit http://www.fujifilmapi.com to sign-up and obtain an API key, set product pricing, and configure your application.
                            DESC

  s.homepage         = 'https://github.com/samfriedmanfuji/PodSpecs'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'iOS/NewiOSPodsWorkspace/Fujifilm_SPA_SDK_iOS/LICENSE' }
  s.author           = { 'Sam Friedman' => 'sam.friedman@fujifilm.com' }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '14.0'
  s.default_subspec = 'Braintree'
s.subspec 'Braintree' do |braintree|
  braintree.dependency 'Braintree', '~> 6.32'
  braintree.source           = {:http => 'https://github.com/samfriedmanfuji/PodSpecs/releases/download/2.4.0/Fujifilm_SPA_SDK_iOS-Pods.zip'}

end
s.subspec 'Lite' do |lite|
    lite.source           = {:http => 'https://github.com/samfriedmanfuji/PodSpecs/releases/download/2.4.0/Fujifilm_SPA_SDK_iOS-Lite-Pods.zip'}
end

  s.vendored_frameworks = 'Fujifilm_SPA_SDK_iOS.xcframework', 'FFImagePicker2.xcframework'
end
