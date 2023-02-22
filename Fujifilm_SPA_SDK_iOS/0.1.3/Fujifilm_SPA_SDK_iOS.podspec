#
# Be sure to run `pod lib lint Fujifilm_SPA_SDK_iOS.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'Fujifilm_SPA_SDK_iOS'
  s.version          = '0.1.3'
  s.summary          = 'A short description of Fujifilm_SPA_SDK_iOS.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
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
  s.dependency 'Braintree'
end
