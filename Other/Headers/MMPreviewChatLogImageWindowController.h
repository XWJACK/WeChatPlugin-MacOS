//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPreviewWindowController.h"

#import "IMessageExt-Protocol.h"
#import "MMFavoritesMgrExt-Protocol.h"

@class MMQLPreviewItem, NSString;

@interface MMPreviewChatLogImageWindowController : MMPreviewWindowController <MMFavoritesMgrExt, IMessageExt>
{
    MMQLPreviewItem *m_currentPreviewingItem;
}

- (void).cxx_destruct;
- (void)favoritesMgrDidRemoveItem:(id)arg1;
- (void)onDelMsg:(id)arg1 msgData:(id)arg2;
- (void)pageController:(id)arg1 didTransitionToObject:(id)arg2;
- (void)pageController:(id)arg1 prepareViewController:(id)arg2 withObject:(id)arg3;
- (void)openWith;
- (id)getCurrentPreviewItem;
- (id)getInitialPreviewItem;
- (void)setupPageController;
- (void)showPreviewItem:(id)arg1 targetFrame:(struct CGRect)arg2;
- (void)show;
- (void)_preloadVideoOfPreviewItem:(id)arg1 parentDataField:(id)arg2 parentMessage:(id)arg3 parentFavItem:(id)arg4;
- (unsigned long long)_indexOfPreviewItemWithDataField:(id)arg1;
- (id)_handleInvalidImagePath:(id)arg1;
- (id)_genPreviewItemWithDataField:(id)arg1 parentFavItem:(id)arg2;
- (id)_genPreviewItemWithDataField:(id)arg1 parentMessage:(id)arg2;
- (id)_genPreviewItemWithDataField:(id)arg1 parentDataField:(id)arg2;
- (void)_initPreviewListWithCurrentDataField:(id)arg1 parentDataField:(id)arg2;
- (void)_initPreviewListWithCurrentDataField:(id)arg1 parentMessage:(id)arg2 orParentFavItem:(id)arg3;
- (void)dealloc;
- (id)initWithCurrentDataField:(id)arg1 parentDataField:(id)arg2;
- (id)initWithCurrentDataField:(id)arg1 parentMessage:(id)arg2 orParentFavItem:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

