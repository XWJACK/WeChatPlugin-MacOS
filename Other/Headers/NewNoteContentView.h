//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSImageView, NSTextField;

@interface NewNoteContentView : NSView
{
    NSTextField *_titleTextField;
    NSImageView *_iconImageView;
    double _titleFittingWith;
    BOOL _enabled;
    BOOL _highlighted;
    double _cornerRaidus;
    NSColor *_highlightedBackgroundColor;
    NSColor *_backgrounColor;
    double _borderWidth;
    id _target;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) NSColor *backgrounColor; // @synthesize backgrounColor=_backgrounColor;
@property(retain, nonatomic) NSColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(nonatomic) double cornerRaidus; // @synthesize cornerRaidus=_cornerRaidus;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

