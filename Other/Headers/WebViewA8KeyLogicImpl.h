//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MMCGIDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, NSURL, NSView, SKBuiltinBuffer_t;
@protocol WebViewA8KeyLogicDelegate, YYWebViewInterface;

@interface WebViewA8KeyLogicImpl : MMObject <MMCGIDelegate>
{
    unsigned int _firstGetA8KeyOpCode;
    NSString *_firstGetA8KeyAppId;
    NSString *_firstGetA8KeyScope;
    NSString *_firstGetA8KeyState;
    unsigned int _getA8KeyScene;
    struct timeval _getA8KeyStartTime;
    NSString *_bundleId;
    NSString *_getA8KeyUsrname;
    unsigned int _getA8KeyEventId;
    unsigned int _getA8KeyReason;
    NSMutableDictionary *_dicUrlPermission;
    NSMutableDictionary *_dicShareUrlForMainUrl;
    NSMutableDictionary *_dicMenuInfoTitle;
    BOOL _alwaysAllowJumpUrl;
    NSMutableSet *_disableGetA8KeyUrlList;
    id <WebViewA8KeyLogicDelegate> _delegate;
    NSURL *_currentUrl;
    BOOL m_hasSetFontPermission;
    unsigned int m_fontScale;
    NSString *_payWalletFunctionID;
    struct vector<mars::smc::STIDKeyInfo, std::__1::allocator<mars::smc::STIDKeyInfo>> _pIDKeyList;
    NSString *_currentShareUrl;
    BOOL _banIframeGetA8key;
    unsigned int _firstGetA8KeyOpcode;
    unsigned int m_RequestID;
    unsigned int _uiPayWalletRegion;
    NSView<YYWebViewInterface> *_webView;
    NSMutableDictionary *_originalUrl2OfflineA8KeyData;
    SKBuiltinBuffer_t *_a8keyCookie;
}

@property(nonatomic) BOOL banIframeGetA8key; // @synthesize banIframeGetA8key=_banIframeGetA8key;
@property(retain, nonatomic) SKBuiltinBuffer_t *a8keyCookie; // @synthesize a8keyCookie=_a8keyCookie;
@property(retain, nonatomic) NSMutableDictionary *originalUrl2OfflineA8KeyData; // @synthesize originalUrl2OfflineA8KeyData=_originalUrl2OfflineA8KeyData;
@property(nonatomic) unsigned int m_uiPayWalletRegion; // @synthesize m_uiPayWalletRegion=_uiPayWalletRegion;
@property(retain, nonatomic) NSString *m_payWalletFunctionID; // @synthesize m_payWalletFunctionID=_payWalletFunctionID;
@property(nonatomic) unsigned int m_RequestID; // @synthesize m_RequestID;
@property(readonly, nonatomic) unsigned int m_fontScale; // @synthesize m_fontScale;
@property(readonly, nonatomic) BOOL m_hasSetFontPermission; // @synthesize m_hasSetFontPermission;
@property(readonly, nonatomic) BOOL alwaysAllowJumpUrl; // @synthesize alwaysAllowJumpUrl=_alwaysAllowJumpUrl;
@property(nonatomic) __weak NSView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSURL *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(nonatomic) __weak id <WebViewA8KeyLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *getA8KeyUsrname; // @synthesize getA8KeyUsrname=_getA8KeyUsrname;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(nonatomic) unsigned int getA8KeyScene; // @synthesize getA8KeyScene=_getA8KeyScene;
@property(retain, nonatomic) NSString *firstGetA8KeyState; // @synthesize firstGetA8KeyState=_firstGetA8KeyState;
@property(retain, nonatomic) NSString *firstGetA8KeyScope; // @synthesize firstGetA8KeyScope=_firstGetA8KeyScope;
@property(retain, nonatomic) NSString *firstGetA8KeyAppId; // @synthesize firstGetA8KeyAppId=_firstGetA8KeyAppId;
@property(nonatomic) unsigned int firstGetA8KeyOpcode; // @synthesize firstGetA8KeyOpcode=_firstGetA8KeyOpcode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getUrlWithoutFragment:(id)arg1;
- (void)onJumpEmoticonDetailCgiFailed:(id)arg1;
- (void)onJumpEmoticonDetailCgiOkWithPackageId:(id)arg1;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)reportGetA8KeyFailForReason:(int)arg1;
- (void)reportGetA8KeyForceRedirect;
- (void)reportGetA8KeyRequest;
- (void)handleGetA8KeyResp:(id)arg1 EventID:(unsigned int)arg2;
- (id)genDiagnoseInfoFor:(id)arg1;
- (void)handleOnGetA8KeyOK:(id)arg1 reason:(int)arg2 req:(id)arg3 context:(id)arg4;
- (void)goToURL:(id)arg1 withCustomerCookies:(id)arg2;
- (id)getMenuInfoTitle;
- (void)setUrlPermission:(id)arg1 GeneralCtrl:(id)arg2 DeepLink:(id)arg3 forURL:(id)arg4;
- (BOOL)isDisableGetA8KeyForUrl:(id)arg1;
- (id)getUrlPermission:(id)arg1;
- (BOOL)hasUrlPermission:(id)arg1;
- (unsigned int)getGeneralBitSetForUrl:(id)arg1;
- (unsigned int)getGeneralBitSet;
- (unsigned int)getPermissionBitSet3;
- (unsigned int)getPermissionBitSet2;
- (unsigned int)getPermissionBitSet;
- (unsigned long long)getDeepLinkBitSet;
- (id)GetDefaultPermisson;
- (id)getShareUrl;
- (void)changeCurrentShareUrlForMainUrl:(id)arg1;
- (id)getShareUrlForMain:(id)arg1;
- (void)setShareUrl:(id)arg1 forMain:(id)arg2;
- (void)setPermission:(id)arg1 ForUrl:(id)arg2;
- (id)getPermissionForUrl:(id)arg1;
- (id)GetMainDocumentURL;
- (id)getRequestingOrCurrentUrl;
- (void)checkApiAuthorization:(id)arg1;
- (void)updateGetA8KeySceneBySourceType:(long long)arg1;
- (BOOL)isAsynGetA8KeyAndNeedInjectWxjs;
- (BOOL)isGettingA8Key;
- (void)getA8Key:(id)arg1 Reason:(int)arg2 context:(id)arg3;
- (void)getA8Key:(id)arg1 Reason:(int)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
