//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"
#import "WKUIDelegate-Protocol.h"
#import "YYWebViewInterface-Protocol.h"

@class NSScrollView, NSString, NSURLRequest, YYWKWebViewScriptMessageHandler;
@protocol YYWebViewDelegate;

@interface YYWKWebView : WKWebView <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, YYWebViewInterface>
{
    BOOL scalesPageToFit;
    BOOL _bDisablePopup;
    BOOL _isCloseUniversallink;
    id <YYWebViewDelegate> wvDelegate;
    NSScrollView *scrollView;
    YYWKWebViewScriptMessageHandler *_scriptMessageHandler;
}

+ (id)processPool;
@property(nonatomic) BOOL isCloseUniversallink; // @synthesize isCloseUniversallink=_isCloseUniversallink;
@property(retain, nonatomic) YYWKWebViewScriptMessageHandler *scriptMessageHandler; // @synthesize scriptMessageHandler=_scriptMessageHandler;
@property(nonatomic) BOOL bDisablePopup; // @synthesize bDisablePopup=_bDisablePopup;
@property(nonatomic) BOOL scalesPageToFit; // @synthesize scalesPageToFit;
@property(readonly, nonatomic) NSScrollView *scrollView; // @synthesize scrollView;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate; // @synthesize wvDelegate;
- (void).cxx_destruct;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)reload;
- (unsigned char)setCustomUserAgent:(id)arg1;
- (void)LoadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)LoadRequest:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (long long)wkNavigationTypeToYYWebViewNavigationType:(long long)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)makeAllowDecision:(CDUnknownBlockType)arg1;
- (void)enableJavaScriptPopup:(BOOL)arg1;
- (void)evaluateJavaScriptFromString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property(nonatomic) BOOL allowsInlineMediaPlayback;
@property(readonly, nonatomic) NSURLRequest *request;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)defaultConfigurationWithPreInjectJSStr:(id)arg1 hookJSStr:(id)arg2;

// Remaining properties
@property(nonatomic) BOOL allowsBackForwardNavigationGestures;
@property(readonly, nonatomic, getter=canGoBack) BOOL canGoBack;
@property(readonly, nonatomic, getter=canGoForward) BOOL canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
@property(readonly) Class superclass;

@end

