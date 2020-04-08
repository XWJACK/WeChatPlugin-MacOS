//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMImageEditEmoticonViewBasedItem.h"

@class NSImageView;

@interface MMImageEditEmoticonItem : MMImageEditEmoticonViewBasedItem
{
    NSImageView *_emoticonImageView;
}

@property(retain) NSImageView *emoticonImageView; // @synthesize emoticonImageView=_emoticonImageView;
- (void).cxx_destruct;
- (struct CGRect)imageRealShowRect:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;
- (void)setEditType:(unsigned long long)arg1;
- (struct CGRect)textviewRect;
- (void)updateControlPoints;
- (void)drawActiveBorder;
- (BOOL)mouseHitHorizontalResizeControlPoints:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2;
- (BOOL)mouseHitVerticalResizeControlPoints:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2;
- (BOOL)mouseHitGraph:(struct CGPoint)arg1;
- (void)move:(struct CGPoint)arg1;
- (void)drawControlPoints;
- (void)drawGraphWithScale:(double)arg1;
- (void)drawGraph;
- (id)initWithSuperView:(id)arg1 centerPoint:(struct CGPoint)arg2 size:(struct CGSize)arg3;

@end

