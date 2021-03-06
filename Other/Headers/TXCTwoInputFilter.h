//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCFilter.h"

@class TXCFramebuffer;

@interface TXCTwoInputFilter : TXCFilter
{
    TXCFramebuffer *secondInputFramebuffer;
    int filterSecondTextureCoordinateAttribute;
    int filterInputTextureUniform2;
    int inputRotation2;
    CDStruct_1b6d18a9 firstFrameTime;
    CDStruct_1b6d18a9 secondFrameTime;
    BOOL hasSetFirstTexture;
    BOOL hasReceivedFirstFrame;
    BOOL hasReceivedSecondFrame;
    BOOL firstFrameWasVideo;
    BOOL secondFrameWasVideo;
    BOOL firstFrameCheckDisabled;
    BOOL secondFrameCheckDisabled;
}

- (void).cxx_destruct;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (struct CGSize)rotatedSize:(struct CGSize)arg1 forIndex:(long long)arg2;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)disableSecondFrameCheck;
- (void)disableFirstFrameCheck;
- (void)initializeAttributes;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end

