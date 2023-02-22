#
# Be sure to run `pod lib lint Fujifilm_SPA_SDK_iOS.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'Fujifilm_SPA_SDK_iOS'
  s.version          = '0.1.4'
  s.summary              = "Enable photo product output with Fujifilm! Access over 100 photo products and control the availability and pricing through fujifilmapi.com"
  s.description          = <<-DESC
                            Enable photo product output through Fujifilm! Gives you access to over 100 popular photo gift products and allows you to control the availability and pricing of each product through our web portal. Please visit http://www.fujifilmapi.com to sign-up and obtain an API key, set product pricing, and configure your application.
                            DESC

  s.homepage         = 'https://github.com/sfriedman/Fujifilm_SPA_SDK_iOS'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'iOS/NewiOSPodsWorkspace/Fujifilm_SPA_SDK_iOS/LICENSE' }
  s.author           = { 'Sam Friedman' => 'sam.friedman@fujifilm.com' }
  s.source           = {:git => 'ssh://fssdtfs.fujifilmesys.com:22/Fujifilm2/FSSD/_git/NativeDev', :branch => 'iOS-Cocoapods-Public-Private', :tag => s.version}
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '12.0'

  s.source_files = 'iOS/NewiOSPodsWorkspace/Fujifilm_SPA_SDK_iOS/Fujifilm_SPA_SDK_iOS/Classes/**/*'
  
  # s.resource_bundles = {
  #   'Fujifilm_SPA_SDK_iOS' => ['Fujifilm_SPA_SDK_iOS/Assets/*.png']
  # }
#  s.private_header_files = 'Pod/Classes/Fujifilm_SPA_SDK_iOS.h'
  s.public_header_files = 'iOS/NewiOSPodsWorkspace/Fujifilm_SPA_SDK_iOS/Fujifilm_SPA_SDK_iOS/Classes/Public/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  s.dependency 'FFImagePicker2'
  s.dependency 'Braintree', '~> 5.20'
end
