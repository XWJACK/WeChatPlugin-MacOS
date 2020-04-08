//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "ICdnComMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMAppAttachFileMgr : MMService <ICdnComMgrExt, MMService>
{
    NSMutableDictionary *_msgWrapDict;
    NSMutableDictionary *_msgAttachUrlDict;
}

@property(retain, nonatomic) NSMutableDictionary *msgAttachUrlDict; // @synthesize msgAttachUrlDict=_msgAttachUrlDict;
@property(retain, nonatomic) NSMutableDictionary *msgWrapDict; // @synthesize msgWrapDict=_msgWrapDict;
- (void).cxx_destruct;
- (void)OnCdnUpload:(id)arg1;
- (void)checkDownload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)CheckPCWechatFileWithMessageData:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)checkUploadInternal:(id)arg1 scene:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)calMessageDataFileMd5:(id)arg1 scene:(unsigned int)arg2 filePath:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)checkUpload:(id)arg1 scene:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkIfFileExistInSvrInternal:(id)arg1 IsLargeFile:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkIfFileExistInSvr:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isGBLargeFileMessage:(id)arg1 isNormalLarge:(BOOL)arg2;
- (BOOL)isLargeFileMessage:(id)arg1;
- (unsigned long long)getShareChatRoomMemberMaxCount;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)destroy;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

