//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "AccountServiceExt-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"
#import "MMHandoffDownloadMgrExt-Protocol.h"
#import "MMHandoffServiceExt-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class CAShapeLayer, FavoritesItemDataField, MMCTTextView, MMHandoffItem, MMOutlineButton, MMTimer, MessageData, NSButton, NSString, NSTextField, NSView, SVGImageView, TKStateMachine;

@interface MMHandoffShowController : NSWindowController <NSWindowDelegate, MMHandoffServiceExt, MMHandoffDownloadMgrExt, CAAnimationDelegate, AccountServiceExt>
{
    BOOL _isCancel;
    BOOL _isPhoneFinishUpload;
    int _opType;
    int _opFrom;
    MMHandoffItem *_item;
    MessageData *_msgData;
    FavoritesItemDataField *_favItem;
    SVGImageView *_iconImageView;
    MMCTTextView *_textTextField;
    NSTextField *_sizeTextField;
    NSTextField *_tipTextField;
    MMOutlineButton *_actionButton;
    NSView *_container;
    TKStateMachine *_stateMachine;
    CAShapeLayer *_progressLayer;
    NSView *_progressView;
    NSView *_toolBarContainer;
    NSButton *_mmCloseBtn;
    NSTextField *_titleTextField;
    NSButton *_stopButton;
    MMTimer *_timer;
}

@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) BOOL isPhoneFinishUpload; // @synthesize isPhoneFinishUpload=_isPhoneFinishUpload;
@property(nonatomic) BOOL isCancel; // @synthesize isCancel=_isCancel;
@property(retain, nonatomic) NSButton *stopButton; // @synthesize stopButton=_stopButton;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) NSButton *mmCloseBtn; // @synthesize mmCloseBtn=_mmCloseBtn;
@property(retain, nonatomic) NSView *toolBarContainer; // @synthesize toolBarContainer=_toolBarContainer;
@property(retain, nonatomic) NSView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) TKStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSView *container; // @synthesize container=_container;
@property(retain, nonatomic) MMOutlineButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSTextField *tipTextField; // @synthesize tipTextField=_tipTextField;
@property(retain, nonatomic) NSTextField *sizeTextField; // @synthesize sizeTextField=_sizeTextField;
@property(retain, nonatomic) MMCTTextView *textTextField; // @synthesize textTextField=_textTextField;
@property(retain, nonatomic) SVGImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) int opFrom; // @synthesize opFrom=_opFrom;
@property(retain, nonatomic) FavoritesItemDataField *favItem; // @synthesize favItem=_favItem;
@property(retain, nonatomic) MessageData *msgData; // @synthesize msgData=_msgData;
@property(retain, nonatomic) MMHandoffItem *item; // @synthesize item=_item;
@property(nonatomic) int opType; // @synthesize opType=_opType;
- (void).cxx_destruct;
- (void)onUserLogout;
- (void)didExpriedDownloadHandoffItem:(id)arg1;
- (void)onDownloadHandoffItem:(id)arg1 withProgress:(double)arg2;
- (void)didFailedDownloadHandoffItem:(id)arg1;
- (void)didFinishDownloadHandoffItem:(id)arg1;
- (void)didHandoffItemDeleteFromPhone:(id)arg1;
- (void)didHandoffItemUploadingFromPhone:(id)arg1;
- (void)didHandoffItemFailedUploadFromPhone:(id)arg1;
- (void)didHandoffItemFinishUploadFromPhone:(id)arg1;
- (void)onPhoneUploadTimeOut;
- (void)stopTimer;
- (void)startTimer;
- (void)onSendNotifyToPhoneEvent;
- (void)onStopButtonClick:(id)arg1;
- (void)onContunieHandoffButtonClick;
- (void)onRetryButtonClick;
- (void)openFileByHandoffItem;
- (void)openFileByWeChatMsg;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)fakeLoading;
- (void)updateProgressByValue:(double)arg1;
- (void)closeWithButtton:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)dealloc;
- (void)fireStateEvent:(id)arg1;
- (void)startMachine;
- (void)setupMachine;
- (void)setupSubViews;
- (void)setupMainViews;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

