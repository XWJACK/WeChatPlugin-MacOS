//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (NSString_MMExtend)
+ (id)getShowStringBySize:(unsigned long long)arg1;
+ (id)generatePrivacyString:(id)arg1;
+ (id)safeStringWithUTF8String:(const char *)arg1;
+ (id)stringWithUInt64:(unsigned long long)arg1;
- (id)safeSubstringWithRange:(struct _NSRange)arg1;
- (id)safeSubstringToIndex:(long long)arg1;
- (id)safeSubstringFromIndex:(long long)arg1;
- (BOOL)containsSubstring:(id)arg1 option:(unsigned long long)arg2;
- (BOOL)containsSubstring:(id)arg1;
- (long long)compareWithUInt64:(id)arg1;
- (id)stringByEscapingAllLineBreak;
- (id)stringByTrimmingRight;
- (id)stringByTrimmingLeft;
- (id)stringByTrimming;
- (id)stringByTrimmingTrailingCharactersInSet:(id)arg1;
- (id)stringByTrimmingLeadingCharactersInSet:(id)arg1;
- (unsigned long long)uint64Value;
- (unsigned long long)unsignLongLongValue;
@end
