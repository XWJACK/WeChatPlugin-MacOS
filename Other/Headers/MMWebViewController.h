//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseWebViewController.h"

#import "AccountServiceExt-Protocol.h"
#import "IContactMgrExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMWebViewFontAdjustControllerDelegate-Protocol.h"

@class MMCustomDisableButton, MMTimer, MMWebViewFontAdjustController, NSPopover, NSString;

@interface MMWebViewController : BaseWebViewController <IContactMgrExt, IMessageExt, AccountServiceExt, MMWebViewFontAdjustControllerDelegate>
{
    NSString *_chatUserName;
    MMCustomDisableButton *_prevItemBtn;
    MMCustomDisableButton *_nextItemBtn;
    MMCustomDisableButton *_refreshBtn;
    MMCustomDisableButton *_forwardBtn;
    MMCustomDisableButton *_favoriteBtn;
    MMCustomDisableButton *_doCopyUrlBtn;
    MMCustomDisableButton *_externalBrowserBtn;
    MMCustomDisableButton *_fontAdjustBtn;
    NSPopover *_fontAdjustPopover;
    MMWebViewFontAdjustController *_fontAdjustViewController;
    MMTimer *_fontAdjustTimer;
}

@property(retain, nonatomic) MMTimer *fontAdjustTimer; // @synthesize fontAdjustTimer=_fontAdjustTimer;
@property(retain, nonatomic) MMWebViewFontAdjustController *fontAdjustViewController; // @synthesize fontAdjustViewController=_fontAdjustViewController;
@property(retain, nonatomic) NSPopover *fontAdjustPopover; // @synthesize fontAdjustPopover=_fontAdjustPopover;
@property(retain, nonatomic) MMCustomDisableButton *fontAdjustBtn; // @synthesize fontAdjustBtn=_fontAdjustBtn;
@property(retain, nonatomic) MMCustomDisableButton *externalBrowserBtn; // @synthesize externalBrowserBtn=_externalBrowserBtn;
@property(retain, nonatomic) MMCustomDisableButton *doCopyUrlBtn; // @synthesize doCopyUrlBtn=_doCopyUrlBtn;
@property(retain, nonatomic) MMCustomDisableButton *favoriteBtn; // @synthesize favoriteBtn=_favoriteBtn;
@property(retain, nonatomic) MMCustomDisableButton *forwardBtn; // @synthesize forwardBtn=_forwardBtn;
@property(retain, nonatomic) MMCustomDisableButton *refreshBtn; // @synthesize refreshBtn=_refreshBtn;
@property(retain, nonatomic) MMCustomDisableButton *nextItemBtn; // @synthesize nextItemBtn=_nextItemBtn;
@property(retain, nonatomic) MMCustomDisableButton *prevItemBtn; // @synthesize prevItemBtn=_prevItemBtn;
@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
- (void).cxx_destruct;
- (void)handleCloseWindowJSEvent;
- (void)onCopyAction:(id)arg1;
- (void)onDomReadyAction;
- (void)onPageStateChangeAction:(id)arg1;
- (void)hideFontAdjust;
- (void)resetFontAdjustTimer;
- (void)doNavigationFontSize;
- (void)doAdjustFontSize:(id)arg1;
- (void)adjustFontSize:(int)arg1;
- (void)showFontAdjust;
- (void)forwardContent;
- (void)addToFavorites;
- (void)copyUrl;
- (void)openInExternalBrowser;
- (void)refreshContent;
- (void)nextItem;
- (void)previousItem;
- (void)onUserLogout;
- (void)onCurrentNetworkLockStateWillChange:(BOOL)arg1;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)onModifyContacts:(id)arg1;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2 isRevoke:(BOOL)arg3;
- (void)_setupContentContainer;
- (void)_setupHostLabel;
- (void)_setupProgressView;
- (void)_setupToolbarContainer;
- (void)handleWeixinJumpScheme:(id)arg1;
- (void)updateMenuItems;
- (void)updateNavigation;
- (void)setupUIControls;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

