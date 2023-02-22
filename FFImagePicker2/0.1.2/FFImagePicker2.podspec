#
# Be sure to run `pod lib lint FFImagePicker2.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'FFImagePicker2'
  s.version          = '0.1.2'
  s.summary          = 'Image Picker used for Fujifilm SPA SDK'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/sfriedman/FFImagePicker2'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'iOS/NewiOSPodsWorkspace/FFImagePicker2/LICENSE' }
  s.author           = { 'sfriedman' => 'sam.friedman.contractor@fujifilm.com' }
  s.source           = { :git => 'ssh://fssdtfs.fujifilmesys.com:22/Fujifilm2/FSSD/_git/NativeDev', :branch => 'iOS-Cocoapods-Public-Private', :tag => '0.1.2'}
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '12.0'

  s.source_files = 'iOS/NewiOSPodsWorkspace/FFImagePicker2/FFImagePicker2/Classes/**/*'
  
  # s.resource_bundles = {
  #   'FFImagePicker2' => ['FFImagePicker2/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
