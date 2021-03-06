//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MMDragEventView, NSButton, NSImageView, NSPopover, NSString, WADoubleClickTitleField, WAProgressIndicator, WAWebViewController;
@protocol WAWebViewMutiFuncMenuViewDelegate;

@interface WAWebViewMutiFuncMenuView : NSView
{
    NSString *_normalLastNavTitle;
    WADoubleClickTitleField *_normalTitleView;
    BOOL _isActivityIndicatorAnimating;
    WAProgressIndicator *_activityIndicatorView;
    NSButton *_leftButton;
    unsigned long long _leftBtnType;
    NSView *_menuView;
    MMDragEventView *_dragBarView;
    NSButton *_menuMoreButton;
    NSButton *_menuExitButton;
    BOOL _isMenuHidden;
    NSButton *_menuStateButton;
    NSImageView *_menuIconView;
    BOOL _isTrigerMoreLongPress;
    NSPopover *_morePopover;
    BOOL _canShowShare;
    int _navMode;
    id <WAWebViewMutiFuncMenuViewDelegate> _delegate;
    WAWebViewController *_webview;
    long long _contentMode;
    long long _menuState;
    CDUnknownBlockType _refreshBlock;
}

@property(copy, nonatomic) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
@property(nonatomic) long long menuState; // @synthesize menuState=_menuState;
@property(nonatomic) BOOL canShowShare; // @synthesize canShowShare=_canShowShare;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) int navMode; // @synthesize navMode=_navMode;
@property(nonatomic) __weak WAWebViewController *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak id <WAWebViewMutiFuncMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isSupportVisualEffect;
- (id)stateButton;
- (id)menuView;
- (void)onGoToHome:(id)arg1;
- (void)onLongPressExit:(id)arg1;
- (void)onReturn:(id)arg1;
- (void)onClickExit:(id)arg1;
- (void)onMore:(id)arg1;
- (id)copyMenuView;
- (id)getIconNameForCurrentNavMode:(id)arg1 HighLight:(BOOL)arg2;
- (id)getIconNameForCurrentNavMode:(id)arg1;
- (id)stateBackgroundIconName;
- (id)voiceRecordStateIconName;
- (id)POIStateIconName;
- (id)videoRecordStateIconName;
- (id)exitButtonHighLightIconName;
- (id)exitButtonIconName;
- (id)moreButtonIconName;
- (void)doFadeAnimation:(id)arg1;
- (void)changeMenuStateWithIcon:(id)arg1 AccessbilityLabel:(id)arg2;
- (void)changeMenuStateToRecordingVideo;
- (void)changeMenuStateToRecordingVoice;
- (void)changeMenuStateToLocation;
- (void)changeMenuStateToNormal;
- (void)onWebViewDidAppear;
- (void)fsmenu_updateContent;
- (void)fsnormal_layoutContent;
- (void)fsnormal_updateContent;
- (struct CGRect)getCapsuleViewFrameRelativeToView:(id)arg1;
- (void)setMenuTitleViewLoading:(BOOL)arg1;
- (void)setReturnButtonHidden:(BOOL)arg1;
- (void)setMenuViewCapsuleHidden:(BOOL)arg1;
- (void)setMenuNavTitle:(id)arg1;
- (void)setMenuNavBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)updateMenuViewWithWebContentMode:(long long)arg1 navMode:(int)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

