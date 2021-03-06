//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@protocol WebViewA8KeyLogicDelegate <NSObject>
- (void)saveJSAPIPermissionsInOfflineCache:(NSData *)arg1 url:(NSString *)arg2;
- (void)saveJSAPIPermissions:(NSData *)arg1 url:(NSString *)arg2;
- (void)saveJSAPIAuthInfo:(NSArray *)arg1;
- (void)onJumpToEmoticonDetailViewController:(NSString *)arg1;
- (void)onJumpToViewController:(NSString *)arg1;
- (void)onJumpToSafariWithUrl:(NSString *)arg1;
- (void)onUpdatedPermisson;
- (void)onGetA8KeyWithMediaAutoPlay;
- (void)onGetA8Key:(BOOL)arg1 ReqUrl:(NSString *)arg2 Reason:(int)arg3 diagnose:(NSDictionary *)arg4;

@optional
- (void)onGetA8KeyWithRequestUrl:(NSString *)arg1 fullUrl:(NSString *)arg2 header:(NSMutableDictionary *)arg3;
- (void)onJsapiGetA8key:(BOOL)arg1 requestUrl:(NSString *)arg2 requestHeaders:(NSDictionary *)arg3;
- (void)onShowAutoOAuthViewWithSchemeUrl:(NSString *)arg1 Success:(BOOL)arg2 Wording:(NSString *)arg3 HeadImgUrl:(NSString *)arg4;
- (void)didStartGetA8Key;
- (void)willStartGetA8Key;
@end

