//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@protocol MMImageEditFontSizeViewDelegate;

@interface MMImageEditFontSizeView : NSView
{
    id <MMImageEditFontSizeViewDelegate> _delegate;
    unsigned long long _fontSize;
    unsigned long long _defaultFontSize;
    struct CGSize _viewSize;
}

@property(readonly, nonatomic) unsigned long long defaultFontSize; // @synthesize defaultFontSize=_defaultFontSize;
@property(nonatomic) unsigned long long fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) __weak id <MMImageEditFontSizeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configAppearanceAndLayout;
- (void)hideMenu;

@end

