//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WXCustomWebViewControllerProtocol-Protocol.h"
#import "YYWebViewDelegate-Protocol.h"

@class CContact, MMTimer, MMWebCustomLog, MMWebProgressBar, MMWebViewPluginScheduler, MMWebViewPresetUI, NSMutableArray, NSMutableDictionary, NSString, NSTextField, NSURLRequest, NSView, WebViewA8KeyLogicImpl, WebViewJSLogicImpl;
@protocol MMWebViewDelegate, YYWebViewInterface><MMWKWebViewInterface;

@interface MMWAWebViewController : MMUIViewController <WXCustomWebViewControllerProtocol, YYWebViewDelegate>
{
    id <MMWebViewDelegate> m_delegate;
    BOOL m_bAutoSetTitle;
    BOOL m_disalbeStartLoadGetA8Key;
    BOOL m_bShouldForcedRotationToPortrait;
    unsigned int m_stat_enterTime;
    long long m_loadingCount;
    BOOL m_openAllPermission;
    NSString *m_jump;
    BOOL m_viewDidAppear;
    NSString *m_oLoadingUrl;
    BOOL m_bIFrame;
    NSString *_httpHeadReferer;
    double _fLastStartOffsetY;
    NSMutableArray *_arrRouteUrl;
    unsigned int _startTime;
    BOOL _bIsBackForwardNavigationType;
    BOOL _bIsViewHasAppeared;
    NSString *_lastURL;
    BOOL _bIsAutoLoginMode;
    BOOL _alwayIntercept;
    BOOL _newWebLoading;
    unsigned long long _loadMode;
    NSMutableArray *_ignoredPageUrlList;
    BOOL m_isPreviewing;
    BOOL m_bIsPortraitBeforeOpenUrl;
    BOOL m_bShowOnNewMainFrameBanner;
    BOOL m_bReadingArticleBanner;
    BOOL _m_bIsStatusBarBlack;
    BOOL _m_bUseColorfulNavBar;
    BOOL _m_canCache;
    BOOL _m_bDeepLink;
    BOOL _m_bUserHasClickLink;
    BOOL _m_bOfflinePage;
    BOOL _m_bIsDelayPushWebView;
    BOOL _m_bIsRestrictAppstore;
    BOOL _m_isLanscape;
    BOOL _m_bIsJsapiUploadVideoUploading;
    BOOL _reportInstantly;
    BOOL _m_bPreloadInMem;
    NSView<YYWebViewInterface><MMWKWebViewInterface> *webView;
    WebViewJSLogicImpl *m_jsLogicImpl;
    WebViewA8KeyLogicImpl *m_a8KeyLogicImpl;
    NSMutableDictionary *m_extraInfo;
    NSString *m_initUrl;
    MMWebViewPluginScheduler *_pluginScheduler;
    CDUnknownBlockType _m_blockOnWebViewDidTerminate;
    CContact *_brandContact;
    MMWebProgressBar *_m_progressBar;
    NSTextField *_m_addressLabel;
    MMWebViewPresetUI *_presetUI;
    MMWebCustomLog *_customLog;
    long long _reportId;
    NSMutableArray *_reportFormatDataList;
    unsigned long long _reportBeginTime;
    unsigned long long _reportDesinatedBeginTime;
    NSMutableArray *_visibleStateArray;
    MMTimer *_wepkgLoadingTimer;
    CDUnknownBlockType _interceptCloseBlock;
    NSMutableDictionary *_brandIconDic;
}

