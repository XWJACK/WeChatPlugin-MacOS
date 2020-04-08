//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMNetExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSData, NSLock, NSMutableDictionary, NSRecursiveLock, NSString;

@interface MMCGIService : MMService <MMNetExt, MMService>
{
    struct unordered_map<unsigned int, MMCGI *, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MMCGI *>>> m_cgiMap;
    struct unordered_map<unsigned long, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int>>>>> m_delegateMap;
    BOOL m_hasClearData;
    BOOL _m_isNetConnected;
    BOOL _m_isClearingCGI;
    unsigned int _m_uin;
    NSData *_m_AESSessionKey;
    NSData *_m_serverId;
    NSMutableDictionary *_m_usbCmdhandler;
    NSRecursiveLock *_m_usbCmdLock;
    NSData *_m_usbEncryptKey;
    NSLock *_m_lock;
}

+ (id)serverIdPath;
+ (id)CGIThreadQueue;
@property(retain, nonatomic) NSLock *m_lock; // @synthesize m_lock=_m_lock;
@property(retain) NSData *m_usbEncryptKey; // @synthesize m_usbEncryptKey=_m_usbEncryptKey;
@property(retain, nonatomic) NSRecursiveLock *m_usbCmdLock; // @synthesize m_usbCmdLock=_m_usbCmdLock;
@property(retain, nonatomic) NSMutableDictionary *m_usbCmdhandler; // @synthesize m_usbCmdhandler=_m_usbCmdhandler;
@property BOOL m_isClearingCGI; // @synthesize m_isClearingCGI=_m_isClearingCGI;
@property BOOL m_isNetConnected; // @synthesize m_isNetConnected=_m_isNetConnected;
@property(retain) NSData *m_serverId; // @synthesize m_serverId=_m_serverId;
@property unsigned int m_uin; // @synthesize m_uin=_m_uin;
@property(retain) NSData *m_AESSessionKey; // @synthesize m_AESSessionKey=_m_AESSessionKey;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)StopCGIBySessionId:(unsigned int)arg1;
- (void)ClearCGIByDelegate:(id)arg1;
- (unsigned int)SendOnlyCmd:(id)arg1;
- (unsigned int)RequestCGI:(id)arg1 delegate:(id)arg2;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)saveServerId:(id)arg1;
- (void)loadServerId;
- (void)clearData;
- (void)OnUserQuit;
- (void)OnAuthFail;
- (void)OnAuthOK:(id)arg1;
- (void)OnMMCGIInTaskProcess:(id)arg1;
- (void)OnBeforeAuth;
- (BOOL)isSessionCmd:(unsigned int)arg1;
- (BOOL)isCommonRsaEncrypt:(unsigned int)arg1;
- (BOOL)isKVCommRSAEncrypt:(unsigned int)arg1;
- (BOOL)isAuthRSAEncrypt:(unsigned int)arg1;
- (BOOL)isBaseRSAEncrypt:(unsigned int)arg1;
- (id)GetRsaCertInfoWithCGI:(unsigned int)arg1;
- (void)processNetDisconnect;
- (void)onNetStatusChange:(int)arg1;
- (int)OnMMNetTaskEnd:(unsigned int)arg1 errType:(int)arg2 errCode:(int)arg3 serverId:(const struct AutoBuffer *)arg4;
- (int)ParseResponseData:(unsigned int)arg1 buffer:(const struct AutoBuffer *)arg2 servIdBuf:(struct AutoBuffer *)arg3;
- (BOOL)FillRequestData:(unsigned int)arg1 buffer:(struct AutoBuffer *)arg2;
- (void)stopMMNetTask:(unsigned int)arg1;
- (void)startMMNetTask:(id)arg1;
- (void)fillSendOnlyTask:(struct Task *)arg1 withCgi:(id)arg2;
- (void)fillCgiTask:(struct Task *)arg1 withCgi:(id)arg2;
- (unsigned int)GetUin;
- (id)GetSessionKey;
- (void)eraseSessionIdInDelegate:(id)arg1 sessionId:(unsigned int)arg2;
- (void)eraseDelegate:(id)arg1 sessionIdSet:(set_531c353a *)arg2;
- (void)addDelegate:(id)arg1 sessionId:(unsigned int)arg2;
- (void)eraseCGI:(unsigned int)arg1;
- (void)getAllCGI:(vector_f672cb0f *)arg1;
- (id)findCGI:(unsigned int)arg1;
- (void)addCGI:(id)arg1 taskid:(unsigned int)arg2;
- (void)closeCGI:(unsigned int)arg1;
- (void)recordCGIData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

