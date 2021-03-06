//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WAOpenEventSpeedStatMgr : MMService <MMService>
{
    NSMutableDictionary *m_timeStampCache;
    unsigned long long m_beginTime;
    NSString *m_appid;
    long long m_version;
    unsigned long long m_appState;
    unsigned long long m_scene;
    BOOL m_isTriggerDownload;
    BOOL m_isSyncUpdateContact;
    BOOL m_isSyncLaunchCgi;
    BOOL m_isUsePreloadTask;
    unsigned int m_syncUpdateReason;
    unsigned int m_scriptDataSize;
    unsigned int m_packageSize;
    BOOL m_updatedContact;
    unsigned long long m_preloadPageFrameBeginTime;
    unsigned long long m_preloadPageFrameJSBeginTime;
    NSString *m_instanceId;
}

- (void).cxx_destruct;
- (void)endWithGetUrlReady:(unsigned int)arg1 ret:(unsigned int)arg2;
- (void)endWithPackageReady:(unsigned int)arg1;
- (id)getReportId;
- (void)markUpdateContact:(BOOL)arg1;
- (void)beginWithWeAppInit;
- (void)markEventDownloadPackageSize:(id)arg1 packageSize:(unsigned int)arg2;
- (void)markEventEnd:(unsigned long long)arg1 appType:(unsigned int)arg2;
- (void)markEventBegin:(unsigned long long)arg1;
- (void)markEventDealScriptSize:(unsigned int)arg1 appid:(id)arg2 preload:(BOOL)arg3;
- (void)markEventOpenFromPreloadTask:(id)arg1;
- (void)markEventSyncLaunchCgi:(id)arg1;
- (void)markEventSyncUpdateContact:(id)arg1 reason:(unsigned int)arg2;
- (void)markEventTriggerDownload:(id)arg1;
- (void)registerOpenWeAppInfo:(id)arg1 appVersion:(long long)arg2 appState:(unsigned long long)arg3 scene:(unsigned long long)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

