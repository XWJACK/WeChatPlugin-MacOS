//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMImageEditItem.h"

@class NSBezierPath;

@interface MMImageEditOvalItem : MMImageEditItem
{
    NSBezierPath *_path;
}

@property(retain, nonatomic) NSBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)mouseHitGraph:(struct CGPoint)arg1;
- (void)drawActiveBorder;
- (void)drawGraphWithScale:(double)arg1;
- (void)drawGraph;
- (void)transformDidChange;
- (void)dealloc;
- (id)initWithSuperView:(id)arg1 centerPoint:(struct CGPoint)arg2 size:(struct CGSize)arg3;

@end

