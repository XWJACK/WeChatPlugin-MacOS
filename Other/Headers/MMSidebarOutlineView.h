//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@class NSObject;
@protocol MMSidebarOutlineViewDelegate;

@interface MMSidebarOutlineView : NSOutlineView
{
    NSObject<MMSidebarOutlineViewDelegate> *_mmSidebarViewDelegate;
}

@property(nonatomic) __weak NSObject<MMSidebarOutlineViewDelegate> *mmSidebarViewDelegate; // @synthesize mmSidebarViewDelegate=_mmSidebarViewDelegate;
- (void).cxx_destruct;
- (void)selectItemAtIndexPath:(id)arg1 withRootItem:(id)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (id)makeViewWithIdentifier:(id)arg1 owner:(id)arg2;

@end

