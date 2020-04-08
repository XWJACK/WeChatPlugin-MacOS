//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface MMCDNDownloadMgr : MMService <ICdnComMgrExt, MMService>
{
    NSMutableDictionary *_downloadingTasks;
    NSMutableArray *_favDownloadQueue;
    NSMutableSet *_favDownloadingSet;
    NSMutableArray *_favStartedSet;
    NSLock *_m_lock;
}

@property(retain, nonatomic) NSLock *m_lock; // @synthesize m_lock=_m_lock;
@property(retain, nonatomic) NSMutableArray *favStartedSet; // @synthesize favStartedSet=_favStartedSet;
@property(retain, nonatomic) NSMutableSet *favDownloadingSet; // @synthesize favDownloadingSet=_favDownloadingSet;
@property(retain, nonatomic) NSMutableArray *favDownloadQueue; // @synthesize favDownloadQueue=_favDownloadQueue;
@property(retain, nonatomic) NSMutableDictionary *downloadingTasks; // @synthesize downloadingTasks=_downloadingTasks;
- (void).cxx_destruct;
- (BOOL)StopHttpsDownloadTask:(id)arg1;
- (BOOL)StartHttpsDownloadTask:(id)arg1 withUrl:(id)arg2 withSavePath:(id)arg3 withIPList:(id)arg4 withIsGzip:(BOOL)arg5 withFileType:(int)arg6;
- (void)OnCdnDownloadFinished:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (id)fileCDNDownloadParaWithFavItemData:(id)arg1 destinationPath:(id)arg2 type:(int)arg3;
- (id)imageCDNDownloadParaWithFavItemData:(id)arg1;
- (id)thumbnailCDNDownloadParaWithFavItemData:(id)arg1;
- (id)videoCDNDownloadParaWithMessage:(id)arg1;
- (id)thumbnailCDNDownloadParaWithMessage:(id)arg1;
- (id)fileCDNDownloadParaWithMessage:(id)arg1 destinationPath:(id)arg2;
- (id)AppMsgImageCDNDownloadParaWithMessage:(id)arg1;
- (id)downloadCDNFileWithChatName:(id)arg1 mesLocalID:(unsigned int)arg2 recordMsgData:(id)arg3 type:(int)arg4 isThumbnail:(BOOL)arg5;
- (double)downloadProgressOfFaviItemData:(id)arg1;
- (void)startFavDownloadQueue;
- (id)downloadCDNFileWithFavItemData:(id)arg1 destinationPath:(id)arg2 type:(int)arg3;
- (id)downloadCDNFileWithFavItemData:(id)arg1 type:(int)arg2;
- (BOOL)messageIsInDownloadingList:(id)arg1;
- (void)cancelDownloadWithMessage:(id)arg1 type:(int)arg2;
- (BOOL)downloadCDNFileWithMessage:(id)arg1 type:(int)arg2 destinationPath:(id)arg3 signature:(id)arg4 fakeAeskey:(id)arg5 fakeSignature:(id)arg6;
- (BOOL)downloadCDNFileWithMessage:(id)arg1 type:(int)arg2 signature:(id)arg3 fakeAeskey:(id)arg4 fakeSignature:(id)arg5;
- (id)imageTmpPathWithMessage:(id)arg1;
- (id)imagePathWithMessage:(id)arg1;
- (BOOL)downloadImageWithMessage:(id)arg1 disableHevc:(BOOL)arg2;
- (BOOL)downloadImageWithMessage:(id)arg1;
- (void)destroy;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
