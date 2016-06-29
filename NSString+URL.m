//
//  NSString+Extension.m
//  UUVoice
//
//  Created by Nimger on 16/5/25.
//  Copyright © 2016年 YL. All rights reserved.
//

#import "NSString+URL.h"

@implementation NSString (URL)

- (NSString*)urlEncode {
    NSString *outputStr = (__bridge NSString *)CFURLCreateStringByAddingPercentEscapes(NULL,(__bridge CFStringRef)self,NULL,(CFStringRef)@"!*'();:@&=+$,/?%#[]",kCFStringEncodingUTF8);
    return outputStr;
}

@end
