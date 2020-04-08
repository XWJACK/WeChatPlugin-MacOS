//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "SDWebImageManagerDelegate-Protocol.h"

@class CAShapeLayer, MMCTTextView, MMImageView, MMView, NSImageView, NSString, NSTextField;

@interface MMAppBrandMessageCellView : MMMessageCellView <SDWebImageManagerDelegate>
{
    MMView *_containerView;
    NSImageView *_iconImageView;
    NSTextField *_appNameLabel;
    MMCTTextView *_titleTextView;
    MMImageView *_appImageView;
    NSTextField *_bottomTextView;
    MMView *_divider;
    CAShapeLayer *_strokeLayer;
    CAShapeLayer *_highlightLayer;
}

+ (double)descTextViewHeight:(id)arg1;
+ (id)descTextViewAttrubutes;
+ (double)containerHeightWithMessage:(id)arg1;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) MMView *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) NSTextField *bottomTextView; // @synthesize bottomTextView=_bottomTextView;
@property(retain, nonatomic) MMImageView *appImageView; // @synthesize appImageView=_appImageView;
@property(retain, nonatomic) MMCTTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) NSTextField *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)writeIntoPasteboard:(id)arg1 orItem:(id)arg2 provideDataForType:(id)arg3;
- (id)draggingImage;
- (BOOL)draggingEnabled;
- (void)webImageManager:(id)arg1 didFinishWithImage:(id)arg2;
- (void)layoutThumbImage;
- (void)loadData;
- (BOOL)alwaysDisableMessageTextViewSelectableProperty;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setChoosable:(BOOL)arg1;
- (struct CGRect)bubbleFrame;
- (id)getOperationMenuItem;
- (BOOL)allowContextMenuForEvent:(id)arg1;
- (BOOL)allowChoose;
- (void)updateHighlightMaskView;
- (void)updateMessageLayer;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)populateWithMessage:(id)arg1;
- (void)prepareForReuse;
- (struct CGRect)clickableArea;
- (void)openWaApp;
- (id)bottomString;
- (id)appIconUrlString;
- (id)appName;
- (id)titleName;
- (void)layoutSubViews;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

