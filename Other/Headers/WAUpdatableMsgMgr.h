//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableSet, NSString, WAUpdatableMsgStorage;

@interface WAUpdatableMsgMgr : MMService <MMService>
{
    WAUpdatableMsgStorage *_updatableMsgStorage;
    NSMutableSet *_runningReq;
}

- (void).cxx_destruct;
- (void)callExtAndTryUpdateShareKey:(id)arg1;
- (void)delayCallExtAndTryUpdateShareKey:(id)arg1;
- (BOOL)tryUpdateUpdatableMsgInfoWithShareKey:(id)arg1 curInfo:(id)arg2;
- (id)getLatestUpdatableMsgInfoWithShareKey:(id)arg1 curInfo:(id)arg2;
- (void)subscribeSystemMsgWithShareKey:(id)arg1;
- (void)openSubscribeEntryWithShareKey:(id)arg1;
- (BOOL)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

