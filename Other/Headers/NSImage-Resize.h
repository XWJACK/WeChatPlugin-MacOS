//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImage.h>

@interface NSImage (Resize)
- (BOOL)isWideImage;
- (BOOL)isLongImage;
- (struct CGSize)drawInRect:(struct CGRect)arg1 operation:(unsigned long long)arg2 fraction:(float)arg3 method:(int)arg4;
- (id)imageToFitSizeInterpolationHigh:(struct CGSize)arg1 method:(int)arg2;
- (id)imageToFitSize:(struct CGSize)arg1 method:(int)arg2;
- (id)cropToIdealSize:(struct CGSize)arg1;
- (id)resizeToIdealSize:(struct CGSize)arg1;
@end
