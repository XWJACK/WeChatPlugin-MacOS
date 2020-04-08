//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "IContactMgrExt-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class MMChatsCellAvatarView, MMImageView, MMSessionInfo, MMSidebarColorIconView, MMSidebarLabelTextField, MMTextView, MMView, NSArray, NSString, NSView;
@protocol MMChatManagerTableCellViewDelegate;

@interface MMChatManagerTableCellView : NSTableCellView <IContactMgrExt, NSMenuDelegate>
{
    BOOL _selected;
    BOOL _shouldRemoveHighlight;
    BOOL _isMuted;
    BOOL _shouldDrawFocusRing;
    id <MMChatManagerTableCellViewDelegate> _delegate;
    MMSessionInfo *_sessionInfo;
    MMView *_vibrancyContainer;
    MMChatsCellAvatarView *_avatar;
    MMSidebarLabelTextField *_summary;
    MMTextView *_nickName;
    NSView *_containerView;
    NSArray *_searchKeyWords;
    MMView *_seperator;
    MMSidebarColorIconView *_stickyIndicator;
    MMImageView *_openIMIcon;
    struct CGPoint _mouseDownLocation;
}

@property(retain, nonatomic) MMImageView *openIMIcon; // @synthesize openIMIcon=_openIMIcon;
@property(nonatomic) struct CGPoint mouseDownLocation; // @synthesize mouseDownLocation=_mouseDownLocation;
@property(nonatomic) BOOL shouldDrawFocusRing; // @synthesize shouldDrawFocusRing=_shouldDrawFocusRing;
@property(nonatomic) BOOL isMuted; // @synthesize isMuted=_isMuted;
@property(retain, nonatomic) MMSidebarColorIconView *stickyIndicator; // @synthesize stickyIndicator=_stickyIndicator;
@property(retain, nonatomic) MMView *seperator; // @synthesize seperator=_seperator;
@property(nonatomic) BOOL shouldRemoveHighlight; // @synthesize shouldRemoveHighlight=_shouldRemoveHighlight;
@property(retain, nonatomic) NSArray *searchKeyWords; // @synthesize searchKeyWords=_searchKeyWords;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMTextView *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) MMSidebarLabelTextField *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) MMChatsCellAvatarView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) MMView *vibrancyContainer; // @synthesize vibrancyContainer=_vibrancyContainer;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) MMSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(nonatomic) __weak id <MMChatManagerTableCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hightLightedAttrString:(id)arg1;
- (void)autoChangeSummaryBottom;
- (double)changeLineHight;
- (void)mouseDragged:(id)arg1;
- (BOOL)notMoveFar:(id)arg1;
- (BOOL)eventIsInsideClickableArea:(id)arg1;
- (struct CGRect)clickableArea;
- (void)mouseDown:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)openWithSingleChatManager;
- (void)openChat;
- (void)openChatByMenu;
- (id)menuForEvent:(id)arg1;
- (BOOL)canBecomeKeyView;
- (void)onModifyContacts:(id)arg1;
- (void)onModifyUserImageWithUrl:(id)arg1 userName:(id)arg2;
- (id)summaryAttributedStringWithSearchResult:(id)arg1;
- (id)nicknameAttributedStringWithString:(id)arg1;
- (BOOL)shouldDisplaySpecialMessagePlaceholder;
- (id)lastMessage;
@property(readonly, nonatomic) NSString *userName;
- (BOOL)shouldUseSelectedColorForText;
- (void)updateSelectionBackground;
- (void)_stopListeningForWindowChanges;
- (void)layoutLabels;
- (void)updateNicknameTextView;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setSearchResult:(id)arg1 searchResult:(id)arg2;
- (void)prepareForReuse;
- (void)showUIDebugGuidesChanged:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

