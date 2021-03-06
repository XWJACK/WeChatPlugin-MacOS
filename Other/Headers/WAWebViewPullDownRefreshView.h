//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSProgressIndicator;

@interface WAWebViewPullDownRefreshView : NSView
{
    int _mode;
    NSProgressIndicator *_progressIndicator;
}

@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)stopAnimation:(id)arg1;
- (void)startAnimation:(id)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 mode:(int)arg2;

@end