@property(retain, nonatomic) NSMutableDictionary *brandIconDic; // @synthesize brandIconDic=_brandIconDic;
@property(nonatomic) BOOL m_bPreloadInMem; // @synthesize m_bPreloadInMem=_m_bPreloadInMem;
@property(copy, nonatomic) CDUnknownBlockType interceptCloseBlock; // @synthesize interceptCloseBlock=_interceptCloseBlock;
@property(retain, nonatomic) MMTimer *wepkgLoadingTimer; // @synthesize wepkgLoadingTimer=_wepkgLoadingTimer;
@property(retain, nonatomic) NSMutableArray *visibleStateArray; // @synthesize visibleStateArray=_visibleStateArray;
@property(nonatomic) unsigned long long reportDesinatedBeginTime; // @synthesize reportDesinatedBeginTime=_reportDesinatedBeginTime;
@property(nonatomic) unsigned long long reportBeginTime; // @synthesize reportBeginTime=_reportBeginTime;
@property(retain, nonatomic) NSMutableArray *reportFormatDataList; // @synthesize reportFormatDataList=_reportFormatDataList;
@property(nonatomic) BOOL reportInstantly; // @synthesize reportInstantly=_reportInstantly;
@property(nonatomic) long long reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) MMWebCustomLog *customLog; // @synthesize customLog=_customLog;
@property(retain, nonatomic) MMWebViewPresetUI *presetUI; // @synthesize presetUI=_presetUI;
@property(nonatomic) BOOL m_bIsJsapiUploadVideoUploading; // @synthesize m_bIsJsapiUploadVideoUploading=_m_bIsJsapiUploadVideoUploading;
@property(nonatomic) BOOL m_isLanscape; // @synthesize m_isLanscape=_m_isLanscape;
@property(nonatomic) BOOL m_bIsRestrictAppstore; // @synthesize m_bIsRestrictAppstore=_m_bIsRestrictAppstore;
@property(nonatomic) BOOL m_bIsDelayPushWebView; // @synthesize m_bIsDelayPushWebView=_m_bIsDelayPushWebView;
@property(readonly, nonatomic) BOOL m_bOfflinePage; // @synthesize m_bOfflinePage=_m_bOfflinePage;
@property(retain, nonatomic) NSTextField *m_addressLabel; // @synthesize m_addressLabel=_m_addressLabel;
@property(retain, nonatomic) MMWebProgressBar *m_progressBar; // @synthesize m_progressBar=_m_progressBar;
@property(nonatomic) BOOL m_bUserHasClickLink; // @synthesize m_bUserHasClickLink=_m_bUserHasClickLink;
@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact=_brandContact;
@property(nonatomic) BOOL m_bDeepLink; // @synthesize m_bDeepLink=_m_bDeepLink;
@property(copy, nonatomic) CDUnknownBlockType m_blockOnWebViewDidTerminate; // @synthesize m_blockOnWebViewDidTerminate=_m_blockOnWebViewDidTerminate;
@property(nonatomic) BOOL m_canCache; // @synthesize m_canCache=_m_canCache;
@property(retain, nonatomic) MMWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(nonatomic) BOOL m_bUseColorfulNavBar; // @synthesize m_bUseColorfulNavBar=_m_bUseColorfulNavBar;
@property(nonatomic) BOOL m_bIsStatusBarBlack; // @synthesize m_bIsStatusBarBlack=_m_bIsStatusBarBlack;
@property(nonatomic) BOOL m_bReadingArticleBanner; // @synthesize m_bReadingArticleBanner;
@property(nonatomic) BOOL m_bShowOnNewMainFrameBanner; // @synthesize m_bShowOnNewMainFrameBanner;
@property(nonatomic) BOOL m_bIsPortraitBeforeOpenUrl; // @synthesize m_bIsPortraitBeforeOpenUrl;
@property(readonly, nonatomic) BOOL m_isPreviewing; // @synthesize m_isPreviewing;
@property(readonly, nonatomic) NSString *m_initUrl; // @synthesize m_initUrl;
@property(retain, nonatomic) NSMutableDictionary *m_extraInfo; // @synthesize m_extraInfo;
@property(readonly, nonatomic) WebViewA8KeyLogicImpl *m_a8KeyLogicImpl; // @synthesize m_a8KeyLogicImpl;
@property(readonly, nonatomic) WebViewJSLogicImpl *m_jsLogicImpl; // @synthesize m_jsLogicImpl;
@property(nonatomic) __weak id <MMWebViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSView<YYWebViewInterface><MMWKWebViewInterface> *webView; // @synthesize webView;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end

