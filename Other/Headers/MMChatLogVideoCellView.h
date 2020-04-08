//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMChatLogBaseCellView.h"

@class MMImageView, NSImageView, NSString, NSTextField;

@interface MMChatLogVideoCellView : MMChatLogBaseCellView
{
    BOOL _isShouldOpenOnDownloadFinish;
    BOOL _isWebStreamVideo;
    BOOL _isExpired;
    BOOL _isDownloadFailed;
    MMImageView *_thumbnailImageView;
    NSTextField *_videoDescriptionTextView;
    NSTextField *_videoDurationTextView;
    NSString *_videoFilePath;
    NSString *_videoThumbPath;
    long long _scene;
    NSImageView *_iconImageView;
}

+ (double)cellHeightWithFavItemDataField:(id)arg1 parentMessage:(id)arg2 parentFavItem:(id)arg3 parentDataField:(id)arg4 constrainedToWidth:(double)arg5;
@property(retain, nonatomic) NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) BOOL isDownloadFailed; // @synthesize isDownloadFailed=_isDownloadFailed;
@property(nonatomic) BOOL isExpired; // @synthesize isExpired=_isExpired;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) BOOL isWebStreamVideo; // @synthesize isWebStreamVideo=_isWebStreamVideo;
@property(retain, nonatomic) NSString *videoThumbPath; // @synthesize videoThumbPath=_videoThumbPath;
@property(retain, nonatomic) NSString *videoFilePath; // @synthesize videoFilePath=_videoFilePath;
@property(nonatomic) BOOL isShouldOpenOnDownloadFinish; // @synthesize isShouldOpenOnDownloadFinish=_isShouldOpenOnDownloadFinish;
@property(retain, nonatomic) NSTextField *videoDurationTextView; // @synthesize videoDurationTextView=_videoDurationTextView;
@property(retain, nonatomic) NSTextField *videoDescriptionTextView; // @synthesize videoDescriptionTextView=_videoDescriptionTextView;
@property(retain, nonatomic) MMImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
- (void).cxx_destruct;
- (id)videoThumbImageWithPath:(id)arg1;
- (void)openFile;
- (void)layoutVideoContentView;
- (void)layoutVideoDurationTextView;
- (void)layoutVideoDescriptionTextView;
- (id)getVideoDescription;
- (void)populateWithFavItemDataField:(id)arg1;
- (void)populateWithFavItemDataField:(id)arg1 parentMessage:(id)arg2;
- (void)populateWithFavItemDataField:(id)arg1 parentFavItem:(id)arg2;
- (id)originalFilePath;
- (BOOL)allowExport;
- (BOOL)allowAddToFavorites;
- (BOOL)allowForward;
- (BOOL)allowCopy;
- (struct CGRect)clickableArea;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

