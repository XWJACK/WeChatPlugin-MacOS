//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPreviewWindowController.h"

@class MMQLPreviewItem;

@interface MMPreviewAvatarImageWindowController : MMPreviewWindowController
{
    MMQLPreviewItem *m_currentPreviewAvatarItem;
}

- (void).cxx_destruct;
- (void)previewAvatar;
- (id)_genPreviewItemWithContact:(id)arg1;
- (void)setupPageController;
- (id)getCurrentPreviewItem;
- (void)showPreviewItem:(id)arg1 targetFrame:(struct CGRect)arg2;
- (void)show;
- (void)dealloc;
- (id)initWithContact:(id)arg1;

@end

