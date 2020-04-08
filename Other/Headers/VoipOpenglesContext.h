//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VoipOpenglesContextDelegate;

@interface VoipOpenglesContext : NSObject
{
    char *m_pData[3];
    int srcWidth;
    int srcHeight;
    int dstWidth;
    int dstHeight;
    _Bool sizeChanged;
    unsigned int _colorRenderBuffer;
    unsigned int _YPlanarTexture;
    unsigned int _UPlanarTexture;
    unsigned int _VPlanarTexture;
    unsigned int _UVPlanarTexture;
    unsigned int _textureUniformY;
    unsigned int _textureUniformU;
    unsigned int _textureUniformV;
    unsigned int _textureUniformUV;
    unsigned int _positionSlot;
    unsigned int _texCoordSlot;
    unsigned int rotateUniform;
    unsigned int framebuffer;
    unsigned int vertexBuffer;
    unsigned int indexBuffer;
    float _degrees;
    BOOL _full;
    float _viewWidth;
    float _viewHeight;
    BOOL _hasInit;
    BOOL _isNV12;
    BOOL _isMirrored;
    BOOL needUpdateParam;
    BOOL m_deleteFlag;
    id <VoipOpenglesContextDelegate> _m_delegate;
}

@property(nonatomic) __weak id <VoipOpenglesContextDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) BOOL m_deleteFlag; // @synthesize m_deleteFlag;
- (void).cxx_destruct;
- (void)compileShaders;
- (void)applyRotation:(float)arg1;
- (float)getDegrees;
- (void)setDegrees:(float)arg1;
- (void)resetMirrored:(BOOL)arg1;
- (unsigned int)compileShader:(id)arg1 withType:(unsigned int)arg2;
- (void)drawFrame:(BOOL)arg1;
- (void)updateRenderParam:(BOOL)arg1;
- (void)updateTextureYUVNV12:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 texName:(unsigned int)arg4;
- (void)updateTextureYUV:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 texName:(unsigned int)arg4;
- (unsigned int)textureYUVNV12:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3;
- (unsigned int)textureYUV:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3;
- (void)setupFrameBuffer;
- (void)setupRenderBuffer;
- (void)setupIndices;
- (void)setupContext;
- (void)setupLayer:(id)arg1;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage2:(char **)arg1 Swidth:(unsigned int)arg2 Sheight:(unsigned int)arg3 Dwidth:(unsigned int)arg4 Dheight:(unsigned int)arg5;
- (void)renderImage:(char *)arg1 Swidth:(unsigned int)arg2 Sheight:(unsigned int)arg3 Dwidth:(unsigned int)arg4 Dheight:(unsigned int)arg5;
- (void)deleteELGS;
- (void)internalSetupELGS:(id)arg1 IsNV12:(BOOL)arg2 IsMirrored:(BOOL)arg3;
- (void)setupELGS:(id)arg1 IsNV12:(BOOL)arg2 IsMirrored:(BOOL)arg3;
- (void)setupELGS:(id)arg1;
- (void)changeFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end

