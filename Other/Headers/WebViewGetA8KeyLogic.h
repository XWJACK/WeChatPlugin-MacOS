//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMCGIRequester, NSMutableDictionary, NSMutableSet, NSString, NSURL;
@protocol WebViewGetA8KeyLogicDelegate;

@interface WebViewGetA8KeyLogic : NSObject
{
    MMCGIRequester *_requester;
    NSMutableSet *_disableGetA8KeyUrlList;
    NSMutableDictionary *_dicMenuInfoTitle;
    NSMutableDictionary *_dicShareUrlForMainUrl;
    unsigned int _getA8KeyScene;
    int _reason;
    id <WebViewGetA8KeyLogicDelegate> _delegate;
    NSString *_bundleID;
    NSString *_getA8KeyUserName;
    NSURL *_currentUrl;
}

@property(retain, nonatomic) NSURL *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(retain, nonatomic) NSString *getA8KeyUserName; // @synthesize getA8KeyUserName=_getA8KeyUserName;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) unsigned int getA8KeyScene; // @synthesize getA8KeyScene=_getA8KeyScene;
@property(nonatomic) __weak id <WebViewGetA8KeyLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setShareUrl:(id)arg1 forMain:(id)arg2;
- (id)getShareUrlForMain:(id)arg1;
- (BOOL)isDisableGetA8KeyForUrl:(id)arg1;
- (id)getMenuInfoTitle;
- (void)setMenuInfoTitle:(id)arg1 forUrl:(id)arg2;
- (void)handleOnGetA8KeyOK:(int)arg1 req:(id)arg2 resp:(id)arg3;
- (void)handleGetA8KeyResponse:(id)arg1 cgiWrap:(id)arg2 reason:(int)arg3;
- (void)getA8KeyWithURLString:(id)arg1 config:(id)arg2;
- (id)init;

@end

