//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "IBetaMgrExt-Protocol.h"
#import "MASPreferencesViewController-Protocol.h"

@class MMBadgeOverlayView, NSButton, NSImage, NSImageView, NSProgressIndicator, NSSlider, NSString, NSTextField;

@interface MMPreferencesGeneralController : NSViewController <MASPreferencesViewController, IBetaMgrExt>
{
    NSTextField *_accountInformationLabel;
    NSButton *_logOutButton;
    NSImageView *_avatarImageView;
    NSTextField *_nickNameLabel;
    NSTextField *_msgRecordLabel;
    NSButton *_saveChatLog;
    NSTextField *_textSizeLabel;
    NSSlider *_textSize;
    NSTextField *_textSizeExampleGlyphSmall;
    NSTextField *_textSizeExampleGlyphLarge;
    NSTextField *_totalSpaceTitle;
    NSTextField *_totalSpaceLabel;
    unsigned long long _totalMacSpaceSize;
    NSButton *_submitFeedbackButton;
    NSTextField *_informationFeedback;
    NSButton *_clearSpaceButton;
    NSTextField *_betaInvitationLabel;
    NSProgressIndicator *_loadingView;
    NSButton *_checkInvitationDetailBtn;
    NSButton *_downloadBetaBtn;
    NSButton *_aboutBetaBtn;
    NSButton *_aboutVersionBtn;
    MMBadgeOverlayView *_invitationBadgeView;
}

@property(retain, nonatomic) MMBadgeOverlayView *invitationBadgeView; // @synthesize invitationBadgeView=_invitationBadgeView;
@property __weak NSButton *aboutVersionBtn; // @synthesize aboutVersionBtn=_aboutVersionBtn;
@property __weak NSButton *aboutBetaBtn; // @synthesize aboutBetaBtn=_aboutBetaBtn;
@property __weak NSButton *downloadBetaBtn; // @synthesize downloadBetaBtn=_downloadBetaBtn;
@property(nonatomic) __weak NSButton *checkInvitationDetailBtn; // @synthesize checkInvitationDetailBtn=_checkInvitationDetailBtn;
@property(nonatomic) __weak NSProgressIndicator *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak NSTextField *betaInvitationLabel; // @synthesize betaInvitationLabel=_betaInvitationLabel;
@property(nonatomic) __weak NSButton *clearSpaceButton; // @synthesize clearSpaceButton=_clearSpaceButton;
@property(nonatomic) __weak NSTextField *informationFeedback; // @synthesize informationFeedback=_informationFeedback;
@property(nonatomic) __weak NSButton *submitFeedbackButton; // @synthesize submitFeedbackButton=_submitFeedbackButton;
@property(nonatomic) unsigned long long totalMacSpaceSize; // @synthesize totalMacSpaceSize=_totalMacSpaceSize;
@property(nonatomic) __weak NSTextField *totalSpaceLabel; // @synthesize totalSpaceLabel=_totalSpaceLabel;
@property(nonatomic) __weak NSTextField *totalSpaceTitle; // @synthesize totalSpaceTitle=_totalSpaceTitle;
@property(nonatomic) __weak NSTextField *textSizeExampleGlyphLarge; // @synthesize textSizeExampleGlyphLarge=_textSizeExampleGlyphLarge;
@property(nonatomic) __weak NSTextField *textSizeExampleGlyphSmall; // @synthesize textSizeExampleGlyphSmall=_textSizeExampleGlyphSmall;
@property(nonatomic) __weak NSSlider *textSize; // @synthesize textSize=_textSize;
@property(nonatomic) __weak NSTextField *textSizeLabel; // @synthesize textSizeLabel=_textSizeLabel;
@property(nonatomic) __weak NSButton *saveChatLog; // @synthesize saveChatLog=_saveChatLog;
@property __weak NSTextField *msgRecordLabel; // @synthesize msgRecordLabel=_msgRecordLabel;
@property __weak NSTextField *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property __weak NSImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak NSButton *logOutButton; // @synthesize logOutButton=_logOutButton;
@property __weak NSTextField *accountInformationLabel; // @synthesize accountInformationLabel=_accountInformationLabel;
- (void).cxx_destruct;
- (void)onClearUnreadBetaPackage;
- (void)onClearUnreadBetaInvitation;
- (void)onRecvBetaPackage:(id)arg1;
- (void)onRecvBetaInvitation:(id)arg1;
- (void)onAboutBetaBtnClick:(id)arg1;
- (void)onBetaVersionInfoClick:(id)arg1;
- (void)onDownloadBetaBtnClick:(id)arg1;
- (void)onCheckInvitationDetailBtn:(id)arg1;
- (void)showBetaBtnsIfNeeded;
- (void)showInvitationBadgeIfNeeded;
- (void)layoutBeta;
- (void)initBeta;
- (void)spaceChangedHandler;
- (void)feedbackClicked;
- (void)newTextSizeSetting:(id)arg1;
- (void)clearSpaceDetail:(id)arg1;
@property(readonly, nonatomic) NSImage *toolbarItemImage;
@property(readonly, nonatomic) NSString *toolbarItemLabel;
@property(readonly, nonatomic) NSString *identifier;
- (void)viewWillAppear;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasResizableHeight;
@property(readonly, nonatomic) BOOL hasResizableWidth;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

