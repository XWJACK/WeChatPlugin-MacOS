//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IJSVGNode.h"

@class IJSVGPath, NSImage;

@interface IJSVGImage : IJSVGNode
{
    NSImage *image;
    struct CGImage *CGImage;
    IJSVGPath *imagePath;
}

- (void)drawInContextRef:(struct CGContext *)arg1 path:(id)arg2;
- (struct CGImage *)CGImage;
- (void)setImage:(id)arg1;
- (id)path;
- (void)loadFromBase64EncodedString:(id)arg1;
- (void)dealloc;

@end

