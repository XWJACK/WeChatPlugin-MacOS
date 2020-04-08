//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessageHandler.h"

#import "RecordUploadCDNMgrDelegate-Protocol.h"

@class NSString, RecordUploadCDNMgr;
@protocol RecordMessageHandlerDelegate;

@interface RecordMessageHandler : MessageHandler <RecordUploadCDNMgrDelegate>
{
    id <RecordMessageHandlerDelegate> _delegate;
    RecordUploadCDNMgr *_recordUploadCDNMgr;
}

@property(retain, nonatomic) RecordUploadCDNMgr *recordUploadCDNMgr; // @synthesize recordUploadCDNMgr=_recordUploadCDNMgr;
@property(nonatomic) __weak id <RecordMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onUploadCDNRecordMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (BOOL)IsMsgSending:(id)arg1;
- (void)addMsgToSendQueue:(id)arg1 msgData:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
