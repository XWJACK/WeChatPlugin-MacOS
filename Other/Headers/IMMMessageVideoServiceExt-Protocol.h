//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMMessageVideoService, MessageData;

@protocol IMMMessageVideoServiceExt <NSObject>

@optional
- (void)messageVideoService:(MMMessageVideoService *)arg1 didCancelUploadWithMessage:(MessageData *)arg2;
- (void)messageVideoService:(MMMessageVideoService *)arg1 videoUpdateStatusChangedWithMessage:(MessageData *)arg2;
- (void)messageVideoService:(MMMessageVideoService *)arg1 didCancelDownloadWithMessage:(MessageData *)arg2;
- (void)messageVideoService:(MMMessageVideoService *)arg1 didFailDownloadWithMessage:(MessageData *)arg2;
- (void)messageVideoService:(MMMessageVideoService *)arg1 didFinishDownloadWithMessage:(MessageData *)arg2;
- (void)messageVideoService:(MMMessageVideoService *)arg1 downloaded:(int)arg2 of:(int)arg3 withMessage:(MessageData *)arg4;
@end

