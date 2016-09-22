# Uncomment this line to define a global platform for your project

source 'http://git.sdp.nd/Mirrors/specs.git'
source 'http://git.sdp.nd/cocoapods/spec.git'

platform :ios, '7.0'
xcodeproj 'nd_kcb_ios.xcodeproj'
workspace 'nd_kcb_ios.xcworkspace'

def common_pods
	pod 'CocoaLumberjack'
end

target :nd_kcb_ios do
    common_pods
    
    pod 'DateTools', '~> 1.7'
    pod 'MBProgressHUD', '~> 0.9.2'
    pod 'SDWebImage', '~>3.7'
    pod 'Masonry', '~>0.6.4'
    
    xcodeproj 'nd_kcb_ios.xcodeproj'
    link_with 'nd_kcb_iosTests'
end
