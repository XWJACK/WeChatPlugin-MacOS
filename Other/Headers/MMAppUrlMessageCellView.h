//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

@class CAShapeLayer, MMBorderView, MMCTTextView, MMImageView, NSImageView, NSTextField, NSView;

@interface MMAppUrlMessageCellView : MMMessageCellView
{
    NSView *_containerView;
    MMCTTextView *_titleLabel;
    MMCTTextView *_descriptionLabel;
    MMImageView *_thumbnailImageView;
    NSImageView *_videoIcon;
    CAShapeLayer *_strokeLayer;
    NSTextField *_appName;
    MMBorderView *_divider;
}

+ (id)messageTableItemAppName:(id)arg1;
+ (id)messageTableItemDesc:(id)arg1;
+ (id)messageTableItemTitle:(id)arg1;
+ (double)containerHeightWithMessage:(id)arg1;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) MMBorderView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSTextField *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) NSImageView *videoIcon; // @synthesize videoIcon=_videoIcon;
@property(retain, nonatomic) MMImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) MMCTTextView *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMCTTextView *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)handleThumbnailDownloadFailed;
- (void)setChoosable:(BOOL)arg1;
- (BOOL)allowChoose;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)getReferMenuItem;
- (id)getOperationMenuItem;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)draggingImage;
- (BOOL)draggingEnabled;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGRect)clickableArea;
- (struct CGRect)bubbleFrame;
- (id)defaultThumbnailImg;
- (void)layoutDescriptionLabel;
- (void)layoutThumbnail;
- (void)layoutTitleLabel;
- (void)layoutContainerView;
- (void)layoutBottomView;
- (void)updateMessageLayer;
- (void)updateHighlightMaskView;
- (void)populateWithMessage:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

