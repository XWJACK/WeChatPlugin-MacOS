//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSProgressIndicator;

@interface MMFileListLastTableCellView : NSTableCellView
{
    NSProgressIndicator *_refreshSpinner;
}

@property(retain, nonatomic) NSProgressIndicator *refreshSpinner; // @synthesize refreshSpinner=_refreshSpinner;
- (void).cxx_destruct;
- (void)stopSpinner;
- (void)startSpinner;
- (void)initViews;
- (void)prepareForReuse;
- (BOOL)wantsDefaultClipping;
- (id)initWithFrame:(struct CGRect)arg1;

@end

