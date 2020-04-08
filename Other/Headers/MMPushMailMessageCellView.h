//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMessageCellView.h"

#import "NSMenuDelegate-Protocol.h"

@class CAShapeLayer, MMReaderWrapView, NSImageView, NSString, NSTextField;

@interface MMPushMailMessageCellView : MMMessageCellView <NSMenuDelegate>
{
    MMReaderWrapView *_containerView;
    NSTextField *_senderLabel;
    NSTextField *_subjectLabel;
    NSTextField *_digestLabel;
    NSImageView *_attachmentIcon;
    CAShapeLayer *_strokeLayer;
}

+ (id)senderAttrString:(id)arg1;
+ (id)subjectAttrString:(id)arg1;
+ (id)digestAttrString:(id)arg1;
+ (BOOL)hasAttachment:(id)arg1;
+ (double)cellHeightWithMessage:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) NSImageView *attachmentIcon; // @synthesize attachmentIcon=_attachmentIcon;
@property(retain, nonatomic) NSTextField *digestLabel; // @synthesize digestLabel=_digestLabel;
@property(retain, nonatomic) NSTextField *subjectLabel; // @synthesize subjectLabel=_subjectLabel;
@property(retain, nonatomic) NSTextField *senderLabel; // @synthesize senderLabel=_senderLabel;
@property(retain, nonatomic) MMReaderWrapView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (id)contextMenuOutsideFrame;
- (BOOL)allowMultipleSelect;
- (BOOL)allowOpen;
- (BOOL)allowDelete;
- (BOOL)allowOperate;
- (BOOL)allowRecall;
- (struct CGRect)bubbleFrame;
- (struct CGRect)clickableArea;
- (void)updateHighlightMaskView;
- (void)layoutAttachmentIcon;
- (void)layoutSenderLabel;
- (void)layoutSubjectLabel;
- (void)layoutDigestLabel;
- (void)layoutContainerView;
- (void)layoutViews;
- (void)updateMessageLayer;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)populateWithMessage:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

