//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSMutableDictionary;

@interface TRTCConfig : NSObject
{
    int _videoFps;
    int _videoBitrate;
    int _audioChannels;
    int _pauseFps;
    long long _resolutionMode;
    long long _renderMode;
    long long _outputRotation;
    long long _renderRotation;
    long long _fillMode;
    long long _videoResolution;
    long long _audioSampleRate;
    struct NSImage *_pauseImg;
    long long _gsensorMode;
    long long _appScene;
    NSMutableDictionary *_remoteRenderConfigMap;
    long long _localBufferType;
    long long _localPixelFormat;
    struct CGSize _videoSize;
}

@property(nonatomic) long long localPixelFormat; // @synthesize localPixelFormat=_localPixelFormat;
@property(nonatomic) long long localBufferType; // @synthesize localBufferType=_localBufferType;
@property(retain, nonatomic) NSMutableDictionary *remoteRenderConfigMap; // @synthesize remoteRenderConfigMap=_remoteRenderConfigMap;
@property(nonatomic) long long appScene; // @synthesize appScene=_appScene;
@property(nonatomic) long long gsensorMode; // @synthesize gsensorMode=_gsensorMode;
@property(retain, nonatomic) NSImage *pauseImg; // @synthesize pauseImg=_pauseImg;
@property(nonatomic) int pauseFps; // @synthesize pauseFps=_pauseFps;
@property(nonatomic) int audioChannels; // @synthesize audioChannels=_audioChannels;
@property(nonatomic) long long audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) int videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) int videoFps; // @synthesize videoFps=_videoFps;
@property(nonatomic) long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) long long renderRotation; // @synthesize renderRotation=_renderRotation;
@property(nonatomic) long long outputRotation; // @synthesize outputRotation=_outputRotation;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(nonatomic) long long resolutionMode; // @synthesize resolutionMode=_resolutionMode;
- (void).cxx_destruct;
- (long long)pixelFormatForRemoteUserId:(id)arg1;
- (id)init;

@end

