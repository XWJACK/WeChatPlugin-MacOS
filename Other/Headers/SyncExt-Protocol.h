//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol SyncExt <NSObject>

@optional
- (void)onSyncFail;
- (void)onSyncSuccess;
- (void)onSyncFinishWithStatus:(unsigned int)arg1 withOnlineVersion:(unsigned int)arg2;
- (void)onSyncCmdID:(unsigned int)arg1 withCmdBuffer:(NSData *)arg2 handled:(char *)arg3;
- (void)onInitCancel;
- (void)onInitFail;
- (void)onInitFinish;
- (void)onInitProcessed:(unsigned int)arg1;
@end

