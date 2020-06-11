//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCModule.h"

#import "TXIAudioRecordDelegate-Protocol.h"
#import "TXICameraCapturerDelegate-Protocol.h"
#import "TXIMediaCapturerDelegate-Protocol.h"
#import "TXINotifyDelegate-Protocol.h"
#import "TXIRenderViewDelegate-Protocol.h"
#import "TXIVideoEncoderDelegate-Protocol.h"
#import "TXIVideoPreprocessorDelegateEx-Protocol.h"

@class NSHashTable, NSImage, NSLock, NSMutableArray, NSObject, NSString, NSThread, NSTimer, NSView, NSWindow, TXCLiveMixPlayer, TXCRenderView, TXCScreenCapturer, TXCVideoEncoder, TXCVideoPreprocessorEx, TXCWindowCapturer, TXSNALPacket;
@protocol OS_dispatch_source, TXICustomScreenPreprocessDelegate, TXINotifyDelegate, TXIScreenCaptureAndEncDelegate;

@interface TXCScreenAndEnc : TXCModule <TXIAudioRecordDelegate, TXICameraCapturerDelegate, TXIMediaCapturerDelegate, TXIVideoPreprocessorDelegateEx, TXIVideoEncoderDelegate, TXIRenderViewDelegate, TXINotifyDelegate>
{
    TXCRenderView *_renderView;
    NSObject<OS_dispatch_source> *_backgroundTimer;
    BOOL _isPaused;
    unsigned long long _pauseTS;
    unsigned long long _lastFPSTickMS;
    struct CGSize _originSampleBufferSize;
    BOOL _isLastSampleBuffer;
    NSMutableArray *_sampleBufferArray;
    NSThread *_sampleBufferLoopThread;
    NSLock *_audioBufferLock;
    char *_audioBuffer;
    int _audioBufferOffset;
    BOOL _enableBFrame;
    unsigned long long _lastEncodedFrameIndex;
    int _idrFps;
    unsigned long long _lastEncodedGopIndex;
    long long _renderMode;
    NSHashTable *_renderViews;
    struct CGRect _shareFrame;
    TXCLiveMixPlayer *_mBGMMixPlayer;
    BOOL _enableMirror;
    BOOL _enableTouchFocus;
    BOOL _renderStopped;
    BOOL _enableMute;
    BOOL _enableAEC;
    BOOL _enableAudioRecord;
    BOOL _enableAudioPreview;
    BOOL _enableAudioHWAcceleration;
    BOOL _enablePureAudioPush;
    BOOL _highlight;
    BOOL _motionMute;
    BOOL _realtimeMode;
    BOOL _autoSampleBufferSize;
    BOOL _enableVideoHWAcceleration;
    BOOL _enableRPS;
    BOOL _isPushing;
    _Bool _isAnnexB;
    BOOL _lockOutput;
    BOOL _isRunning;
    BOOL _isStoped;
    int _reverbType;
    int _audioSampleRate;
    int _audioChannels;
    int _audioFormat;
    float _bgmPitch;
    float _filterMixLevel;
    int _videoFPS;
    int _minQP;
    int _maxQP;
    int _streamType;
    CDUnknownBlockType _volumeTestBlock;
    id <TXIScreenCaptureAndEncDelegate> _delegate;
    id <TXINotifyDelegate> _notifyDelegate;
    id <TXICustomScreenPreprocessDelegate> _customPreprocessDelegate;
    long long _homeOrientation;
    long long _rotation;
    long long _videoInputSource;
    NSView *_waterMarkView;
    long long _beautyStyle;
    long long _beautyLevel;
    long long _whitenessLevel;
    long long _ruddinessLevel;
    long long _noseSlimLevel;
    long long _eyeScaleLevel;
    long long _chinLevel;
    long long _faceVLevel;
    long long _faceScaleLevel;
    long long _faceShortlevel;
    NSImage *_filterImage;
    NSString *_motionTemplate;
    NSString *_greenScreenFile;
    NSImage *_watermark;
    long long _videoResolution;
    long long _videoEncodeGop;
    long long _videoBitrate;
    long long _outputRotation;
    long long _pauseFPS;
    long long _pauseTime;
    NSImage *_pauseImage;
    TXCWindowCapturer *_windowCapture;
    TXCScreenCapturer *_screenCapture;
    NSTimer *_screenTimer;
    TXCVideoEncoder *_videoEncoder;
    TXSNALPacket *_backgroundNAL;
    TXCVideoPreprocessorEx *_videoPreproccessor;
    CDUnknownBlockType _snapshotCompletionBlock;
    NSWindow *_borderWindow;
    struct CGPoint _watermarkPos;
    struct CGSize _videoSize;
    struct CGRect _watermarkNormalization;
    struct CGRect _currentShareWindowframe;
}

