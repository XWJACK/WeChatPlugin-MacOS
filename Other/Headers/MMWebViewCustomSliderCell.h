//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSliderCell.h>

@class NSImage;

@interface MMWebViewCustomSliderCell : NSSliderCell
{
    NSImage *_knobImage;
}

@property(retain, nonatomic) NSImage *knobImage; // @synthesize knobImage=_knobImage;
- (void).cxx_destruct;
- (struct CGRect)controlViewBounds;
- (struct CGRect)rectOfTickMarkAtIndex:(long long)arg1;
- (void)drawTickMarks;
- (void)drawBarInside:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (void)drawKnob:(struct CGRect)arg1;
- (id)initWithKnobImage:(id)arg1;

@end
