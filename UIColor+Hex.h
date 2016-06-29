//
//  UIColor+Hex.h
//  UUVoice
//
//  Created by Nimger on 16/5/26.
//  Copyright © 2016年 NG. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Hex)

/**
 *  从十六进制字符串转为UIColor
 *
 *  @param color 十六进制颜色值,支持@“#123456”、 @“0X123456”、 @“123456”三种格式
 *
 *  @return 转化后的UIColor
 */
+ (UIColor *)colorWithHexString:(NSString *)color;

/**
 *  从十六进制字符串转为UIColor
 *
 *  @param color 十六进制颜色值
 *  @param alpha alpha值
 *
 *  @return 转化后的UIColor
 */
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

@end
