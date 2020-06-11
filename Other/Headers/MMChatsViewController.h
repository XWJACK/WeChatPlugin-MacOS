//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseChatsViewController.h"

#import "IGroupMgrExt-Protocol.h"
#import "IMMSessionMgrExt-Protocol.h"
#import "IMessageExt-Protocol.h"
#import "MMChatsTableCellViewDelegate-Protocol.h"
#import "MMChatsViewControllerDelegate-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "NSSearchFieldDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "OpenIMResourceMgrExt-Protocol.h"

@class MMBrandChatsViewController, MMChatDetailSplitViewController, MMChatMessageViewController, MMComposeInputViewController, MMView, NSButton, NSDate, NSProgressIndicator, NSString;

@interface MMChatsViewController : MMBaseChatsViewController <NSTableViewDataSource, NSTableViewDelegate, MMTableViewDelegate, IMMSessionMgrExt, IMessageExt, MMChatsTableCellViewDelegate, NSTextFieldDelegate, IGroupMgrExt, NSSearchFieldDelegate, OpenIMResourceMgrExt, MMChatsViewControllerDelegate>
{
    BOOL _pauseReloadTableView;
    long long _lastSelectedRow;
    NSString *_selectedUserName;
    MMChatDetailSplitViewController *_chatDetailSplitViewController;
    MMBrandChatsViewController *_brandChatsViewController;
    NSProgressIndicator *_loadingView;
    NSButton *_startNewChatButton;
    MMView *_containerView;
    unsigned long long _unreadChatIndex;
    double _originalWindowWidth;
    double _autoResizedWidth;
    NSDate *_lastReloadDataTime;
}

@property(retain, nonatomic) NSDate *lastReloadDataTime; // @synthesize lastReloadDataTime=_lastReloadDataTime;
@property(nonatomic) BOOL pauseReloadTableView; // @synthesize pauseReloadTableView=_pauseReloadTableView;
@property(nonatomic) double autoResizedWidth; // @synthesize autoResizedWidth=_autoResizedWidth;
@property(nonatomic) double originalWindowWidth; // @synthesize originalWindowWidth=_originalWindowWidth;
@property(nonatomic) unsigned long long unreadChatIndex; // @synthesize unreadChatIndex=_unreadChatIndex;
@property(nonatomic) __weak MMView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSButton *startNewChatButton; // @synthesize startNewChatButton=_startNewChatButton;
@property(nonatomic) __weak NSProgressIndicator *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMBrandChatsViewController *brandChatsViewController; // @synthesize brandChatsViewController=_brandChatsViewController;
@property(retain, nonatomic) MMChatDetailSplitViewController *chatDetailSplitViewController; // @synthesize chatDetailSplitViewController=_chatDetailSplitViewController;
@property(retain, nonatomic) NSString *selectedUserName; // @synthesize selectedUserName=_selectedUserName;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
- (void).cxx_destruct;
- (void)didChangeChatDetailVC:(unsigned long long)arg1 withContact:(id)arg2;
- (void)endDragging:(id)arg1;
- (void)beginDragging:(id)arg1;
- (void)hideChatMemberListWithAnimate:(unsigned char)arg1;
- (void)scrollToFirstUnreadChatAndSelect:(BOOL)arg1;
- (void)goToNextUnreadChat;
- (void)scrollToNextUnreadChat;
- (void)scrollToFirstUnreadChat;
- (void)windowDidBecomeKeyAction;
- (void)resumeFirstResponderIfNeeded:(BOOL)arg1;
- (BOOL)reloadIfNeedUpdateTimeLabel;
- (void)handleAppFontSize;
- (void)newChat:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)cellViewDidPerformRenameAction:(id)arg1;
- (void)cellView:(id)arg1 showProfileWithUserName:(id)arg2;
- (void)cellView:(id)arg1 deleteWithUserName:(id)arg2;
- (void)cellView:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)validateDragOperation:(id)arg1 forCell:(id)arg2;
- (void)onSessionDeletedWithUserName:(id)arg1 atIndex:(long long)arg2;
- (void)_updateTabbarBadge;
- (void)onSessionTotalUnreadCountChanged:(unsigned int)arg1;
- (void)onSessionReordered;
- (void)onSessionUpdated:(id)arg1;
- (void)onSessionChanged:(id)arg1;
- (void)onSessionSyncedWithSource:(int)arg1 count:(unsigned long long)arg2;
- (void)OpenIMResourceWordingIds:(id)arg1 didFinish:(id)arg2;
- (void)openOfficialAccountWithContact:(id)arg1;
- (void)openOfficialAccountList;
- (void)reloadTableView;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (void)setupDetailView:(long long)arg1 withSelectedRowIndex:(long long)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)startANewGroupChatWithUserNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startANewChatWithContact:(id)arg1;
- (void)startNewChatButtonPress:(id)arg1;
- (void)selectChatWithUserName:(id)arg1;
- (void)selectLastChatIfPossible;
- (void)showChats;
- (void)setDetailViewController:(id)arg1;
@property(readonly, nonatomic) __weak MMComposeInputViewController *composeInputViewController;
@property(readonly, nonatomic) __weak MMChatMessageViewController *chatMessageViewController;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

