//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

#import "AccountServiceExt-Protocol.h"

@class MMOutlineButton, MMTextField, NSString, NSVisualEffectView, NSWindow, RBLPopover, RBLPopoverBackgroundView, WCContactData;

@interface MMGroupChatInspector : MMViewController <AccountServiceExt>
{
    RBLPopover *_rblPopover;
    RBLPopoverBackgroundView *_backgroundView;
    int _inspectorType;
    NSWindow *_parentWindow;
    MMTextField *_actionNameTextField;
    MMTextField *_inputContentTextField;
    NSVisualEffectView *_visualEffectView;
    MMOutlineButton *_confirmButton;
    MMOutlineButton *_cancelButton;
    WCContactData *_groupContact;
}

+ (id)sharedInspector;
@property(nonatomic) int inspectorType; // @synthesize inspectorType=_inspectorType;
@property(retain, nonatomic) WCContactData *groupContact; // @synthesize groupContact=_groupContact;
@property(retain, nonatomic) MMOutlineButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMOutlineButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) NSVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property __weak MMTextField *inputContentTextField; // @synthesize inputContentTextField=_inputContentTextField;
@property __weak MMTextField *actionNameTextField; // @synthesize actionNameTextField=_actionNameTextField;
@property(nonatomic) __weak NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
- (void).cxx_destruct;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 inGroupChat:(id)arg3 preferredEdge:(unsigned long long)arg4 inspectorType:(int)arg5;
- (void)toggleInView:(id)arg1 inGroupChat:(id)arg2 preferredEdge:(unsigned long long)arg3 edgeInsets:(struct NSEdgeInsets)arg4 inspectorType:(int)arg5;
- (void)keyUp:(id)arg1;
- (BOOL)isShown;
- (void)hide;
- (void)onCancelButtonClicked:(id)arg1;
- (void)onConfirmButtonClicked:(id)arg1;
- (void)setUpControls;
- (void)onUserLogout;
- (void)destroy;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
