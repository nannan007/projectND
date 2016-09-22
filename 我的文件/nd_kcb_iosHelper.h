//
//  UIModuleHelper.h
//  UIModule
//
//  Created by devp on 5/12/15.
//  Copyright (c) 2015 ND. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "KCBTermSetting.h"

#define SCREEN_WIDTH  ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT  ([UIScreen mainScreen].bounds.size.height)

@interface nd_kcb_iosHelper : NSObject

+ aaaa(NSString *)localizedStringForKey:(NSString *)key inBundle:(NSBundle *)bundle;
+ (NSString *)localizedStringForKey:(NSString *)key;

+ (NSString *)imagePathFor:(NSString *)baseImageName withTargetScreenScale:(CGFloat)scale inBundle:(NSBundle *)bundle;
+ (UIImage *)imageNamed:(NSString *)name;

+ (NSString *)colorHexStringNamed:(NSString *)name;
+ (UIColor *)colorWithKey:(NSString *)key;

+ (BOOL)isSameDayAsServerDate:(NSInteger)dayIndex inWeek:(NSInteger)weekNumber withPlans:(NSDictionary *)plans withTermSetting:(KCBTermSetting *)termSetting;

+ (BOOL)isInSchoolTerm:(KCBTermSetting *)termSetting;

@end