+ (float)getAudioInputDeviceVolume;
+ (void)setAudioInputDeviceVolume:(float)arg1;
+ (unsigned int)getAudioInputDeviceId;
+ (void)setAudioInputDeviceWithId:(unsigned int)arg1;
@property(nonatomic) BOOL isStoped; // @synthesize isStoped=_isStoped;
@property(nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property struct CGRect currentShareWindowframe; // @synthesize currentShareWindowframe=_currentShareWindowframe;
@property(retain, nonatomic) NSWindow *borderWindow; // @synthesize borderWindow=_borderWindow;
@property(copy) CDUnknownBlockType snapshotCompletionBlock; // @synthesize snapshotCompletionBlock=_snapshotCompletionBlock;
@property BOOL lockOutput; // @synthesize lockOutput=_lockOutput;
@property(retain) TXCVideoPreprocessorEx *videoPreproccessor; // @synthesize videoPreproccessor=_videoPreproccessor;
@property(retain) TXSNALPacket *backgroundNAL; // @synthesize backgroundNAL=_backgroundNAL;
@property(retain) TXCVideoEncoder *videoEncoder; // @synthesize videoEncoder=_videoEncoder;
@property(retain, nonatomic) NSTimer *screenTimer; // @synthesize screenTimer=_screenTimer;
@property(retain) TXCScreenCapturer *screenCapture; // @synthesize screenCapture=_screenCapture;
@property(retain) TXCWindowCapturer *windowCapture; // @synthesize windowCapture=_windowCapture;
@property(nonatomic) _Bool isAnnexB; // @synthesize isAnnexB=_isAnnexB;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(readonly, nonatomic) BOOL isPushing; // @synthesize isPushing=_isPushing;
@property(retain, nonatomic) NSImage *pauseImage; // @synthesize pauseImage=_pauseImage;
@property(nonatomic) long long pauseTime; // @synthesize pauseTime=_pauseTime;
@property(nonatomic) long long pauseFPS; // @synthesize pauseFPS=_pauseFPS;
@property(nonatomic) long long outputRotation; // @synthesize outputRotation=_outputRotation;
@property(nonatomic) BOOL enableRPS; // @synthesize enableRPS=_enableRPS;
@property(nonatomic) int maxQP; // @synthesize maxQP=_maxQP;
@property(nonatomic) int minQP; // @synthesize minQP=_minQP;
@property(nonatomic) BOOL enableVideoHWAcceleration; // @synthesize enableVideoHWAcceleration=_enableVideoHWAcceleration;
@property(nonatomic) BOOL autoSampleBufferSize; // @synthesize autoSampleBufferSize=_autoSampleBufferSize;
@property(nonatomic) long long videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) BOOL realtimeMode; // @synthesize realtimeMode=_realtimeMode;
@property(nonatomic) long long videoEncodeGop; // @synthesize videoEncodeGop=_videoEncodeGop;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) int videoFPS; // @synthesize videoFPS=_videoFPS;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
@property(nonatomic) struct CGRect watermarkNormalization; // @synthesize watermarkNormalization=_watermarkNormalization;
@property(nonatomic) struct CGPoint watermarkPos; // @synthesize watermarkPos=_watermarkPos;
@property(retain, nonatomic) NSImage *watermark; // @synthesize watermark=_watermark;
@property(retain, nonatomic) NSString *greenScreenFile; // @synthesize greenScreenFile=_greenScreenFile;
@property(nonatomic) BOOL motionMute; // @synthesize motionMute=_motionMute;
@property(retain, nonatomic) NSString *motionTemplate; // @synthesize motionTemplate=_motionTemplate;
@property(nonatomic) float filterMixLevel; // @synthesize filterMixLevel=_filterMixLevel;
@property(retain, nonatomic) NSImage *filterImage; // @synthesize filterImage=_filterImage;
@property(nonatomic) long long faceShortlevel; // @synthesize faceShortlevel=_faceShortlevel;
@property(nonatomic) long long faceScaleLevel; // @synthesize faceScaleLevel=_faceScaleLevel;
@property(nonatomic) long long faceVLevel; // @synthesize faceVLevel=_faceVLevel;
@property(nonatomic) long long chinLevel; // @synthesize chinLevel=_chinLevel;
@property(nonatomic) long long eyeScaleLevel; // @synthesize eyeScaleLevel=_eyeScaleLevel;
@property(nonatomic) long long noseSlimLevel; // @synthesize noseSlimLevel=_noseSlimLevel;
@property(nonatomic) long long ruddinessLevel; // @synthesize ruddinessLevel=_ruddinessLevel;
@property(nonatomic) long long whitenessLevel; // @synthesize whitenessLevel=_whitenessLevel;
@property(nonatomic) long long beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) long long beautyStyle; // @synthesize beautyStyle=_beautyStyle;
@property(nonatomic) BOOL highlight; // @synthesize highlight=_highlight;
@property(retain, nonatomic) NSView *waterMarkView; // @synthesize waterMarkView=_waterMarkView;
@property(nonatomic) long long videoInputSource; // @synthesize videoInputSource=_videoInputSource;
@property(nonatomic) BOOL enablePureAudioPush; // @synthesize enablePureAudioPush=_enablePureAudioPush;
@property(nonatomic) float bgmPitch; // @synthesize bgmPitch=_bgmPitch;
@property(nonatomic) int audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) int audioChannels; // @synthesize audioChannels=_audioChannels;
@property(nonatomic) int audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) int reverbType; // @synthesize reverbType=_reverbType;
@property(nonatomic) BOOL enableAudioHWAcceleration; // @synthesize enableAudioHWAcceleration=_enableAudioHWAcceleration;
@property(nonatomic) BOOL enableAudioPreview; // @synthesize enableAudioPreview=_enableAudioPreview;
@property(nonatomic) BOOL enableAudioRecord; // @synthesize enableAudioRecord=_enableAudioRecord;
@property(nonatomic) BOOL enableAEC; // @synthesize enableAEC=_enableAEC;
@property(nonatomic) BOOL enableMute; // @synthesize enableMute=_enableMute;
@property(nonatomic) BOOL renderStopped; // @synthesize renderStopped=_renderStopped;
@property(nonatomic) BOOL enableTouchFocus; // @synthesize enableTouchFocus=_enableTouchFocus;
@property(nonatomic) long long rotation; // @synthesize rotation=_rotation;
@property(nonatomic) long long homeOrientation; // @synthesize homeOrientation=_homeOrientation;
@property(nonatomic) BOOL enableMirror; // @synthesize enableMirror=_enableMirror;
@property(nonatomic) __weak id <TXICustomScreenPreprocessDelegate> customPreprocessDelegate; // @synthesize customPreprocessDelegate=_customPreprocessDelegate;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) __weak id <TXIScreenCaptureAndEncDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) CDUnknownBlockType volumeTestBlock; // @synthesize volumeTestBlock=_volumeTestBlock;
- (void).cxx_destruct;
- (BOOL)forceSoftWareVideoEncoder;
- (BOOL)isVideoResolution720P;
- (BOOL)canMixBGM;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (void)lockOutput:(BOOL)arg1;
- (BOOL)setBGMVolume:(float)arg1;
- (BOOL)setMicVolume:(float)arg1;
- (int)setBGMPosition:(long long)arg1;
- (int)getMusicDuration:(id)arg1;
- (int)getBGMPosition;
- (BOOL)resumeBGM;
- (BOOL)pauseBGM;
- (BOOL)stopBGM;
- (BOOL)playBGM:(id)arg1 withBeginNotify:(CDUnknownBlockType)arg2 withProgressNotify:(CDUnknownBlockType)arg3 andCompleteNotify:(CDUnknownBlockType)arg4;
- (BOOL)playBGM:(id)arg1;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)onEncodeFinished:(unsigned int)arg1 gopIndex:(unsigned long long)arg2 rpsFrameIndex:(unsigned long long)arg3;
- (void)onEncodeNAL:(id)arg1 ErrorCode:(int)arg2;
- (void)onTextureDestoryed;
- (void)onDetectFacePoints:(id)arg1;
- (void)didProcessFrame:(id)arg1;
- (unsigned int)willAddWatermark:(id)arg1;
- (id)appendMouseCursor:(id)arg1;
- (void)refreshWindowBorder:(long long)arg1;
- (void)setScreenHighlight:(BOOL)arg1;
- (void)onScreenTimer;
- (void)addWartMark;
- (void)capturer:(id)arg1 didCaptureFrame:(id)arg2;
- (void)onCameraCaptureFrame:(id)arg1;
- (void)onRecordEncData:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)onRecordSpeedPcmData:(char *)arg1 dataLen:(unsigned int)arg2 timestamp:(unsigned long long)arg3;
- (void)onRecordPcmData:(char *)arg1 dataLen:(unsigned int)arg2 timestamp:(unsigned long long)arg3 sampleRate:(int)arg4 channels:(int)arg5;
- (void)customSampleBufferLoopFun:(id)arg1;
- (void)setVoiceChangerType:(int)arg1 environment:(int)arg2;
- (void)enableNearestRPS:(long long)arg1;
- (void)setVideoQosWithIDRFps:(long long)arg1;
- (void)setAudioQosWithFrameLen:(long long)arg1 encBitrate:(long long)arg2 fetRate:(float)arg3;
- (void)setVideoQosWithFps:(long long)arg1 bitrate:(long long)arg2 totalBitrate:(int)arg3 videoSize:(struct CGSize)arg4 streamType:(unsigned int)arg5;
- (void)setRPSRefBitmap:(long long)arg1 bitmap:(unsigned short)arg2 recvTimestamp:(long long)arg3;
- (void)restartIDR;
- (void)sendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)cancelSendMutedAudioSampleBuffer;
- (void)sendMutedAudioSampleBuffer;
- (void)sendMutedAudioSampleBufferDelay;
- (void)sendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withType:(unsigned long long)arg2;
- (void)sendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)sendCustomPCMData:(char *)arg1 len:(unsigned int)arg2 timestamp:(unsigned long long)arg3;
- (void)sendCustomPCMData:(char *)arg1 len:(unsigned int)arg2;
- (void)setCustomAudioMuted:(BOOL)arg1;
- (void)resumeRecord;
- (void)pauseRecord;
- (void)resumeEncode;
- (void)pauseEncode;
- (void)_resumeCapture:(int)arg1;
- (void)resumeCapture;
- (void)resume;
- (void)_pauseCapture:(int)arg1;
- (void)pauseCapture;
- (void)pause;
- (void)stop;
- (void)stopTest;
- (void)startTest;
- (int)start;
- (void)removeAllRenderView;
- (void)stopCaptureIfNoRenderView;
- (void)removeRenderView:(id)arg1;
- (void)addRenderView:(id)arg1;
- (void)setRenderView:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)_stopVideoCapture:(int)arg1;
- (void)stopVideoCapture;
- (void)startVideoCapture;
- (void)stopCustomCapture;
- (int)startCustomCapture;
- (void)stopCameraCapture;
- (void)_startVideoPreprocessor;
@property(readonly, nonatomic) long long videoEncodeRealGop;
- (id)currentCapturer;
- (void)setRenderMode:(long long)arg1;
- (void)setID:(id)arg1;
- (void)onEncNAL:(id)arg1;
- (void)onEncAudio:(id)arg1;
- (void)sendBackgroundNAL;
- (void)stopBackgroundSend;
- (void)startBackgroundSend;
- (void)encodeFrame:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (void)restartEncoder;
- (void)stopEncoder;
- (void)startEncoder;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) BOOL capturesCursor; // @dynamic capturesCursor;
@property(nonatomic) BOOL capturesMouseClicks; // @dynamic capturesMouseClicks;
@property(nonatomic) struct CGRect cropRect; // @dynamic cropRect;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned int displayID; // @dynamic displayID;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) unsigned int windowID; // @dynamic windowID;

@end

