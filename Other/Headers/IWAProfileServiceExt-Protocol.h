//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GetProfileInfoResponse, NSString, UpdateWxaEvaluateResponse;

@protocol IWAProfileServiceExt

@optional
- (void)onUpdateProfileLike:(NSString *)arg1 bLike:(BOOL)arg2 Success:(BOOL)arg3;
- (void)onUpdateProfileEvaluate:(UpdateWxaEvaluateResponse *)arg1 userName:(NSString *)arg2 Score:(unsigned int)arg3;
- (void)onFetchProfileInfo:(GetProfileInfoResponse *)arg1 userName:(NSString *)arg2;
@end
