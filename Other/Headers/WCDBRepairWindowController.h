//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "NSWindowDelegate-Protocol.h"
#import "WCDBRepairExt-Protocol.h"

@class MMButton, NSArray, NSImageView, NSString, NSTextView;

@interface WCDBRepairWindowController : MMWindowController <WCDBRepairExt, NSWindowDelegate>
{
    NSImageView *_wrenchIcon;
    MMButton *_startRepairBtn;
    MMButton *_repairedBtn;
    MMButton *_okBtn;
    NSTextView *_descTextView;
    NSArray *_repairDBList;
}

@property(retain, nonatomic) NSArray *repairDBList; // @synthesize repairDBList=_repairDBList;
@property(retain, nonatomic) NSTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) MMButton *okBtn; // @synthesize okBtn=_okBtn;
@property(retain, nonatomic) MMButton *repairedBtn; // @synthesize repairedBtn=_repairedBtn;
@property(retain, nonatomic) MMButton *startRepairBtn; // @synthesize startRepairBtn=_startRepairBtn;
@property(retain, nonatomic) NSImageView *wrenchIcon; // @synthesize wrenchIcon=_wrenchIcon;
- (void).cxx_destruct;
- (void)onRepairFinish;
- (void)onClearDBCompleted;
- (void)onRepairFailed;
- (void)onRepairNoNeed;
- (void)onRepairing;
- (void)onOkBtnClicked:(id)arg1;
- (void)onRepairedBtnClicked:(id)arg1;
- (void)onStartRepairBtnClicked:(id)arg1;
- (void)layoutSubviews;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initWithWindowNibName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

