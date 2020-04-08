//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSImage, NSShadow;

@interface MMMessageUnreadTipsButton : NSButton
{
    NSImage *_arrowGlyph;
    NSShadow *_contentsShadow;
    double _totalWidth;
    double _totalHeight;
    NSImage *_tipsIcon;
    BOOL _isAnimatingSlide;
    unsigned int _unreadCount;
    int _scene;
    int _direction;
}

@property BOOL isAnimatingSlide; // @synthesize isAnimatingSlide=_isAnimatingSlide;
@property(nonatomic) int direction; // @synthesize direction=_direction;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int unreadCount; // @synthesize unreadCount=_unreadCount;
- (void).cxx_destruct;
- (void)handleAppFontSize;
- (void)setHidden:(BOOL)arg1 withSlideTransition:(BOOL)arg2;
- (void)setState:(long long)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

