//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMessageExt-Protocol.h"
#import "MMCDNDownloadMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMMessageFileService : MMService <MMCDNDownloadMgrExt, IMessageExt, MMService>
{
    NSMutableDictionary *_uploadingMessageSet;
    NSMutableDictionary *_downloadingMessageSet;
}

@property(retain, nonatomic) NSMutableDictionary *downloadingMessageSet; // @synthesize downloadingMessageSet=_downloadingMessageSet;
@property(retain, nonatomic) NSMutableDictionary *uploadingMessageSet; // @synthesize uploadingMessageSet=_uploadingMessageSet;
- (void).cxx_destruct;
- (void)fileReTransferOfChat:(id)arg1 forMessage:(long long)arg2;
- (id)getUploadingMessageForUniqueID:(id)arg1;
- (id)getDownloadingMessageForUniqueID:(id)arg1;
- (void)onAppMsgSendFinish:(id)arg1 msgData:(id)arg2;
- (void)onAppMsgUploadProgress:(id)arg1 msgData:(id)arg2 uploadedBytes:(int)arg3 totalBytes:(int)arg4;
- (void)onAppMsgDownloadFinish:(id)arg1 msgData:(id)arg2 isSuccess:(BOOL)arg3;
- (void)onAppMsgDownloadProgress:(id)arg1 msgData:(id)arg2 downloadedBytes:(int)arg3 totalBytes:(int)arg4;
- (void)cdnDownloadMgrDidCanceledDownloadWithCdnTask:(id)arg1;
- (void)cdnDownloadMgrDidFailedDownloadWithCdnTask:(id)arg1;
- (void)cdnDownloadMgrDidFinishedDownloadWithCdnTask:(id)arg1;
- (void)cdnDownloadMgrDownloaded:(int)arg1 of:(int)arg2 withMessage:(id)arg3 type:(int)arg4 tryShow:(BOOL)arg5;
- (void)changeMessage:(id)arg1 downloadFileStatus:(unsigned int)arg2;
- (void)failUploadFileWithMessage:(id)arg1;
- (void)cancelUploadFileWithMessage:(id)arg1;
- (void)cancelDownloadFileWithMessage:(id)arg1;
- (void)_startDownloadWithMessage:(id)arg1 destinationPath:(id)arg2 signature:(id)arg3 fakeAeskey:(id)arg4 fakeSignature:(id)arg5;
- (id)generateFilePathWithFileName:(id)arg1 folderPath:(id)arg2;
- (void)downloadFileWithMessage:(id)arg1 chatName:(id)arg2 destinationPath:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

