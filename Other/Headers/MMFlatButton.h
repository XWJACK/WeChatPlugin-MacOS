//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

#import "CALayerDelegate-Protocol.h"

@class CAShapeLayer, CATextLayer, NSColor, NSString;

@interface MMFlatButton : NSButton <CALayerDelegate>
{
    BOOL _momentary;
    BOOL _mouseDown;
    double _onAnimateDuration;
    double _offAnimateDuration;
    double _cornerRadius;
    double _borderWidth;
    double _spacing;
    NSColor *_borderNormalColor;
    NSColor *_borderHighlightColor;
    NSColor *_backgroundNormalColor;
    NSColor *_backgroundHighlightColor;
    NSColor *_imageNormalColor;
    NSColor *_imageHighlightColor;
    NSColor *_titleNormalColor;
    NSColor *_titleHighlightColor;
    CAShapeLayer *_imageLayer;
    CATextLayer *_titleLayer;
}

@property(nonatomic) BOOL mouseDown; // @synthesize mouseDown=_mouseDown;
@property(retain, nonatomic) CATextLayer *titleLayer; // @synthesize titleLayer=_titleLayer;
@property(retain, nonatomic) CAShapeLayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) NSColor *titleHighlightColor; // @synthesize titleHighlightColor=_titleHighlightColor;
@property(retain, nonatomic) NSColor *titleNormalColor; // @synthesize titleNormalColor=_titleNormalColor;
@property(retain, nonatomic) NSColor *imageHighlightColor; // @synthesize imageHighlightColor=_imageHighlightColor;
@property(retain, nonatomic) NSColor *imageNormalColor; // @synthesize imageNormalColor=_imageNormalColor;
@property(retain, nonatomic) NSColor *backgroundHighlightColor; // @synthesize backgroundHighlightColor=_backgroundHighlightColor;
@property(retain, nonatomic) NSColor *backgroundNormalColor; // @synthesize backgroundNormalColor=_backgroundNormalColor;
@property(retain, nonatomic) NSColor *borderHighlightColor; // @synthesize borderHighlightColor=_borderHighlightColor;
@property(retain, nonatomic) NSColor *borderNormalColor; // @synthesize borderNormalColor=_borderNormalColor;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double offAnimateDuration; // @synthesize offAnimateDuration=_offAnimateDuration;
@property(nonatomic) double onAnimateDuration; // @synthesize onAnimateDuration=_onAnimateDuration;
@property(nonatomic) BOOL momentary; // @synthesize momentary=_momentary;
- (void).cxx_destruct;
- (void)setImagePosition:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)animateLayer:(id)arg1 color:(id)arg2 keyPath:(id)arg3 duration:(double)arg4;
- (void)animateColorWithState:(long long)arg1;
- (void)removeAllAnimations;
- (void)setupTitleLayer;
- (void)setupImageLayer;
- (void)setup;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

