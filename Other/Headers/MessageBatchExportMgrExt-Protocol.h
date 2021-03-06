//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MessageData, NSArray, NSDictionary;

@protocol MessageBatchExportMgrExt <NSObject>

@optional
- (void)OnBatchExportFinishedWithTotalFileCount:(unsigned long long)arg1 failedMsgList:(NSArray *)arg2 reasons:(NSDictionary *)arg3;
- (void)OnBatchExportProgressWithMessage:(MessageData *)arg1 totalFileCount:(unsigned long long)arg2 finishedFileCount:(unsigned long long)arg3 shouldShowExportProgress:(BOOL)arg4;
- (void)OnBatchExportStartDownloadingWithMessage:(MessageData *)arg1;
@end

