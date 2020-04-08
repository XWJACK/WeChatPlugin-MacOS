//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "AccountServiceExt-Protocol.h"
#import "IBetaMgrExt-Protocol.h"

@class MMBadgeOverlayView, MMTextField, MMTrackingButton, MMView, NSSet, NSString, NSVisualEffectView;

@interface MMSettingMenuWindowController : NSWindowController <IBetaMgrExt, AccountServiceExt>
{
    NSVisualEffectView *_visualView;
    MMTrackingButton *_chatBackupBtn;
    MMTrackingButton *_settingBtn;
    MMBadgeOverlayView *_badgeView;
    MMTrackingButton *_feedbackBtn;
    NSSet *_transientEventMonitors;
    MMTextField *_settingTitle;
    MMTextField *_chatBackupTitle;
    MMTextField *_feedbackTitle;
    MMView *_overLayView;
}

@property(retain, nonatomic) MMView *overLayView; // @synthesize overLayView=_overLayView;
@property(retain, nonatomic) MMTextField *feedbackTitle; // @synthesize feedbackTitle=_feedbackTitle;
@property(retain, nonatomic) MMTextField *chatBackupTitle; // @synthesize chatBackupTitle=_chatBackupTitle;
@property(retain, nonatomic) MMTextField *settingTitle; // @synthesize settingTitle=_settingTitle;
@property(copy, nonatomic) NSSet *transientEventMonitors; // @synthesize transientEventMonitors=_transientEventMonitors;
@property(retain, nonatomic) MMTrackingButton *feedbackBtn; // @synthesize feedbackBtn=_feedbackBtn;
@property(retain, nonatomic) MMBadgeOverlayView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) MMTrackingButton *settingBtn; // @synthesize settingBtn=_settingBtn;
@property(retain, nonatomic) MMTrackingButton *chatBackupBtn; // @synthesize chatBackupBtn=_chatBackupBtn;
@property(retain) NSVisualEffectView *visualView; // @synthesize visualView=_visualView;
- (void).cxx_destruct;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)onUserLogout;
- (void)onClearUnreadBetaPackage;
- (void)onClearUnreadBetaInvitation;
- (void)onRecvBetaPackage:(id)arg1;
- (void)onRecvBetaInvitation:(id)arg1;
- (void)showFeedbackWindow:(id)arg1;
- (void)showChatBackupWindow:(id)arg1;
- (void)showSettingWindow:(id)arg1;
- (void)appResignedActive:(id)arg1;
- (void)close;
- (void)removeEventMonitors;
- (void)showWindowAnimate:(id)arg1;
- (void)setWindowResizable:(BOOL)arg1;
- (id)maskImageWithCornerRadius:(double)arg1;
- (void)showSettingRedDotIfNeeded;
- (void)layoutFeedbackView;
- (void)layoutSubviews;
- (void)setupVisualView;
- (void)dealloc;
- (void)windowDidLoad;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
