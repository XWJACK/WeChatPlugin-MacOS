//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol WAAppDetailInfoManagerExtension <NSObject>

@optional
- (void)onModAppAuthInfoListWithAppid:(NSString *)arg1 errorCode:(int)arg2;
- (void)onWeAppReceiveMsgStatusChangedSuccess:(BOOL)arg1 WeAppUserName:(NSString *)arg2;
- (void)onGetAppAuthInfoList:(NSArray *)arg1 appid:(NSString *)arg2 errorCode:(int)arg3;
@end

