//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMChatLogImageCellView.h"

#import "IMMRecordNestedDownloadMgrExt-Protocol.h"

@class NSString;

@interface MMRecordChatLogImageCellView : MMChatLogImageCellView <IMMRecordNestedDownloadMgrExt>
{
}

+ (double)cellHeightWithFavItemDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3 parentDataField:(id)arg4 constrainedToWidth:(double)arg5;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnRecordNestedDataFieldDownloadRetryFailedImageRecordData:(id)arg1;
- (void)OnDownloadRecordNestedDataFieldOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)openImagePreview;
- (void)layoutThumbImageView;
- (void)populateWithFavItemDataField:(id)arg1 parentDataField:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
