//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCModule.h"

#import "TXIAudioPlayDelegate-Protocol.h"
#import "TXINotifyDelegate-Protocol.h"
#import "TXIVideoDecoderDelegate-Protocol.h"

@class NSString, TXCAudioPlayer, TXCRenderView, TXCVideoDecoder;
@protocol TXIAudioPlayDataDelegate, TXICustomRenderDelegate, TXINotifyDelegate, TXIRenderAndDecDelegate;

@interface TXCRenderAndDec : TXCModule <TXIVideoDecoderDelegate, TXIAudioPlayDelegate, TXINotifyDelegate>
{
    struct CGSize _videoSize;
    BOOL _isHevc;
    long long _lastReqKeyFrameMS;
    long long _frameDecErrCount;
    BOOL _firstRender;
    unsigned long long _lastRenderCalculateTS;
    unsigned long long _renderFrameCount;
    unsigned long long _lastRenderFrameCount;
    BOOL _enableMute;
    BOOL _muteInSpeaker;
    BOOL _enableRealTimePlay;
    BOOL _enableAutoAdjustCache;
    BOOL _enableAudioHWAcceleration;
    BOOL _enableVolumeLevelCal;
    BOOL _enableSortFrame;
    BOOL _enableVideoHWAcceleration;
    BOOL _enableLagDetection;
    BOOL _isPlaying;
    int _videoBlockThreshold;
    int _volume;
    float _cacheTime;
    float _minAutoAdjustCacheTime;
    float _maxAutoAdjustCacheTime;
    int _smoothMode;
    int _streamFormat;
    int _streamType;
    id <TXINotifyDelegate> _notifyDelegate;
    id <TXICustomRenderDelegate> _customRenderDelegate;
    id <TXIAudioPlayDataDelegate> _audioPlayDataDelegate;
    id <TXIRenderAndDecDelegate> _delegate;
    long long _rotation;
    long long _renderMode;
    NSString *_audioInfo;
    long long _pixelFormat;
    TXCVideoDecoder *_videoDecoder;
    TXCAudioPlayer *_audioPlayer;
    TXCRenderView *_renderView;
}

+ (void)setPlayoutVolume:(long long)arg1;
+ (unsigned int)getCorePlayVolumeLevel;
+ (void)enableCorePlayVolumeLevelCal:(BOOL)arg1;
+ (void)setAudioCorePlayDelegate:(id)arg1 callbackSampleNum:(unsigned int)arg2;
+ (float)getAudioOutputDeviceVolume;
+ (void)setAudioOutputDeviceVolume:(float)arg1;
+ (unsigned int)getAudioOutputDeviceId;
+ (void)setAudioOutputDeviceWithId:(unsigned int)arg1;
+ (void)setAudioMode:(long long)arg1;
+ (long long)findLagFromBuffer:(const char *)arg1 width:(unsigned long long)arg2;
@property(retain) TXCRenderView *renderView; // @synthesize renderView=_renderView;
@property(retain) TXCAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain) TXCVideoDecoder *videoDecoder; // @synthesize videoDecoder=_videoDecoder;
@property(nonatomic) long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(retain, nonatomic) NSString *audioInfo; // @synthesize audioInfo=_audioInfo;
@property(readonly, nonatomic) BOOL isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) BOOL enableLagDetection; // @synthesize enableLagDetection=_enableLagDetection;
@property(nonatomic) BOOL enableVideoHWAcceleration; // @synthesize enableVideoHWAcceleration=_enableVideoHWAcceleration;
@property(nonatomic) BOOL enableSortFrame; // @synthesize enableSortFrame=_enableSortFrame;
@property(nonatomic) BOOL enableVolumeLevelCal; // @synthesize enableVolumeLevelCal=_enableVolumeLevelCal;
@property(nonatomic) int streamFormat; // @synthesize streamFormat=_streamFormat;
@property(nonatomic) int smoothMode; // @synthesize smoothMode=_smoothMode;
@property(nonatomic) float maxAutoAdjustCacheTime; // @synthesize maxAutoAdjustCacheTime=_maxAutoAdjustCacheTime;
@property(nonatomic) float minAutoAdjustCacheTime; // @synthesize minAutoAdjustCacheTime=_minAutoAdjustCacheTime;
@property(nonatomic) float cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) BOOL enableAudioHWAcceleration; // @synthesize enableAudioHWAcceleration=_enableAudioHWAcceleration;
@property(nonatomic) BOOL enableAutoAdjustCache; // @synthesize enableAutoAdjustCache=_enableAutoAdjustCache;
@property(nonatomic) BOOL enableRealTimePlay; // @synthesize enableRealTimePlay=_enableRealTimePlay;
@property(nonatomic) BOOL muteInSpeaker; // @synthesize muteInSpeaker=_muteInSpeaker;
@property(nonatomic) BOOL enableMute; // @synthesize enableMute=_enableMute;
@property(nonatomic) int volume; // @synthesize volume=_volume;
@property(nonatomic) int videoBlockThreshold; // @synthesize videoBlockThreshold=_videoBlockThreshold;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) __weak id <TXIRenderAndDecDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TXIAudioPlayDataDelegate> audioPlayDataDelegate; // @synthesize audioPlayDataDelegate=_audioPlayDataDelegate;
@property(nonatomic) __weak id <TXICustomRenderDelegate> customRenderDelegate; // @synthesize customRenderDelegate=_customRenderDelegate;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
- (void).cxx_destruct;
- (void)requestKeyFrame;
- (void)updateLoadInfo;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)onDecodeFrame:(struct opaqueCMSampleBuffer *)arg1 FrameType:(long long)arg2 FrameIndex:(unsigned long long)arg3 FramePTS:(unsigned long long)arg4 FrameDTS:(unsigned long long)arg5 FrameRotation:(unsigned char)arg6 ErrorCode:(unsigned long long)arg7;
- (int)onRequestVideoDecoderCacheNum;
- (void)onSEIAvaliable:(id)arg1;
- (void)onNALAvaliable:(id)arg1;
- (void)onPlayPcmData:(id)arg1;
- (void)setBlockInterval:(unsigned int)arg1;
- (void)pushNAL:(id)arg1;
- (long long)pushAudio:(id)arg1;
- (void)snapshotFromView:(CDUnknownBlockType)arg1;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (void)setVideoMuted:(BOOL)arg1;
- (void)stopVideo;
- (void)startVideo;
- (void)stop;
- (void)stopKeepLastFrame:(BOOL)arg1;
- (int)start;
- (void)removeRender;
- (void)renderToView:(id)arg1 atIndex:(long long)arg2;
@property(readonly, nonatomic) long long videoGop;
@property(readonly, nonatomic) float cacheThreshold;
@property(readonly, nonatomic) long long avNetRecvInterval;
@property(readonly, nonatomic) long long audioJitter;
@property(readonly, nonatomic) long long avPlayInterval;
@property(readonly, nonatomic) long long videoDecCacheFrameCount;
@property(readonly, nonatomic) long long videoCacheFrameCount;
@property(readonly, nonatomic) long long videoCacheDuration;
@property(readonly, nonatomic) long long audioCacheDuration;
@property(readonly, nonatomic) struct CGSize videoSize;
@property(readonly, nonatomic) unsigned int volumeLevel;
- (void)setID:(id)arg1;
- (void)releaseDecoder;
- (void)createDecoder;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

