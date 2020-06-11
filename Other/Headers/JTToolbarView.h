//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSImageView, NSMutableArray, NSVisualEffectView;
@protocol JTToolbarViewDelegate;

@interface JTToolbarView : NSView
{
    BOOL _postedBeginEditNotification;
    id <JTToolbarViewDelegate> _delegate;
    long long _graphTypeSelected;
    NSMutableArray *_graphButtonArray;
    NSMutableArray *_functionButtonArray;
    NSColor *_backgroundColor;
    NSImageView *_seperateImageView;
    NSVisualEffectView *_gaussEffectView;
}

@property(retain, nonatomic) NSVisualEffectView *gaussEffectView; // @synthesize gaussEffectView=_gaussEffectView;
@property(nonatomic) BOOL postedBeginEditNotification; // @synthesize postedBeginEditNotification=_postedBeginEditNotification;
@property(retain, nonatomic) NSImageView *seperateImageView; // @synthesize seperateImageView=_seperateImageView;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSMutableArray *functionButtonArray; // @synthesize functionButtonArray=_functionButtonArray;
@property(retain, nonatomic) NSMutableArray *graphButtonArray; // @synthesize graphButtonArray=_graphButtonArray;
@property(nonatomic) long long graphTypeSelected; // @synthesize graphTypeSelected=_graphTypeSelected;
@property(nonatomic) __weak id <JTToolbarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)postBeginEditNotification;
- (id)functionButtonByGraphType:(unsigned long long)arg1;
- (id)graphButtonByGraphType:(long long)arg1;
- (struct CGRect)buttonFrameOfGraphType:(long long)arg1;
- (void)onFunctionButtonClicked:(id)arg1;
- (void)onGraphButtonClicked:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)configAppearanceAndLayout;
@property(nonatomic) BOOL enableUndo;
- (void)initGaussEffect;
- (void)setupImageView;
- (void)setupFunctionButtons;
- (void)setupGraphButtons;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

