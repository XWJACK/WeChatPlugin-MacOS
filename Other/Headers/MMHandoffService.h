//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IExptServiceExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMCGIDelegate-Protocol.h"
#import "MMService-Protocol.h"

@class NSMutableArray, NSRecursiveLock, NSString, TSDictionary;

@interface MMHandoffService : MMService <IMessageExt, MMCGIDelegate, IExptServiceExt, MMService>
{
    BOOL _isWaitingGetAll;
    unsigned int _sessionId;
    long long _seqNO;
    NSMutableArray *_section0;
    NSMutableArray *_section1;
    NSMutableArray *_section2;
    NSMutableArray *_myItemList;
    NSString *_networkStatus;
    NSString *_deviceID;
    TSDictionary *_openedItemDic;
    NSString *_preNotifyHandoff;
    double _contentHeight;
    NSRecursiveLock *_lock;
}

@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(copy, nonatomic) NSString *preNotifyHandoff; // @synthesize preNotifyHandoff=_preNotifyHandoff;
@property(nonatomic) BOOL isWaitingGetAll; // @synthesize isWaitingGetAll=_isWaitingGetAll;
@property(retain, nonatomic) TSDictionary *openedItemDic; // @synthesize openedItemDic=_openedItemDic;
@property(nonatomic) unsigned int sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *networkStatus; // @synthesize networkStatus=_networkStatus;
@property(retain, nonatomic) NSMutableArray *myItemList; // @synthesize myItemList=_myItemList;
@property(retain, nonatomic) NSMutableArray *section2; // @synthesize section2=_section2;
@property(retain, nonatomic) NSMutableArray *section1; // @synthesize section1=_section1;
@property(retain, nonatomic) NSMutableArray *section0; // @synthesize section0=_section0;
@property(nonatomic) long long seqNO; // @synthesize seqNO=_seqNO;
- (void).cxx_destruct;
- (void)onExptItemListChange;
- (void)updateHandoffConfig;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)sendCancleUploadCGIRequest:(id)arg1;
- (void)sendGetExpireCGIRequest:(id)arg1;
- (void)sendGetAllListCGIRequest;
- (void)handleHandoffItemWithOpCode:(int)arg1 withItemList:(id)arg2;
- (void)updateSessionList;
- (void)updateMyItemListDataSource;
- (void)parseMsgContent:(id)arg1;
- (void)onGetStatusNotifyCommand:(id)arg1;
- (id)getSectionArry:(long long)arg1;
- (long long)numberOfRowInSection:(long long)arg1;
- (long long)numberOfRows;
- (id)convertHandoffItemToMsgData:(id)arg1;
- (id)convertHandoffItemToDataField:(id)arg1;
- (void)saveAsFile:(id)arg1;
- (id)getHandoffItemFile:(id)arg1;
- (void)openFileHelper;
- (void)openWeAppItem:(id)arg1 opFrom:(int)arg2;
- (void)openUrlItem:(id)arg1 opFrom:(int)arg2;
- (void)openFileItem:(id)arg1 opFrom:(int)arg2;
- (void)removeOpenedItem:(id)arg1;
- (void)openFavFile:(id)arg1 opFrom:(int)arg2;
- (void)openMsgFile:(id)arg1 opFrom:(int)arg2;
- (id)handoffRootPath;
- (id)getPhoneNetStatus;
- (long long)getTimeoutInterval;
- (double)getContentHeight;
- (void)updateContentViewHeight;
- (void)onServiceDidWake;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

