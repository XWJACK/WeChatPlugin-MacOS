//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMEmoticonMgrLogicDelegate-Protocol.h"
#import "MMResourceMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class MMEmoticonDB, MMEmoticonMgrLogic, MMEmotionGroupInfo, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface EmoticonMgr : MMService <MMEmoticonMgrLogicDelegate, MMResourceMgrExt, MMService>
{
    MMEmoticonDB *_db;
    NSMutableArray *_cachedStickerGroups;
    NSMutableArray *_cachedEmojiGroups;
    unsigned char _isGetting;
    MMEmoticonMgrLogic *_emoticonMgrLogic;
    MMEmotionGroupInfo *_favEmoticonGroup;
    NSMutableArray *_needDownloadEmoticonStoreIconList;
    NSMutableArray *_needDownloadEmoticonStoreItemList;
    NSMutableArray *_allEmoticonStoreItemList;
    NSMutableDictionary *_dictCaptions;
    NSData *_currReqBuf;
    NSMutableArray *_emoticonStoreItemServerList;
    unsigned long long _retryCount;
}

+ (id)MMKVKeyForEmoticonResWithSubType:(unsigned int)arg1;
+ (id)dirPathOfEmoticonResForSubType:(unsigned int)arg1;
+ (id)dirPathAfterUnzipIfNeedUpdateForSubType:(unsigned int)arg1;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned char isGetting; // @synthesize isGetting=_isGetting;
@property(retain, nonatomic) NSMutableArray *emoticonStoreItemServerList; // @synthesize emoticonStoreItemServerList=_emoticonStoreItemServerList;
@property(retain, nonatomic) NSData *currReqBuf; // @synthesize currReqBuf=_currReqBuf;
@property(retain) NSMutableDictionary *dictCaptions; // @synthesize dictCaptions=_dictCaptions;
@property(retain) NSMutableArray *allEmoticonStoreItemList; // @synthesize allEmoticonStoreItemList=_allEmoticonStoreItemList;
@property(retain, nonatomic) NSMutableArray *needDownloadEmoticonStoreItemList; // @synthesize needDownloadEmoticonStoreItemList=_needDownloadEmoticonStoreItemList;
@property(retain, nonatomic) NSMutableArray *needDownloadEmoticonStoreIconList; // @synthesize needDownloadEmoticonStoreIconList=_needDownloadEmoticonStoreIconList;
@property(readonly) MMEmotionGroupInfo *favEmoticonGroup; // @synthesize favEmoticonGroup=_favEmoticonGroup;
@property(retain, nonatomic) MMEmoticonMgrLogic *emoticonMgrLogic; // @synthesize emoticonMgrLogic=_emoticonMgrLogic;
- (void).cxx_destruct;
- (void)updateEmoticonFromServer;
- (BOOL)isJsbOrDiceEmoticonMd5:(id)arg1;
- (BOOL)isGameEmoticonWith:(id)arg1;
- (BOOL)deleteEmoticonDB;
- (void)insertDBFlag;
- (void)emoticonDecryptCheck;
- (void)emojiBase64tools;
- (void)unZipResWithPath:(id)arg1 forSubType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (unsigned char)removeFailStoreEmoticonFromList:(id)arg1;
- (BOOL)removeInstalledStickerPackWithID:(id)arg1;
- (BOOL)unzipPackageAtPath:(id)arg1 withPid:(id)arg2;
- (void)installPackageFromZip:(id)arg1 storeInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealWithResponse:(id)arg1;
- (void)fetchAndDownloadPurchasedStickerStoreListWithCompletion:(CDUnknownBlockType)arg1;
- (void)updatePurchasedStickerStoreList;
- (id)_storeItemsFromResponse:(id)arg1;
- (id)_emotionListRequestWithType:(int)arg1;
- (BOOL)stickerPackExistsWithID:(id)arg1;
- (BOOL)isStickerTouchLimitCount;
- (BOOL)isStickerTouchLimitSize:(id)arg1;
- (void)setStickerToastViewDelegate:(id)arg1;
- (void)addEmoticonToUploadQueueWithMD5:(id)arg1;
- (void)addFavEmoticon:(id)arg1;
- (void)onFavEmoticonChanged;
- (void)onFavEmoticonMD5Updated;
- (id)getDownloadFavEmoticons;
- (void)_populateFavoritesGroup;
- (void)refreshFavoriteEmoticonsIfNeeded;
- (id)favoritesGroup;
- (id)getEmoticonDescWithMD5:(id)arg1;
- (id)getEmotionThumbWithPackageID:(id)arg1;
- (id)getEmotionThumbWithMD5:(id)arg1;
- (id)getEmotionImgWithMD5:(id)arg1;
- (id)getEmotionDataWithMD5:(id)arg1;
- (unsigned char)updateEmotionThumbCacheWithMD5:(id)arg1;
- (id)_localizedStickerCaption:(id)arg1;
@property(readonly) NSArray *emoticonGroupsForStickerPicker;
@property(readonly) NSArray *emoticonGroupsForEmojiPicker;
@property(readonly) NSArray *allEmoticonGroupsEmoji;
@property(readonly) NSArray *allEmoticonGroupsWithoutEmoji;
@property(readonly) NSArray *allEmoticonGroups;
- (BOOL)isEmoticonMD5InFavorites:(id)arg1;
- (BOOL)allowAddToFavorites;
- (void)configWxAMEnableSetting;
- (void)onServiceClearData;
- (void)dealloc;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

