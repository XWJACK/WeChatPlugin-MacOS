//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FavoritesUploaderDelegate-Protocol.h"

@class FavoritesUploader, NSMutableArray, NSString, WCFavoritesDB;
@protocol FavoritesUploadMgrDelegate, OS_dispatch_queue;

@interface FavoritesUploadMgr : NSObject <FavoritesUploaderDelegate>
{
    NSMutableArray *_uploadingQueue;
    NSMutableArray *_failedQueue;
    NSMutableArray *_activeQueue;
    BOOL _isUploading;
    WCFavoritesDB *_favItemDB;
    FavoritesUploader *_favUploader;
    BOOL _isCountingMd5;
    NSObject<OS_dispatch_queue> *_queue_countMd5;
    id <FavoritesUploadMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <FavoritesUploadMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onUploadFavItem:(id)arg1 LocalDataId:(id)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onUploadFail:(id)arg1 ErrCode:(int)arg2;
- (void)onUploadFinished:(id)arg1;
- (void)onCopyFileFinished:(id)arg1;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (void)tryStartUpload;
- (id)getUploadFailedItemList;
- (id)getUploadPausedItemList;
- (id)getUploadItemList;
- (BOOL)pauseUploadFavoritesItem:(unsigned int)arg1;
- (BOOL)restartAllUploadFailedItems;
- (BOOL)startUploadItem:(id)arg1 IsPriority:(BOOL)arg2;
- (void)removeItemByLocalId:(unsigned int)arg1 inQueue:(id)arg2;
- (BOOL)deleteCdnInfoByFavoritesItemLocalIdIgnoringStatus:(unsigned int)arg1;
- (id)getUploadCdnInfoByLocalItemDataId:(id)arg1 isThumb:(BOOL)arg2;
- (BOOL)updateCdnInfo:(id)arg1;
- (BOOL)updateCdnInfo:(id)arg1 MD5:(id)arg2 Head256Md5:(id)arg3 isThumb:(BOOL)arg4;
- (id)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (void)TryStartUpload;
- (void)checkAndTryStartUpload;
- (void)setItemUploadFail:(id)arg1 ErrCode:(int)arg2;
- (BOOL)delUploadItem:(id)arg1;
- (BOOL)addUploadItem:(id)arg1 delayUpload:(BOOL)arg2;
- (BOOL)addUploadItem:(id)arg1;
- (void)startCountMd5AndUpload;
- (void)doCopyFile:(id)arg1;
- (void)saveMd5ToCdnInfoTable:(id)arg1;
- (BOOL)fileMD5WithPath:(id)arg1 md5:(id *)arg2 md5Head:(id *)arg3;
- (BOOL)countMD5AndCopyWithFavoritesItem:(id)arg1;
- (BOOL)loadFailedQueue;
- (BOOL)loadUploadingQueue;
- (void)dealloc;
- (id)initWithDB:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
