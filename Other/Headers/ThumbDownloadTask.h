//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"

@class MessageData, NSString;
@protocol ThumbDownloadTaskDelegate;

@interface ThumbDownloadTask : NSObject <ICdnComMgrExt>
{
    unsigned long long m_taskId;
    MessageData *m_msgData;
    id <ThumbDownloadTaskDelegate> m_delegate;
}

@property(nonatomic) __weak id <ThumbDownloadTaskDelegate> delegate; // @synthesize delegate=m_delegate;
@property(retain, nonatomic) MessageData *msgData; // @synthesize msgData=m_msgData;
@property(nonatomic) unsigned long long taskId; // @synthesize taskId=m_taskId;
- (void).cxx_destruct;
- (void)OnCdnDownloadFinished:(id)arg1;
- (void)downloadOk;
- (void)downloadFail:(int)arg1;
- (void)startDownloading;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

