//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@class IJSVGGradientLayer, IJSVGLayer, IJSVGPatternLayer, IJSVGStrokeLayer;

@interface IJSVGShapeLayer : CAShapeLayer
{
    IJSVGLayer *_maskingLayer;
    BOOL requiresBackingScaleHelp;
    BOOL convertMasksToPaths;
    int blendingMode;
    IJSVGGradientLayer *gradientFillLayer;
    IJSVGPatternLayer *patternFillLayer;
    IJSVGGradientLayer *gradientStrokeLayer;
    IJSVGPatternLayer *patternStrokeLayer;
    IJSVGStrokeLayer *strokeLayer;
    double backingScaleFactor;
    long long renderQuality;
    struct CGPoint originalPathOrigin;
    struct CGPoint _absoluteOrigin;
}

@property(nonatomic) struct CGPoint absoluteOrigin; // @synthesize absoluteOrigin=_absoluteOrigin;
@property(nonatomic) long long renderQuality; // @synthesize renderQuality;
@property(nonatomic) struct CGPoint originalPathOrigin; // @synthesize originalPathOrigin;
@property(nonatomic) BOOL convertMasksToPaths; // @synthesize convertMasksToPaths;
@property(nonatomic) int blendingMode; // @synthesize blendingMode;
@property(nonatomic) double backingScaleFactor; // @synthesize backingScaleFactor;
@property(nonatomic) BOOL requiresBackingScaleHelp; // @synthesize requiresBackingScaleHelp;
@property(nonatomic) IJSVGStrokeLayer *strokeLayer; // @synthesize strokeLayer;
@property(nonatomic) IJSVGPatternLayer *patternStrokeLayer; // @synthesize patternStrokeLayer;
@property(nonatomic) IJSVGGradientLayer *gradientStrokeLayer; // @synthesize gradientStrokeLayer;
@property(nonatomic) IJSVGPatternLayer *patternFillLayer; // @synthesize patternFillLayer;
@property(nonatomic) IJSVGGradientLayer *gradientFillLayer; // @synthesize gradientFillLayer;
- (id)actionForKey:(id)arg1;
- (void)renderInContext:(struct CGContext *)arg1;
- (id)maskingLayer;
- (void)applySublayerMaskToContext:(struct CGContext *)arg1 forSublayer:(id)arg2 withOffset:(struct CGPoint)arg3;
- (void)_customRenderInContext:(struct CGContext *)arg1;
- (void)addSublayer:(id)arg1;
- (void)dealloc;

@end

