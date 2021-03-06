//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MMSessionListViewDelegate-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MMOutlineButton, MMTableView, NSArray, NSString, NSTextField;
@protocol MMSessionChoosenViewDelegate;

@interface MMSessionChoosenView : NSViewController <NSTableViewDataSource, NSTableViewDelegate, MMTableViewDelegate, MMSessionListViewDelegate>
{
    id <MMSessionChoosenViewDelegate> _delegate;
    NSArray *_preSelectedUserNames;
    NSString *_confirmButtonText;
    NSString *_cancelButtonText;
    NSTextField *_headingTitleField;
    NSTextField *_titleTextField;
    MMTableView *_tableView;
    MMOutlineButton *_confirmButton;
    MMOutlineButton *_cancelButton;
    NSArray *_selectedUsers;
    NSArray *_selectedUserNames;
    unsigned long long _sessionPickerType;
    CDUnknownBlockType _confirmCompletionHandler;
    CDUnknownBlockType _didClickConfirmButtonBlock;
    CDUnknownBlockType _didClickCancelButtonBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didClickCancelButtonBlock; // @synthesize didClickCancelButtonBlock=_didClickCancelButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickConfirmButtonBlock; // @synthesize didClickConfirmButtonBlock=_didClickConfirmButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType confirmCompletionHandler; // @synthesize confirmCompletionHandler=_confirmCompletionHandler;
@property(nonatomic) unsigned long long sessionPickerType; // @synthesize sessionPickerType=_sessionPickerType;
@property(retain, nonatomic) NSArray *selectedUserNames; // @synthesize selectedUserNames=_selectedUserNames;
@property(retain, nonatomic) NSArray *selectedUsers; // @synthesize selectedUsers=_selectedUsers;
@property(retain, nonatomic) MMOutlineButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMOutlineButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) NSTextField *headingTitleField; // @synthesize headingTitleField=_headingTitleField;
@property(retain, nonatomic) NSString *cancelButtonText; // @synthesize cancelButtonText=_cancelButtonText;
@property(retain, nonatomic) NSString *confirmButtonText; // @synthesize confirmButtonText=_confirmButtonText;
@property(retain, nonatomic) NSArray *preSelectedUserNames; // @synthesize preSelectedUserNames=_preSelectedUserNames;
@property(nonatomic) __weak id <MMSessionChoosenViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)closeChoosenViewWithConfirm:(BOOL)arg1;
- (void)updateSessionChoosenViewWidthType:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (void)updateSessionChoosenView:(id)arg1;
- (void)updateSessionChoosenText:(unsigned long long)arg1;
- (void)setupPickerType:(unsigned long long)arg1;
- (void)setEnabledTextWithType:(unsigned long long)arg1 sessionCount:(long long)arg2;
- (void)setDisabledTextWithType:(unsigned long long)arg1 count:(long long)arg2;
- (void)setupBottomButtons;
- (void)setupTitleTextField;
- (void)setupHeadingtitleField;
- (void)setupTableView;
- (void)clearSelectedForNewAndForwardType;
- (void)clearAllSelectedUsers;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

