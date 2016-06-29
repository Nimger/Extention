//
//  NSString+Extension.h
//  UUVoice
//
//  Created by Nimger on 16/5/25.
//  Copyright © 2016年 NG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Extension)
+ (NSMutableAttributedString *)createAttributedString:(NSString *)string andAttributedDictionary:(NSDictionary *)attrDict;
- (BOOL)isEmpty;
- (NSString*)urlEncode;
@end
