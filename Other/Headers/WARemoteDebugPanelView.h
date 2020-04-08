//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MMUILabel, NSButton, NSImageView, NSMutableArray;

@interface WARemoteDebugPanelView : NSView
{
    struct CGPoint _priorPoint;
    NSImageView *_connectImageView;
    MMUILabel *_connectLabel;
    NSImageView *_serverImageView;
    MMUILabel *_serverLabel;
    MMUILabel *_noConfirmedLabel;
    MMUILabel *_noSendLabel;
    MMUILabel *_sendoutLabel;
    MMUILabel *_recvinLabel;
    NSView *_splitLine;
    NSButton *_stopButton;
    NSButton *_shrinkButton;
    NSButton *_expandButton;
    MMUILabel *_showLogLabel;
    NSView *_containerView;
    NSMutableArray *_labelList;
    NSButton *_alwaysOnTopButton;
}

@property(retain, nonatomic) NSButton *alwaysOnTopButton; // @synthesize alwaysOnTopButton=_alwaysOnTopButton;
@property(retain, nonatomic) NSButton *stopButton; // @synthesize stopButton=_stopButton;
- (void).cxx_destruct;
- (void)onShrinkButtonChanged:(id)arg1;
- (void)onExpandButtonChanged:(id)arg1;
- (void)refreshPanelHeight;
- (void)mouseDragged:(id)arg1;
- (void)updateConnectState:(id)arg1;
- (void)setupSubviews;
- (BOOL)isFlipped;

@end

