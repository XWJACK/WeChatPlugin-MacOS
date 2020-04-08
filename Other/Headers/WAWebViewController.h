//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "CCNNavigationControllerDelegate-Protocol.h"
#import "MMCGIDelegate-Protocol.h"
#import "WAAppActionSheetDelegate-Protocol.h"
#import "WAContactMgrExtension-Protocol.h"
#import "WAProfileContentViewDelegate-Protocol.h"
#import "WAWebViewJSLogicDelegate-Protocol.h"
#import "YYWAWebViewDelegate-Protocol.h"
#import "YYWebViewDelegate-Protocol.h"

@class AFHTTPSessionManager, ForwardMessageLogicController, MMIgnoreEventView, MMTimer, NSDictionary, NSImageView, NSMutableDictionary, NSMutableSet, NSString, NSURLRequest, NSView, WAAppActionSheet, WABaseInfoToast, WACacheVersionChecker, WAHTMLWebViewController, WAMenuPopInteractiveTransition, WANavLoadingLayer, WAProfileContentViewController, WAWebErrorView, WAWebViewJSLogicImpl, WAWebViewMenuNavBarProperties, WAWebViewMutiFuncMenuView, WAWebViewPluginScheduler, YYWAWebView;
@protocol WAWebViewDelegate, YYWebViewInterface;

@interface WAWebViewController : WAViewController <WAAppActionSheetDelegate, WAContactMgrExtension, CCNNavigationControllerDelegate, WAWebViewJSLogicDelegate, YYWebViewDelegate, YYWAWebViewDelegate, WAProfileContentViewDelegate, MMCGIDelegate>
{
    BOOL _bIsStatusBarBlack;
    YYWAWebView<YYWebViewInterface> *webView;
    NSString *m_initUrl;
    WAWebViewJSLogicImpl *m_jsLogicImpl;
    NSMutableDictionary *m_jsInitInfo;
    NSString *m_preloadBaseURL;
    NSString *m_preloadPageRelativeURL;
    NSString *m_preloadPageQuery;
    NSString *m_preloadFrameURL;
    NSString *m_preloadIndexURL;
    BOOL m_isPreloadFrameLoaded;
    BOOL m_isPreloadIndexLoaded;
    NSDictionary *m_dicPageAttribute;
    BOOL m_isPreloadLoadTabAttribute;
    BOOL m_isPreloadSetTabBarAttribute;
    NSDictionary *m_dicTabBarAttribute;
    BOOL m_isViewWillAppearAlready;
    BOOL m_isViewDidAppear;
    BOOL m_isSetPreloadViewAttribute;
    BOOL m_isFinishLoaded;
    NSString *m_nsCurrentUrl;
    BOOL m_isGetTabInfoFinished;
    NSDictionary *m_dicURL2TabInfo;
    NSMutableSet *m_setRequestTabInfoResourceURL;
    NSMutableDictionary *m_dicTabIndex2TabInfo;
    WAWebViewMutiFuncMenuView *_menuView;
    WAWebViewMenuNavBarProperties *_navBarProperties;
    NSView *_tailBgView;
    BOOL _bIsDraggingScroll;
    double _fLastStartOffsetY;
    BOOL _bFullScreen;
    BOOL _bHideStatusBar;
    long long _eContentMode;
    BOOL m_bDisableSwipeBack;
    WAMenuPopInteractiveTransition *_popBackInteractiveTransition;
    NSView *_webInfoTopView;
    WABaseInfoToast *_webViewToast;
    WANavLoadingLayer *_webLoadingLayer;
    WAWebErrorView *_webViewErrorView;
    NSView *_topFullNativeView;
    ForwardMessageLogicController *m_forwardLogic;
    WAAppActionSheet *_actionSheet;
    long long _loadPageFrameStartTime;
    long long _loadPageIndexStartTime;
    BOOL m_bWebviewReceiveTerminateSignal;
    BOOL m_bWebviewReceiveTerminateSignalManually;
    WACacheVersionChecker *_moduleCacheVersionChecker;
    BOOL _isModuleDataLoaded;
    BOOL _isLoadingModuleData;
    NSString *_strOfPreloadTaskPageFrameJS;
    WAProfileContentViewController *_popoverContentVC;
    BOOL m_bIFrame;
    long long m_loadingCount;
    BOOL m_bShouldForcedRotationToPortrait;
    BOOL m_bIsBeingPopedFromNewMainFrame;
    NSDictionary *_cacheRouteInfo;
    BOOL m_bWebViewTerminatedManually;
    BOOL _bHasSupplyAppInfo;
    BOOL _bWaitRotatingState;
    BOOL _shouldHideHomeButton;
    BOOL _shouldDelayCheckHideHomeButton;
    NSImageView *_shadowView;
    BOOL m_isLanscape;
    BOOL m_isTopTabBar;
    BOOL m_bNeedOnAppRouteReload;
    BOOL m_bIsInsertCamera;
    BOOL m_bIsInsertLivePusher;
    BOOL m_bIsFromPreloadTaskWithNotAppInfo;
    BOOL _m_bIsDelayPushWebView;
    BOOL __bNeedExitWhenCloseWriteEvaluateView;
    unsigned int m_uiWebviewID;
    int _enmPullRefreshMode;
    unsigned int _tagNativeMax;
    unsigned int _appServiceType;
    unsigned int _expiredTime;
    int _payStatus;
    id <WAWebViewDelegate> m_delegate;
    NSMutableDictionary *m_extraInfo;
    double m_fTabBarHeight;
    WAWebViewPluginScheduler *_pluginScheduler;
    CDUnknownBlockType _m_onLoadInitReady;
    CDUnknownBlockType _m_onLoadViewDidAppear;
    CDUnknownBlockType _m_onViewDidAppearThenCreateTab;
    NSMutableDictionary *_nativeViews;
    NSMutableDictionary *_containerViews;
    WAHTMLWebViewController *_htmlWebVC;
    MMIgnoreEventView *_payMaskView;
    NSImageView *_payQRView;
    NSString *_runtimeSessionId;
    NSString *_payUUID;
    NSDictionary *_paymentDictParams;
    MMTimer *_checkQRTimer;
    AFHTTPSessionManager *_httpManager;
    struct CGPoint _clickPosition;
}

