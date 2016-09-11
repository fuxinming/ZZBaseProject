//
//  NSString+String.h
//  YiZhongProject
//
//  Created by 付新明 on 15/8/23.
//  Copyright (c) 2015年 付新明. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (String)
/**
 *	@brief	移除字符串首位空字符串.
 *
 *	@return	字符串实例.
 */
- (NSString *)trim;
- (NSString *) md5;
+(NSString *) jsonStringWithString:(NSString *) string;
+(NSString *) jsonStringWithArray:(NSArray *)array;
+(NSString *) jsonStringWithDictionary:(NSDictionary *)dictionary;
+(NSString *) jsonStringWithObject:(id) object;
@end
