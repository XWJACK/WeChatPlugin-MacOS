//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, WAInfoData;

@protocol IWALocalCacheMgrExt

@optional
- (void)onCheckLocalPkg:(BOOL)arg1;
- (void)onUpdateAppPkgComplete:(BOOL)arg1 withAppInfoData:(WAInfoData *)arg2 errorCode:(unsigned int)arg3 errorMsg:(NSString *)arg4;
- (void)onUpdateAppPkgProgress:(float)arg1 remainingTime:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 withAppInfoData:(WAInfoData *)arg4;
@end