+ (void)setNavigationRightButton:(id)arg1 webView:(id)arg2;
+ (void)setNavigationAttribute:(id)arg1 webView:(id)arg2;
+ (id)pagePathFromURL:(id)arg1;
@property(retain, nonatomic) AFHTTPSessionManager *httpManager; // @synthesize httpManager=_httpManager;
@property(nonatomic) int payStatus; // @synthesize payStatus=_payStatus;
@property(retain, nonatomic) MMTimer *checkQRTimer; // @synthesize checkQRTimer=_checkQRTimer;
@property(retain, nonatomic) NSDictionary *paymentDictParams; // @synthesize paymentDictParams=_paymentDictParams;
@property(nonatomic) unsigned int expiredTime; // @synthesize expiredTime=_expiredTime;
@property(retain, nonatomic) NSString *payUUID; // @synthesize payUUID=_payUUID;
@property(retain, nonatomic) NSString *runtimeSessionId; // @synthesize runtimeSessionId=_runtimeSessionId;
@property(retain, nonatomic) NSImageView *payQRView; // @synthesize payQRView=_payQRView;
@property(retain, nonatomic) MMIgnoreEventView *payMaskView; // @synthesize payMaskView=_payMaskView;
@property(nonatomic) BOOL _bNeedExitWhenCloseWriteEvaluateView; // @synthesize _bNeedExitWhenCloseWriteEvaluateView=__bNeedExitWhenCloseWriteEvaluateView;
@property(nonatomic) struct CGPoint clickPosition; // @synthesize clickPosition=_clickPosition;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(retain, nonatomic) WAHTMLWebViewController *htmlWebVC; // @synthesize htmlWebVC=_htmlWebVC;
@property(retain, nonatomic) NSMutableDictionary *containerViews; // @synthesize containerViews=_containerViews;
@property(retain, nonatomic) NSMutableDictionary *nativeViews; // @synthesize nativeViews=_nativeViews;
@property(nonatomic) unsigned int tagNativeMax; // @synthesize tagNativeMax=_tagNativeMax;
@property(copy, nonatomic) CDUnknownBlockType m_onViewDidAppearThenCreateTab; // @synthesize m_onViewDidAppearThenCreateTab=_m_onViewDidAppearThenCreateTab;
@property(copy, nonatomic) CDUnknownBlockType m_onLoadViewDidAppear; // @synthesize m_onLoadViewDidAppear=_m_onLoadViewDidAppear;
@property(copy, nonatomic) CDUnknownBlockType m_onLoadInitReady; // @synthesize m_onLoadInitReady=_m_onLoadInitReady;
@property(nonatomic) BOOL m_bIsDelayPushWebView; // @synthesize m_bIsDelayPushWebView=_m_bIsDelayPushWebView;
@property(retain, nonatomic) WAWebViewPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(nonatomic) int enmPullRefreshMode; // @synthesize enmPullRefreshMode=_enmPullRefreshMode;
@property(nonatomic) BOOL m_bIsFromPreloadTaskWithNotAppInfo; // @synthesize m_bIsFromPreloadTaskWithNotAppInfo;
@property(nonatomic) BOOL m_bIsInsertLivePusher; // @synthesize m_bIsInsertLivePusher;
@property(nonatomic) BOOL m_bIsInsertCamera; // @synthesize m_bIsInsertCamera;
@property(nonatomic) BOOL m_bNeedOnAppRouteReload; // @synthesize m_bNeedOnAppRouteReload;
@property(readonly, nonatomic) BOOL m_bWebviewReceiveTerminateSignalManually; // @synthesize m_bWebviewReceiveTerminateSignalManually;
@property(readonly, nonatomic) BOOL m_bWebviewReceiveTerminateSignal; // @synthesize m_bWebviewReceiveTerminateSignal;
@property(retain, nonatomic) WAWebViewMenuNavBarProperties *m_navBarProperties; // @synthesize m_navBarProperties=_navBarProperties;
@property(retain, nonatomic) WAWebViewMutiFuncMenuView *m_menuView; // @synthesize m_menuView=_menuView;
@property(nonatomic) double m_fTabBarHeight; // @synthesize m_fTabBarHeight;
@property(nonatomic) BOOL m_isTopTabBar; // @synthesize m_isTopTabBar;
@property(readonly, nonatomic) NSString *m_initUrl; // @synthesize m_initUrl;
@property(retain, nonatomic) NSMutableDictionary *m_extraInfo; // @synthesize m_extraInfo;
@property(nonatomic) BOOL m_isLanscape; // @synthesize m_isLanscape;
@property(readonly, nonatomic) BOOL m_isFinishLoaded; // @synthesize m_isFinishLoaded;
@property(retain, nonatomic) WAWebViewJSLogicImpl *m_jsLogicImpl; // @synthesize m_jsLogicImpl;
@property(nonatomic) __weak id <WAWebViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) unsigned int m_uiWebviewID; // @synthesize m_uiWebviewID;
@property(retain, nonatomic) YYWAWebView<YYWebViewInterface> *webView; // @synthesize webView;
@property(nonatomic) BOOL m_bIsStatusBarBlack; // @synthesize m_bIsStatusBarBlack=_bIsStatusBarBlack;
- (void).cxx_destruct;
- (void)onPopoverContentCellClick:(id)arg1;
- (void)pullDownRefreshFromLocal;
- (void)setRecordSubTitleIfNeed;
- (id)tagForCurrentPage;
- (id)popWebViewCountFromSelf:(int)arg1;
- (void)enableGestureBack:(BOOL)arg1;
- (void)bringNativeToFront:(id)arg1;
- (id)getPluginScheduler;
- (id)getWxaExternalInfo;
- (void)remoteDomEvent:(id)arg1 webViewID:(unsigned int)arg2;
- (BOOL)isPreloadWebView;
- (BOOL)isIgnoreRemoteCheckDomain;
- (BOOL)isOpenDebugAndVConsole;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (void)checkUserAuthWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;
- (BOOL)checkRunModeOnWebview:(id)arg1;
- (id)getPermissionResultWithJSAPI:(id)arg1 byTempPermission:(id)arg2;
- (id)getPermissionResultWithJSAPI:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (id)webviewController;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeAllNativeViewsAndNotifyPlugin;
- (void)webViewContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)finishLoadAction;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)showPublicJSSpendTime;
- (void)checkJSBridgeObjects:(BOOL)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4;
- (id)getPreInjectScriptStr;
- (void)goToURL:(id)arg1;
- (void)stop;
- (void)reload;
- (void)navigationController:(id)arg1 willPopViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(BOOL)arg3;
- (void)mouseDown:(id)arg1;
- (void)updateIpadMaskViewForCurrentOrientation;
- (void)willDismissAndShow;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)onWebViewLeave;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidDisappear;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (void)adjustSubviewRects;
- (void)statusBarFrameWillChange:(id)arg1;
- (void)realTriggerPageReload;
- (void)onWebViewReadyToTerminate;
- (void)terminateManually;
- (void)pageReloadByManuallyTerminateWithRouteInfo:(id)arg1;
- (void)pageReloadWithRouteInfo:(id)arg1;
- (void)recoverWebView;
- (void)initWebViewIfNeeded;
- (void)internalInitWithBaseURL:(id)arg1 pageRelativeURL:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (void)supplyAppInfoWithBaseURL:(id)arg1 pageRelativeURL:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (id)initForPreloadAppTask;
- (id)initWithBaseURL:(id)arg1 pageRelativeURL:(id)arg2 extraInfo:(id)arg3 delegate:(id)arg4;
- (void)dealloc;
- (void)setPrivacySubTitleIfNeed;
- (void)setBackgroundColor;
- (void)notifyToJSBridgeVisibilityChanged:(BOOL)arg1;
- (id)taskExtInfo;
- (id)extraInfo;
- (void)printConsoleLog:(id)arg1;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)publishEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)doJsApiInitEvent;
- (void)setCurrentUrl:(id)arg1;
- (id)getCurrentUrl;
- (long long)webviewContentMode;
- (void)hidePageHomeButton;
- (BOOL)isHomeButtonHiddenByDeveloper;
- (BOOL)isCurrentPageNeedShowHomeButtonInitially;
- (BOOL)shouldShowPageHomeButton;
- (BOOL)isNeedShowReturnItem;
- (void)onRouteToHome;
- (void)onKill;
- (void)onAllExit;
- (void)OnReturn;
- (void)doBackActionCleanWithType;
- (void)DismissMyWebViewAnimated:(BOOL)arg1;
- (BOOL)isWeAppUseModule;
- (id)getSessionID;
- (id)getPackageConfig;
- (id)getCurrentContact;
- (id)getCurrentUserName;
- (BOOL)isViewDidAppear;
- (BOOL)isAlreadyViewWillAppear;
- (id)getPresentingWebVC;
- (BOOL)isHomePage;
- (BOOL)isFirstPage;
- (BOOL)isLastWebVC;
- (BOOL)isChildTabVC;
- (BOOL)isTabWebVC;
- (BOOL)isThisPageUsePreload;
- (BOOL)isOpenAtSubPage;
- (unsigned long long)debugMode;
- (BOOL)isDebugMode;
- (BOOL)isAppLaunchFirstWebview;
- (unsigned int)getAppType;
- (id)getInitUrl;
- (long long)getCurrentVersionNum;
- (id)getCurrentAppId;
- (void)setTitle:(id)arg1;
- (BOOL)createLoadSubPackageTask:(id)arg1 completeHandler:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3;
- (void)changeNavigationBarTitle:(id)arg1;
- (void)onLoadModuleData:(BOOL)arg1 errorCode:(long long)arg2 moduleName:(id)arg3;
- (void)checkModuleDataLoaded;
- (id)getFileData:(id)arg1;
- (void)getFileData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)filterRegularString:(id)arg1;
- (void)parseDataString:(id)arg1 AndGetStype:(id *)arg2 body:(id *)arg3 script:(id *)arg4;
- (id)elementStringFromXML:(id)arg1 startPos:(unsigned long long *)arg2 elementName:(id)arg3 containElementName:(BOOL)arg4;
- (id)cachedDataWithURL:(id)arg1;
- (void)loadFrameContent:(id)arg1;
- (void)setLoadPageIndexStartTime:(long long)arg1;
- (long long)getLoadPageIndexStartTime;
- (void)loadModuleScriptDataWithFilePath:(id)arg1;
- (id)allElementStringFromHtml:(id)arg1 elementName:(id)arg2 containElementName:(BOOL)arg3;
- (id)getPageFrameJSStr;
- (void)loadPageFrameJSOfPreload;
- (void)tryLoadPreloadAppTaskIndexDataWithInitReady;
- (void)tryLoadPreloadPackagePageFrame;
- (void)tryLoadPreloadAppTaskIndexData;
- (void)injectWebViewConfigForPreload;
- (void)loadPreloadAppTaskFrameData;
- (void)loadIndexData;
- (id)getFrameContentWithURL:(id)arg1;
- (void)loadFrameDataWithBaseURL:(id)arg1 pageRelativeURL:(id)arg2;
- (void)bringTabBarToFront;
- (void)setPageTabAttribute;
- (void)loadPreloadTabAttribute;
- (void)setNavigationBarTitle:(id)arg1 backgroundColor:(id)arg2 alpha:(double)arg3;
- (void)setPageBackgroundColor;
- (void)updateNavigationBarItemsAndStatusBarStyle;
- (void)setNavigationAttributeFromChildWebView:(id)arg1;
- (id)pageAttribute;
- (void)setPreloadPageAttribute;
- (void)resetPreloadPageAttributeMark;
- (void)loadPreloadPageAttribute;
- (void)setupAttributeWhenKnowsPagePath;
- (void)onCallbackInitReady;
- (void)loadIndexDataWithRelativeURL:(id)arg1;
- (BOOL)isIndexDataLoaded;
- (id)getPreloadIndexURL;
- (id)getPreloadPageQuery;
- (id)getPreloadPageRelativeURL;
- (id)getPreloadBaseURL;
- (id)preloadFrameFileName;
- (void)resetLoadingLayer;
- (void)dismissLoadingLayer;
- (void)showLoadingLayerWhenPushed;
- (void)onWebviewToastDidDismiss;
- (void)showJSApiForbbiddenToast:(id)arg1;
- (BOOL)isWebviewPresenting;
- (void)onWebViewMenuLongPressMore;
- (void)onWebViewMenuReturn;
- (void)onWebViewMenuAllExit;
- (void)onWebViewMenuMore:(id)arg1;
- (struct CGRect)currentMenuViewFrame;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1;
- (id)getTabSelectedWebView;
- (void)onWAWebErrorViewOperateBtnClick:(id)arg1;
- (void)show404ErrorView;
- (void)show404ErrorWaittingView;
- (void)showErrorViewWithMessage:(id)arg1;
- (void)addBackInfoViewIndicator:(id)arg1;
- (id)getBackInfoViewWithAppId:(id)arg1 enablePullRefresh:(BOOL)arg2;
- (void)popToFirstWebViewInStackWithAnimated:(BOOL)arg1;
- (double)getWebViewWindowHeight;
- (unsigned long long)getWebViewDepthInStack;
- (id)getFirstWebViewInStack;
- (BOOL)isCreatingChildOrSiblingTab;
- (BOOL)isChildTabSelected;
- (void)tabBarDidSwitchTab;
- (id)getChildTabWebViews;
- (id)getTabChildWebViewWithRelativeURL:(id)arg1;
- (id)getParentTabViewController;
- (void)updateTailViewFrame;
- (void)setTailBackGroundColor:(id)arg1;
- (void)setWebViewTopViewColor:(id)arg1;
- (void)setWebViewBackgroundColor:(id)arg1;
- (void)setViewFullScreen:(id)arg1;
- (BOOL)getFullScreen;
- (void)setFullScreen:(BOOL)arg1;
- (void)disableFullScreen;
- (void)enableFullScreen;
- (void)setCustomNavBarOffset:(double)arg1;
- (double)getCustomNavBarOffset;
- (void)setNavLoading:(BOOL)arg1;
- (void)setNavRightButtonHidden:(BOOL)arg1;
- (void)setNavLeftButtonHidden:(BOOL)arg1;
- (void)setWindowTitle:(id)arg1;
- (void)setNavTitle:(id)arg1;
- (void)setNavBarElementAndStatusBarStyle:(int)arg1;
- (void)changeStatusBarWhite:(BOOL)arg1;
- (void)setNavBarBgColor:(id)arg1;
- (void)setNavMenuState:(long long)arg1;
- (void)updateNavView;
- (id)currentNavMenuView;
- (void)resetNavView;
- (id)title;
- (void)uiLayoutSubView;
- (void)didSuccessRequesePayment:(id)arg1;
- (void)checkPayQRCodeResult;
- (void)updateQRImage:(id)arg1;
- (void)downloadPayQRCodeImage;
- (void)getUUID;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)sendGetSessionRequest;
- (BOOL)checkRuntimeSession;
- (void)dismissPayView;
- (void)showPayView:(id)arg1;
- (void)initContainerView;
- (void)initPayView;
- (BOOL)isInStarList;
- (BOOL)canShowCommentMenuItem;
- (BOOL)canShowShareMenuItem;
- (BOOL)canShowCopyPathQueryMenuItem;
- (id)pluginNavBar;
- (id)pluginAppMsg;
- (void)showTipsViewWithTitle:(id)arg1 content:(id)arg2 tipsTag:(long long)arg3 delegate:(id)arg4;
- (void)shareWithGroup;
- (void)shareWebViewPage;
- (void)commonShare;
- (void)showTipsViewController:(id)arg1;
- (void)onCopyPathAndQuery;
- (void)onCancelStar;
- (void)onAddToStar;
- (void)addToHomeScreen;
- (void)onLeaveBackChatState;
- (void)onOpenComment;
- (void)onBackToChat;
- (void)onOpenBrandProfileWebView;
- (void)onClosePerformance;
- (void)onOpenPerformance;
- (void)onOpenBrandProfile;
- (void)onCloseVConsole;
- (void)onOpenVConsole;
- (void)onWAActionSheetDidDismiss;
- (void)onWAActionSheetWillDismiss;
- (void)onWAActionSheetDestruct;
- (void)onWAActionSheetInfoClicked;
- (void)onWAActionSheetClickButtonWithButtonTitle:(id)arg1;
- (id)menuDebugButtonTitleArray;
- (id)menubuttonTitleArray;
- (id)takeCurrentSnapshot;
- (BOOL)isMenuVisible;
- (void)onMenuShow:(id)arg1;
- (id)__privateTabbarInstance;
- (double)getWebViewWindowHeight;
- (void)fsmenu_calcCurrentWebViewInset:(struct NSEdgeInsets *)arg1 y:(double *)arg2 height:(double *)arg3;
- (void)normal_calcCurrentWebViewInset:(struct NSEdgeInsets *)arg1 y:(double *)arg2 height:(double *)arg3;
- (void)calcCurrentWebViewInset:(struct NSEdgeInsets *)arg1 y:(double *)arg2 height:(double *)arg3;
- (void)calcCurrentWebViewY:(double *)arg1 height:(double *)arg2;
- (void)resetWebviewInsetOrY;
- (void)setContentNavMode:(long long)arg1;
- (long long)getContentNavMode;
- (id)processWebViewSceenShot2ThumbImage:(id)arg1;
- (id)snapShotWebviewImage;
- (id)getContainer:(unsigned int)arg1;
- (void)removeContainer:(unsigned int)arg1;
- (id)updateContainer:(unsigned int)arg1 frame:(struct CGRect)arg2 scrollHeight:(double)arg3;
- (id)findScrollViews:(id)arg1 frame:(struct CGRect)arg2 scrollHeight:(double)arg3;
- (void)saveScrollViews:(id)arg1;
- (BOOL)CGRectEqualApproximately:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
- (BOOL)IsScrollHeightEqualApproximately:(double)arg1 toHeight:(double)arg2;
- (id)attachWebScrollView:(struct CGRect)arg1 scrollHeight:(double)arg2 viewId:(unsigned int *)arg3;
- (unsigned int)getViewId:(id)arg1;
- (id)getChildViews;
- (BOOL)removeChildView:(unsigned int)arg1;
- (id)getContainerViewFromNative:(id)arg1;
- (id)getContainerViewFromScroll:(id)arg1;
- (void)bringNativeToFront:(id)arg1;
- (id)getChildView:(unsigned int)arg1;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2 fixed:(BOOL)arg3;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (unsigned int)insertBaseView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly) Class superclass;

@end
