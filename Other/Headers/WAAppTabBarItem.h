//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@class MMBadgeOverlayView, NSColor, NSImage, NSImageView, NSMutableDictionary, NSString, NSTextField;

@interface WAAppTabBarItem : NSControl
{
    BOOL _selected;
    NSString *_title;
    NSImage *_image;
    NSImage *_selectedImage;
    NSString *_badgeValue;
    NSColor *_badgeColor;
    NSTextField *_titleTextField;
    NSImageView *_imageView;
    NSMutableDictionary *_titleAttributes;
    MMBadgeOverlayView *_badgeView;
}

@property(retain, nonatomic) MMBadgeOverlayView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) NSMutableDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property(copy, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(retain, nonatomic) NSImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)updateView:(BOOL)arg1;
- (void)setTitleAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)initView;
- (id)initWithTitle:(id)arg1;

@end

