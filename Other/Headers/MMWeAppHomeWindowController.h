//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowController.h"

#import "JWCTableViewDataSource-Protocol.h"
#import "JWCTableViewDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class JWCTableView, MMView, NSArray, NSButton, NSString, RFOverlayScrollView;

@interface MMWeAppHomeWindowController : MMWindowController <JWCTableViewDelegate, JWCTableViewDataSource, NSWindowDelegate>
{
    NSArray *_currentWeAppList;
    NSArray *_remainWeAppList;
    JWCTableView *_tableView;
    RFOverlayScrollView *_scrollView;
    MMView *_backgroudView;
    NSButton *_allowMultiProcess;
}

@property(nonatomic) __weak NSButton *allowMultiProcess; // @synthesize allowMultiProcess=_allowMultiProcess;
@property(retain, nonatomic) MMView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(nonatomic) __weak RFOverlayScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak JWCTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *remainWeAppList; // @synthesize remainWeAppList=_remainWeAppList;
@property(retain, nonatomic) NSArray *currentWeAppList; // @synthesize currentWeAppList=_currentWeAppList;
- (void).cxx_destruct;
- (void)handleButtonWasPressed:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 withMouseEvent:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderViewForSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 hasHeaderViewForSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAllowMultiProcessValueChange:(id)arg1;
- (void)reloadData;
- (void)showWindow:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

