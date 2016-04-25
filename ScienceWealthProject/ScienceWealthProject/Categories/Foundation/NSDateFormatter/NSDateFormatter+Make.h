
//
//  NSDateFormatter+Make.h
//  ScienceWealthProject
//
//  Created by Mackellen on 16/4/25.
//  Copyright © 2016年 Mackellen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDateFormatter (Make)


+(NSDateFormatter *)dateFormatterWithFormat:(NSString *)format;
+(NSDateFormatter *)dateFormatterWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone;
+(NSDateFormatter *)dateFormatterWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone locale:(NSLocale *)locale;
+(NSDateFormatter *)dateFormatterWithDateStyle:(NSDateFormatterStyle)style;
+(NSDateFormatter *)dateFormatterWithDateStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone;
+(NSDateFormatter *)dateFormatterWithTimeStyle:(NSDateFormatterStyle)style;
+(NSDateFormatter *)dateFormatterWithTimeStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone;

@end
