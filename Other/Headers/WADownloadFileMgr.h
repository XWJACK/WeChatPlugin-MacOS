//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "WAAppTaskMgrExt-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WADownloadFileMgr : MMService <WAAppTaskMgrExt, MMService>
{
    NSMutableDictionary *_dicAppID2DownloadHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

- (void).cxx_destruct;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)clearAllDownloadHandler;
- (void)interruptDownloadHandlerWithAppID:(id)arg1;
- (void)clearDownloadHandlerWithAppID:(id)arg1;
- (id)getDownloadHandler:(id)arg1;
- (id)getAndNewDownloadHandlerIfNotExistWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 context:(id)arg3;
- (BOOL)abortDownloadTask:(id)arg1 taskID:(id)arg2 getError:(id *)arg3;
- (void)downloadFileWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 isIgnoreCheckDomain:(BOOL)arg3 taskID:(id)arg4 url:(id)arg5 httpHeaders:(id)arg6 context:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)genDownloadTaskID;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

