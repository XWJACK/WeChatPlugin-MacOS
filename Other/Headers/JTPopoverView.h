//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSImageView, NSVisualEffectView;

@interface JTPopoverView : NSView
{
    BOOL _showLogo;
    unsigned long long _arrowDirection;
    NSImageView *_seperateImageView;
    NSImageView *_logoImageView;
    NSColor *_backgroundColor;
    NSVisualEffectView *_gaussEffectView;
    struct CGPoint _arrowPoint;
}

@property(retain, nonatomic) NSVisualEffectView *gaussEffectView; // @synthesize gaussEffectView=_gaussEffectView;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) NSImageView *seperateImageView; // @synthesize seperateImageView=_seperateImageView;
@property(nonatomic) BOOL showLogo; // @synthesize showLogo=_showLogo;
@property(nonatomic) unsigned long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(nonatomic) struct CGPoint arrowPoint; // @synthesize arrowPoint=_arrowPoint;
- (void).cxx_destruct;
- (void)drawArrow;
- (void)drawRoundRect;
- (void)drawRect:(struct CGRect)arg1;
- (id)maskImage;
- (void)configAppearanceAndLayout;
- (void)setFrameSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGRect roundRectFrame;
- (void)initGaussEffect;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
