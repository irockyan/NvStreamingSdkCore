#
# Be sure to run `pod lib lint NvStreamingSdkCore.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'NvStreamingSdkCore'
  s.version          = '0.2.1'
  s.summary          = '美摄sdk'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/zhaoyan/NvStreamingSdkCore'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'README.md' }
  s.author           = { 'zhaoyan' => 'zhaoyan@xiaobing.ai' }
  s.source           = { :git => 'https://github.com/zhaoyan/NvStreamingSdkCore.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '12.0'

  s.source_files = 'NvStreamingSdkCore.framework/Headers/*.h'
  s.public_header_files = "NvStreamingSdkCore.framework/Headers/*.h"
  s.ios.vendored_frameworks = "NvStreamingSdkCore.framework"
  
  # s.resource_bundles = {
  #   'NvStreamingSdkCore' => ['NvStreamingSdkCore/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
