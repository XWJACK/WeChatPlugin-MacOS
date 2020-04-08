//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MMUILabel, NSButton;

@interface WARemoteDebugMaskView : NSView
{
    BOOL _isShowing;
    NSButton *_stopButton;
    MMUILabel *_textField;
}

@property(retain, nonatomic) MMUILabel *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSButton *stopButton; // @synthesize stopButton=_stopButton;
@property(nonatomic) BOOL isShowing; // @synthesize isShowing=_isShowing;
- (void).cxx_destruct;
- (void)scrollWheel:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)dismiss;
- (void)showWithString:(id)arg1;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
