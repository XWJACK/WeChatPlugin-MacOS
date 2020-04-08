//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

#import "AccountServiceExt-Protocol.h"
#import "MMComposeTextViewDelegate-Protocol.h"
#import "MMViewerWindowDelegate-Protocol.h"
#import "NSSearchFieldDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "WeChatSearchProtocol-Protocol.h"

@class FavoritesItem, MMSearchField, MMSearchViewController, MMTableView, NSString;

@interface MMBaseChatsViewController : MMViewController <NSTextFieldDelegate, AccountServiceExt, NSSearchFieldDelegate, MMViewerWindowDelegate, WeChatSearchProtocol, MMComposeTextViewDelegate>
{
    MMSearchField *_searchField;
    MMTableView *_tableView;
    NSString *_selectedUserName;
    long long _lastSelectedRow;
    MMSearchViewController *_searchViewController;
    FavoritesItem *_previewingFavItem;
}

@property(retain, nonatomic) FavoritesItem *previewingFavItem; // @synthesize previewingFavItem=_previewingFavItem;
@property(retain, nonatomic) MMSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(retain, nonatomic) NSString *selectedUserName; // @synthesize selectedUserName=_selectedUserName;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak MMSearchField *searchField; // @synthesize searchField=_searchField;
- (void).cxx_destruct;
- (void)handleLockStateChanges:(BOOL)arg1;
- (void)onCurrentNetworkLockStateWillChange:(BOOL)arg1;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)selectNextItem;
- (void)selectPreviousItem;
- (void)didPressEscapeKey;
- (void)makeChatListFirstResponder;
- (void)selectPreviousChat;
- (void)selectNextChat;
- (void)windowDidResignKeyAction:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)_clearSearch;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)showGlobalSearchWindowController:(id)arg1 withSession:(id)arg2;
- (void)performSearchAction;
- (void)setTabbarItem:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
