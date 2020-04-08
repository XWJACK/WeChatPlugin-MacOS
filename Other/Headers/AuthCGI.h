//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMCGIDelegate-Protocol.h"

@class NSString, NewAuthRequest;
@protocol AuthCGIExt;

@interface AuthCGI : NSObject <MMCGIDelegate>
{
    unsigned int m_sessionID;
    BOOL m_isDoingAuth;
    int m_curAuthType;
    NSString *m_imageSid;
    NSString *m_imageEncryptKey;
    NewAuthRequest *m_lastAuthRequest;
    unsigned long long m_tryTimes;
    struct ec_key_st *ecdhKey;
    basic_string_23d93216 g_ecdh_key;
    BOOL _isSessionKeyNeedECDHDescrypt;
    int _m_lastAuthType;
    int _m_loginType;
    id <AuthCGIExt> _delegate;
    NSString *_currLoginUserName;
}

@property(nonatomic) NSString *currLoginUserName; // @synthesize currLoginUserName=_currLoginUserName;
@property(nonatomic) BOOL isSessionKeyNeedECDHDescrypt; // @synthesize isSessionKeyNeedECDHDescrypt=_isSessionKeyNeedECDHDescrypt;
@property(nonatomic) int m_loginType; // @synthesize m_loginType=_m_loginType;
@property(nonatomic) int m_lastAuthType; // @synthesize m_lastAuthType=_m_lastAuthType;
@property(nonatomic) id <AuthCGIExt> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)OnResponseCGIFailedWithSessionId:(unsigned int)arg1 cgiWrap:(id)arg2 errType:(unsigned int)arg3 errCode:(unsigned int)arg4;
- (void)retryAuthOnErrSys:(id)arg1;
- (void)onIDCChange:(id)arg1;
- (void)saveIDC:(id)arg1;
- (void)saveHostInfo:(id)arg1;
- (void)saveAuthIPs:(id)arg1;
- (BOOL)IsDoingAuth;
- (void)RetryAuth;
- (void)onManualAuthOK:(id)arg1 withSessionKey:(id)arg2;
- (void)ManualAuth:(id)arg1 withPassword:(id)arg2;
- (void)StopAuth;
- (id)genECDHKey;
- (void)saveAccountInfoWithResponse:(id)arg1;
- (void)onAutoAuthOK:(id)arg1 withSessionKey:(id)arg2;
- (void)AutoAuth;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

