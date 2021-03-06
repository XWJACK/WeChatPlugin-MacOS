//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CContact, NSArray, NSDictionary, NSString, WAAppTansitionController, WAAppTaskExtInfo, WAAppWindowController, WACacheVersionChecker, WALoadingViewController, WANavigationController, WAPackageConfig, WAPermissionHandler, WAWebViewController, WOAPPrivacyConfirmLogic;
@protocol WAAppTaskLoaderContextDelegate;

@interface WAAppTaskLoaderContext : NSObject
{
    BOOL _isGameApp;
    BOOL _isPopParent;
    BOOL _isPopAllParent;
    BOOL _bReloadFirstPage;
    BOOL _bNeedShowReloadLoading;
    BOOL _isUpdateAndForceReloadTask;
    BOOL _isPagePushTimeout;
    BOOL _isPagePushed;
    BOOL _isEnterAnimationDone;
    BOOL _isEnterAnimationTimeout;
    CContact *_contact;
    WAPackageConfig *_packageConfig;
    WANavigationController *_weakNavigationController;
    WANavigationController *_weakPresentingNavigationController;
    WALoadingViewController *_weakLoadingViewController;
    WAAppWindowController *_weakPresentingWindowController;
    WAPermissionHandler *_permissionHandler;
    NSString *_relativeURL;
    NSDictionary *_dicFirstExtraInfo;
    NSDictionary *_dicChildExtraInfo;
    WAWebViewController *_parentWebView;
    NSDictionary *_dicContextData;
    WAAppTaskExtInfo *_taskExtInfo;
    WAAppTansitionController *_appTransitionController;
    NSString *_appID;
    WACacheVersionChecker *_cacheVersionChecker;
    id <WAAppTaskLoaderContextDelegate> _contextDelegate;
    WAWebViewController *_webView;
    CDUnknownBlockType _enterAnimationCallback;
    NSArray *_arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage;
    WOAPPrivacyConfirmLogic *_privacyConfirmLogic;
}

@property(retain, nonatomic) WOAPPrivacyConfirmLogic *privacyConfirmLogic; // @synthesize privacyConfirmLogic=_privacyConfirmLogic;
@property(retain, nonatomic) NSArray *arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage; // @synthesize arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage=_arrIgnoreOtherWebViewDidAppeaerOnReloadFirstPage;
@property(nonatomic) BOOL isEnterAnimationTimeout; // @synthesize isEnterAnimationTimeout=_isEnterAnimationTimeout;
@property(nonatomic) BOOL isEnterAnimationDone; // @synthesize isEnterAnimationDone=_isEnterAnimationDone;
@property(nonatomic) BOOL isPagePushed; // @synthesize isPagePushed=_isPagePushed;
@property(nonatomic) BOOL isPagePushTimeout; // @synthesize isPagePushTimeout=_isPagePushTimeout;
@property(copy, nonatomic) CDUnknownBlockType enterAnimationCallback; // @synthesize enterAnimationCallback=_enterAnimationCallback;
@property(retain, nonatomic) WAWebViewController *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak id <WAAppTaskLoaderContextDelegate> contextDelegate; // @synthesize contextDelegate=_contextDelegate;
@property(retain, nonatomic) WACacheVersionChecker *cacheVersionChecker; // @synthesize cacheVersionChecker=_cacheVersionChecker;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) WAAppTansitionController *appTransitionController; // @synthesize appTransitionController=_appTransitionController;
@property(nonatomic) BOOL isUpdateAndForceReloadTask; // @synthesize isUpdateAndForceReloadTask=_isUpdateAndForceReloadTask;
@property(retain, nonatomic) WAAppTaskExtInfo *taskExtInfo; // @synthesize taskExtInfo=_taskExtInfo;
@property(retain, nonatomic) NSDictionary *dicContextData; // @synthesize dicContextData=_dicContextData;
@property(nonatomic) BOOL bNeedShowReloadLoading; // @synthesize bNeedShowReloadLoading=_bNeedShowReloadLoading;
@property(nonatomic) BOOL bReloadFirstPage; // @synthesize bReloadFirstPage=_bReloadFirstPage;
@property(nonatomic) BOOL isPopAllParent; // @synthesize isPopAllParent=_isPopAllParent;
@property(nonatomic) BOOL isPopParent; // @synthesize isPopParent=_isPopParent;
@property(retain, nonatomic) WAWebViewController *parentWebView; // @synthesize parentWebView=_parentWebView;
@property(retain, nonatomic) NSDictionary *dicChildExtraInfo; // @synthesize dicChildExtraInfo=_dicChildExtraInfo;
@property(retain, nonatomic) NSDictionary *dicFirstExtraInfo; // @synthesize dicFirstExtraInfo=_dicFirstExtraInfo;
@property(retain, nonatomic) NSString *relativeURL; // @synthesize relativeURL=_relativeURL;
@property(nonatomic) BOOL isGameApp; // @synthesize isGameApp=_isGameApp;
@property(retain, nonatomic) WAPermissionHandler *permissionHandler; // @synthesize permissionHandler=_permissionHandler;
@property(nonatomic) __weak WAAppWindowController *weakPresentingWindowController; // @synthesize weakPresentingWindowController=_weakPresentingWindowController;
@property(nonatomic) __weak WALoadingViewController *weakLoadingViewController; // @synthesize weakLoadingViewController=_weakLoadingViewController;
@property(nonatomic) __weak WANavigationController *weakPresentingNavigationController; // @synthesize weakPresentingNavigationController=_weakPresentingNavigationController;
@property(nonatomic) __weak WANavigationController *weakNavigationController; // @synthesize weakNavigationController=_weakNavigationController;
@property(retain, nonatomic) WAPackageConfig *packageConfig; // @synthesize packageConfig=_packageConfig;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)onTaskLoaderEnd;
- (void)dealloc;

@end

