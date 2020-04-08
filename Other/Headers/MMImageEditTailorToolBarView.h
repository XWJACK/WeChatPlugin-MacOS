//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSMutableArray, NSVisualEffectView;
@protocol MMImageEditTailorToolBarViewDelegate;

@interface MMImageEditTailorToolBarView : NSView
{
    id <MMImageEditTailorToolBarViewDelegate> _tailorToolBarViewDelegate;
    NSMutableArray *_functionButtonArray;
    NSColor *_backgroundColor;
    NSVisualEffectView *_gaussEffectView;
}

@property(retain, nonatomic) NSVisualEffectView *gaussEffectView; // @synthesize gaussEffectView=_gaussEffectView;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSMutableArray *functionButtonArray; // @synthesize functionButtonArray=_functionButtonArray;
@property(nonatomic) __weak id <MMImageEditTailorToolBarViewDelegate> tailorToolBarViewDelegate; // @synthesize tailorToolBarViewDelegate=_tailorToolBarViewDelegate;
- (void).cxx_destruct;
- (void)onFunctionButtonClicked:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)configAppearanceAndLayout;
- (void)initGaussEffect;
- (void)setupFunctionButtons;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
