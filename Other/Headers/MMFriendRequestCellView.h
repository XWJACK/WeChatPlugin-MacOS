//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "MMViewerWindowDelegate-Protocol.h"

@class MMAvatarImageView, MMFriendRequestData, MMView, NSButton, NSString, NSTextField, NSTextView;

@interface MMFriendRequestCellView : NSTableCellView <MMViewerWindowDelegate>
{
    BOOL _isLastCell;
    BOOL _friendAdded;
    MMAvatarImageView *_avatarImgView;
    NSTextField *_nickNameField;
    NSTextView *_requestContentsView;
    NSButton *_acceptButton;
    NSButton *_deleteButton;
    NSTextField *_friendAddedField;
    MMFriendRequestData *_friendRequestData;
    MMView *_seperator;
    struct CGSize _requestContentsViewSize;
}

+ (id)defaultParagraphStyle;
+ (id)attributedStringWithRequestContents:(id)arg1;
+ (double)availableWidthForDescriptionWithCellWidth:(double)arg1;
+ (double)cellHeightWithFriendRequestData:(id)arg1 width:(double)arg2;
@property(nonatomic) struct CGSize requestContentsViewSize; // @synthesize requestContentsViewSize=_requestContentsViewSize;
@property(nonatomic) BOOL friendAdded; // @synthesize friendAdded=_friendAdded;
@property(nonatomic) BOOL isLastCell; // @synthesize isLastCell=_isLastCell;
@property(retain, nonatomic) MMView *seperator; // @synthesize seperator=_seperator;
@property(retain, nonatomic) MMFriendRequestData *friendRequestData; // @synthesize friendRequestData=_friendRequestData;
@property(retain, nonatomic) NSTextField *friendAddedField; // @synthesize friendAddedField=_friendAddedField;
@property(retain, nonatomic) NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) NSButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) NSTextView *requestContentsView; // @synthesize requestContentsView=_requestContentsView;
@property(retain, nonatomic) NSTextField *nickNameField; // @synthesize nickNameField=_nickNameField;
@property(retain, nonatomic) MMAvatarImageView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
- (void).cxx_destruct;
- (void)showUIDebugGuidesChanged:(id)arg1;
- (struct CGRect)originScreenRectForAnimationForWindow:(id)arg1;
- (void)enlargeAvatarImage:(id)arg1;
- (void)deleteRequest:(id)arg1;
- (void)acceptFriend:(id)arg1;
- (void)populateWithFriendRequestData:(id)arg1 isLastCell:(BOOL)arg2 width:(double)arg3;
- (void)prepareForReuse;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

