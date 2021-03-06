//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMLogger : NSObject
{
}

+ (void)printLog:(unsigned int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 log:(id)arg6;
+ (void)logToConsoleWithColor:(unsigned int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 fmt:(id)arg6 arguments:(struct __va_list_tag [1])arg7;
+ (void)logToFile:(unsigned int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 fmt:(id)arg6 arguments:(struct __va_list_tag [1])arg7;
+ (void)logToFile:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 message:(id)arg6;
+ (void)outputDebugWithModule:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 func:(const char *)arg4 fmt:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
+ (void)outputInfoWithModule:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 func:(const char *)arg4 fmt:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
+ (void)outputWarnWithModule:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 func:(const char *)arg4 fmt:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
+ (void)outputErrorWithModule:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 func:(const char *)arg4 fmt:(id)arg5 arguments:(struct __va_list_tag [1])arg6;
+ (void)debugWithModule:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 func:(const char *)arg4 fmt:(id)arg5;
+ (void)infoWithModule:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 func:(const char *)arg4 fmt:(id)arg5;
+ (void)warnWithModule:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 func:(const char *)arg4 fmt:(id)arg5;
+ (void)errorWithModule:(const char *)arg1 file:(const char *)arg2 line:(int)arg3 func:(const char *)arg4 fmt:(id)arg5;
+ (void)logWithMMLogLevel:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 message:(id)arg6;
+ (void)doNSLog:(id)arg1;
+ (BOOL)shouldEnableDebugLog;
+ (void)initialize;

@end

