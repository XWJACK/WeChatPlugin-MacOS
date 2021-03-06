//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSDictionary;

@interface IJSVGLayerTree : NSObject
{
    NSColor *fillColor;
    NSColor *strokeColor;
    double strokeWidth;
    long long lineJoinStyle;
    long long lineCapStyle;
    NSDictionary *replacementColors;
    struct CGRect viewBox;
}

+ (void)log:(id)arg1 depth:(long long)arg2;
@property(retain, nonatomic) NSDictionary *replacementColors; // @synthesize replacementColors;
@property(nonatomic) long long lineCapStyle; // @synthesize lineCapStyle;
@property(nonatomic) long long lineJoinStyle; // @synthesize lineJoinStyle;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth;
@property(retain, nonatomic) NSColor *strokeColor; // @synthesize strokeColor;
@property(retain, nonatomic) NSColor *fillColor; // @synthesize fillColor;
@property(nonatomic) struct CGRect viewBox; // @synthesize viewBox;
- (id)fillRule:(long long)arg1;
- (id)lineCap:(long long)arg1;
- (id)lineJoin:(long long)arg1;
- (id)lineDashPattern:(id)arg1;
- (void)adjustLayer:(id)arg1 toParentLayerFrame:(id)arg2;
- (void)_recursiveColorLayersFromLayer:(id)arg1 withColor:(struct CGColor *)arg2;
- (void)maskLayer:(id)arg1 fromNode:(id)arg2;
- (id)strokeLayer:(id)arg1 fromNode:(id)arg2;
- (void)applyOffsetsToLayer:(id)arg1 fromNode:(id)arg2;
- (id)patternLayerForLayer:(id)arg1 pattern:(id)arg2 fromNode:(id)arg3;
- (id)patternStrokeLayerForLayer:(id)arg1 pattern:(id)arg2 fromNode:(id)arg3;
- (id)gradientLayerForLayer:(id)arg1 gradient:(id)arg2 fromNode:(id)arg3 objectRect:(struct CGRect)arg4 shouldMask:(BOOL)arg5;
- (id)gradientStrokeLayerForLayer:(id)arg1 gradient:(id)arg2 fromNode:(id)arg3 objectRect:(struct CGRect)arg4;
- (id)proposedColorForColor:(id)arg1;
- (struct CGRect)correctBounds:(struct CGRect)arg1 forStrokedPath:(id)arg2;
- (id)layerForPath:(id)arg1;
- (struct CGAffineTransform)absoluteTransform:(id)arg1;
- (id)layerMaskFromLayer:(id)arg1 fromNode:(id)arg2;
- (id)basicLayerForPath:(id)arg1 originalBoundingBox:(struct CGRect *)arg2;
- (struct CGRect)correctedBounds:(struct CGRect)arg1;
- (id)layerForGroup:(id)arg1;
- (id)layerForImage:(id)arg1;
- (void)applyDefaultsToLayer:(id)arg1 fromNode:(id)arg2;
- (id)applyTransforms:(id)arg1 toLayer:(id)arg2 fromNode:(id)arg3;
- (id)layerForNode:(id)arg1;
- (id)init;
- (void)dealloc;

@end

