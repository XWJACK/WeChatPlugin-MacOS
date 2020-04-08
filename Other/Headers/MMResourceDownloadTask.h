//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "MMResourceDownloadDelegate-Protocol.h"

@class MMResourceDownloadTaskContext, MMResourceDownloader, NSString;
@protocol MMResourceDownloadDelegate;

@interface MMResourceDownloadTask : NSOperation <MMResourceDownloadDelegate>
{
    NSString *_resUrl;
    MMResourceDownloadTaskContext *_context;
    MMResourceDownloader *_downloader;
    long long _retryCnt;
    long long _currentCnt;
    id <MMResourceDownloadDelegate> _downloadDelegate;
    BOOL _bExecuting;
    BOOL _bFinished;
    BOOL _bCancelled;
}

@property(nonatomic) id <MMResourceDownloadDelegate> downloadDelegate; // @synthesize downloadDelegate=_downloadDelegate;
@property(nonatomic) long long currentCnt; // @synthesize currentCnt=_currentCnt;
@property(nonatomic) long long retryCnt; // @synthesize retryCnt=_retryCnt;
@property(readonly, retain, nonatomic) MMResourceDownloadTaskContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *resUrl; // @synthesize resUrl=_resUrl;
- (void).cxx_destruct;
- (void)onDownloadFinish:(long long)arg1 downloadData:(id)arg2 resUrl:(id)arg3;
- (void)startDownload;
- (void)cancelDownload;
- (void)startRunloop:(double)arg1;
- (void)emptyThreadTimer:(id)arg1;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)dealloc;
- (id)initWithResUrl:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

