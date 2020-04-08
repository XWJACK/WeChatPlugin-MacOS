//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseChatsViewController.h"

#import "BrandSessionMgrExt-Protocol.h"
#import "MMChatsTableCellViewDelegate-Protocol.h"
#import "MMTableViewDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MMDragEventView, NSString, NSTextField, RFOverlayScrollView, WCContactData;
@protocol MMChatsViewControllerDelegate;

@interface MMBrandChatsViewController : MMBaseChatsViewController <NSTableViewDataSource, NSTableViewDelegate, BrandSessionMgrExt, MMChatsTableCellViewDelegate, MMTableViewDelegate>
{
    BOOL _showHighlightSelection;
    id <MMChatsViewControllerDelegate> _delegate;
    long long _lastSelectedRow;
    NSString *_lastSelectedUserName;
    MMDragEventView *_topView;
    NSTextField *_titleLabel;
    WCContactData *_currContact;
    RFOverlayScrollView *_tableScrollView;
}

@property __weak RFOverlayScrollView *tableScrollView; // @synthesize tableScrollView=_tableScrollView;
@property(retain, nonatomic) WCContactData *currContact; // @synthesize currContact=_currContact;
@property(retain, nonatomic) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MMDragEventView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) NSString *lastSelectedUserName; // @synthesize lastSelectedUserName=_lastSelectedUserName;
@property(nonatomic) long long lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(nonatomic) __weak id <MMChatsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL showHighlightSelection; // @synthesize showHighlightSelection=_showHighlightSelection;
- (void).cxx_destruct;
- (void)handleAppFontSize;
- (void)keyDown:(id)arg1;
- (void)showDetailChatPanel:(id)arg1;
- (void)tableView:(id)arg1 rowGotMouseUp:(long long)arg2;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (void)cellView:(id)arg1 deleteWithUserName:(id)arg2;
- (void)onDeleteBrandSession:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)onBrandSessionChanged:(id)arg1;
- (void)onBrandSessionsReoredered;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)isBrandChatsUnselected;
- (void)cleanSelectedRow;
- (void)cleanUnselectedRow;
- (void)selectRow;
- (void)manualSetSelectedBrand:(id)arg1;
- (void)startChatWithContact:(id)arg1;
- (void)cleanHighlightSelection;
- (void)_layoutTitleLabel;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
