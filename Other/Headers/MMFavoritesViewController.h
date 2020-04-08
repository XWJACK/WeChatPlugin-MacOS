//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

#import "MMFavoriteDetailViewContollerDelegate-Protocol.h"
#import "MMFavoritesMgrExt-Protocol.h"
#import "MMSidebarOutlineViewDelegate-Protocol.h"
#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"
#import "NSSearchFieldDelegate-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "WeChatSearchProtocol-Protocol.h"

@class MMFavSidebarHeaderRowView, MMFavoriteDetailViewContoller, MMFavoriteSidebarItem, MMFavoritesCollectionData, MMFavoritesPlaceholderViewController, MMSearchField, MMSidebarOutlineView, NSIndexPath, NSIndexSet, NSString, NSTextField;
@protocol MMFavoritesViewControllerDetailProtocol;

@interface MMFavoritesViewController : MMViewController <NSOutlineViewDataSource, NSOutlineViewDelegate, MMFavoritesMgrExt, MMFavoriteDetailViewContollerDelegate, MMSidebarOutlineViewDelegate, NSTextFieldDelegate, NSSearchFieldDelegate, WeChatSearchProtocol>
{
    MMSidebarOutlineView *_outlineView;
    MMFavoritesCollectionData *_currentDataCollection;
    MMFavoriteSidebarItem *_lastSelectedItem;
    NSIndexSet *_lastProposedSelectionIndexes;
    MMFavoriteSidebarItem *_rootSidebarItem;
    MMFavoriteSidebarItem *_allItemsItem;
    MMFavoriteSidebarItem *_urlItemsItem;
    MMFavoriteSidebarItem *_photoItemsItem;
    MMFavoriteSidebarItem *_fileItemsItem;
    MMFavoriteSidebarItem *_musicItemsItem;
    MMFavoriteSidebarItem *_noteItemsItem;
    MMFavoriteSidebarItem *_tagsItem;
    MMFavoriteSidebarItem *_addNewNoteItem;
    MMFavSidebarHeaderRowView *_tagHeaderView;
    MMSearchField *_searchField;
    NSIndexPath *_selecetedIndexPath;
    NSTextField *_usageLabel;
    MMFavoriteDetailViewContoller *_favoriteDetailViewContoller;
    MMFavoritesPlaceholderViewController *_favoritesPlaceholderViewController;
}

+ (void)load;
@property(retain, nonatomic) MMFavoritesPlaceholderViewController *favoritesPlaceholderViewController; // @synthesize favoritesPlaceholderViewController=_favoritesPlaceholderViewController;
@property(retain, nonatomic) MMFavoriteDetailViewContoller *favoriteDetailViewContoller; // @synthesize favoriteDetailViewContoller=_favoriteDetailViewContoller;
@property(retain, nonatomic) NSTextField *usageLabel; // @synthesize usageLabel=_usageLabel;
@property(retain, nonatomic) NSIndexPath *selecetedIndexPath; // @synthesize selecetedIndexPath=_selecetedIndexPath;
@property(nonatomic) __weak MMSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) MMFavSidebarHeaderRowView *tagHeaderView; // @synthesize tagHeaderView=_tagHeaderView;
@property(retain, nonatomic) MMFavoriteSidebarItem *addNewNoteItem; // @synthesize addNewNoteItem=_addNewNoteItem;
@property(retain, nonatomic) MMFavoriteSidebarItem *tagsItem; // @synthesize tagsItem=_tagsItem;
@property(retain, nonatomic) MMFavoriteSidebarItem *noteItemsItem; // @synthesize noteItemsItem=_noteItemsItem;
@property(retain, nonatomic) MMFavoriteSidebarItem *musicItemsItem; // @synthesize musicItemsItem=_musicItemsItem;
@property(retain, nonatomic) MMFavoriteSidebarItem *fileItemsItem; // @synthesize fileItemsItem=_fileItemsItem;
@property(retain, nonatomic) MMFavoriteSidebarItem *photoItemsItem; // @synthesize photoItemsItem=_photoItemsItem;
@property(retain, nonatomic) MMFavoriteSidebarItem *urlItemsItem; // @synthesize urlItemsItem=_urlItemsItem;
@property(retain, nonatomic) MMFavoriteSidebarItem *allItemsItem; // @synthesize allItemsItem=_allItemsItem;
@property(retain, nonatomic) MMFavoriteSidebarItem *rootSidebarItem; // @synthesize rootSidebarItem=_rootSidebarItem;
@property(retain, nonatomic) NSIndexSet *lastProposedSelectionIndexes; // @synthesize lastProposedSelectionIndexes=_lastProposedSelectionIndexes;
@property(retain, nonatomic) MMFavoriteSidebarItem *lastSelectedItem; // @synthesize lastSelectedItem=_lastSelectedItem;
@property(retain, nonatomic) MMFavoritesCollectionData *currentDataCollection; // @synthesize currentDataCollection=_currentDataCollection;
@property(nonatomic) __weak MMSidebarOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
- (void)fontSizeClassChanged:(id)arg1;
- (void)favSearchWithKeyWord:(id)arg1;
- (void)onAddLocalNoteItem:(id)arg1 ErrCode:(int)arg2;
- (void)favoritesMgrDidUpdatedItemWithLocalID:(unsigned int)arg1;
- (void)favoritesMgrDidUpdatedItemsWithLocalIDArray:(id)arg1;
- (void)favoritesMgrDidRemoveItem:(id)arg1;
- (void)favoritesMgrDidAddItems:(id)arg1;
- (void)favoritesMgrDidUpdateTags:(id)arg1 forItemLocalID:(unsigned int)arg2;
- (void)favoritesMgrDidUpdateTotalTagsCount:(unsigned int)arg1;
- (void)favoritesMgrDidUpdateTotalItemsCount:(unsigned long long)arg1;
- (void)favoritesMgrDidUpdateFavSetting;
- (void)updateCurrentCollectionData:(id)arg1;
- (id)currentSearchingUserName;
- (id)currentSearchingTag;
- (id)currentSearchingTypes;
- (int)currentSiderbarItemType;
- (void)item:(id)arg1 didRecieveDragOperation:(id)arg2 inOutlineView:(id)arg3;
- (BOOL)item:(id)arg1 canRecieveDragOperation:(id)arg2 inOutlineView:(id)arg3;
- (id)acceptableDragTypesForOutlineView:(id)arg1;
- (id)menuForItem:(id)arg1 inOutlineView:(id)arg2;
- (id)favDetailViewController;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)currentSelectedItem;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (void)_saveExpanded:(BOOL)arg1 forItem:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)viewDidLayout;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)setupAddNewNoteItem;
- (id)setupTagsItem;
- (id)setupFileItemsItem;
- (id)setupNoteItemsItem;
- (id)setupMusicItemsItem;
- (id)setupPhotoItemsItem;
- (id)setupUrlItemsItem;
- (id)setupAllItemsItem;
- (void)reloadSidebarData;
- (id)title;
- (void)setTabbarItem:(id)arg1;
- (void)updateUsageLable;
- (void)outlineViewClicked:(id)arg1;
- (void)startAddNewNoteToFav:(id)arg1;
- (void)clearSearch;
- (BOOL)showAllFavoritesWithItem:(id)arg1;
- (void)scrollDetailViewToLatest;
- (void)performSearchAction;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) MMViewController<MMFavoritesViewControllerDetailProtocol> *detailViewController; // @dynamic detailViewController;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

