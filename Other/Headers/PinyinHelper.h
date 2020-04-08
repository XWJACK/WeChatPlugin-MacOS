//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PinyinHelper : NSObject
{
}

+ (id)getFirstHanyuPinyinStringWithChar:(unsigned short)arg1 withHanyuPinyinOutputFormat:(id)arg2;
+ (id)toHanyuPinyinStringWithNSString:(id)arg1 withHanyuPinyinOutputFormat:(id)arg2 withNSString:(id)arg3;
+ (id)convertToGwoyeuRomatzyhStringArrayWithChar:(unsigned short)arg1;
+ (id)toGwoyeuRomatzyhStringArrayWithChar:(unsigned short)arg1;
+ (id)convertToTargetPinyinStringArrayWithChar:(unsigned short)arg1 withPinyinRomanizationType:(id)arg2;
+ (id)toYalePinyinStringArrayWithChar:(unsigned short)arg1;
+ (id)toMPS2PinyinStringArrayWithChar:(unsigned short)arg1;
+ (id)toWadeGilesPinyinStringArrayWithChar:(unsigned short)arg1;
+ (id)toTongyongPinyinStringArrayWithChar:(unsigned short)arg1;
+ (id)getUnformattedHanyuPinyinStringArrayWithChar:(unsigned short)arg1;
+ (id)getFormattedHanyuPinyinStringArrayWithChar:(unsigned short)arg1 withHanyuPinyinOutputFormat:(id)arg2;
+ (id)toHanyuPinyinStringArrayWithChar:(unsigned short)arg1 withHanyuPinyinOutputFormat:(id)arg2;
+ (id)toHanyuPinyinStringArrayWithChar:(unsigned short)arg1;
+ (void)getFirstHanyuPinyinStringWithChar:(unsigned short)arg1 withHanyuPinyinOutputFormat:(id)arg2 outputBlock:(CDUnknownBlockType)arg3;
+ (void)toHanyuPinyinStringWithNSString:(id)arg1 withHanyuPinyinOutputFormat:(id)arg2 withNSString:(id)arg3 outputBlock:(CDUnknownBlockType)arg4;
+ (void)convertToGwoyeuRomatzyhStringArrayWithChar:(unsigned short)arg1 outputBlock:(CDUnknownBlockType)arg2;
+ (void)toGwoyeuRomatzyhStringArrayWithChar:(unsigned short)arg1 outputBlock:(CDUnknownBlockType)arg2;
+ (void)convertToTargetPinyinStringArrayWithChar:(unsigned short)arg1 withPinyinRomanizationType:(id)arg2 outputBlock:(CDUnknownBlockType)arg3;
+ (void)toYalePinyinStringArrayWithChar:(unsigned short)arg1 outputBlock:(CDUnknownBlockType)arg2;
+ (void)toMPS2PinyinStringArrayWithChar:(unsigned short)arg1 outputBlock:(CDUnknownBlockType)arg2;
+ (void)toWadeGilesPinyinStringArrayWithChar:(unsigned short)arg1 outputBlock:(CDUnknownBlockType)arg2;
+ (void)toTongyongPinyinStringArrayWithChar:(unsigned short)arg1 outputBlock:(CDUnknownBlockType)arg2;
+ (void)getUnformattedHanyuPinyinStringArrayWithChar:(unsigned short)arg1 outputBlock:(CDUnknownBlockType)arg2;
+ (void)getFormattedHanyuPinyinStringArrayWithChar:(unsigned short)arg1 withHanyuPinyinOutputFormat:(id)arg2 outputBlock:(CDUnknownBlockType)arg3;
+ (void)toHanyuPinyinStringArrayWithChar:(unsigned short)arg1 withHanyuPinyinOutputFormat:(id)arg2 outputBlock:(CDUnknownBlockType)arg3;
+ (void)toHanyuPinyinStringArrayWithChar:(unsigned short)arg1 outputBlock:(CDUnknownBlockType)arg2;

@end

