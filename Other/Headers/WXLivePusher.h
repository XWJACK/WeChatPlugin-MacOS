//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXLivePush.h"

#import "TRTCCloudDelegate-Protocol.h"
#import "WXLocalAudioRecorderDelegate-Protocol.h"

@class NSLock, NSMutableSet, NSString, TRTCParams, WXLivePushConfig, WXLocalAudioRecorder;

@interface WXLivePusher : TXLivePush <TRTCCloudDelegate, WXLocalAudioRecorderDelegate>
{
    NSString *_pushURL;
    BOOL _isTRTC;
    TRTCParams *_trtcParam;
    long long _appScene;
    int _encsmall;
    struct NSView *_preview;
    BOOL _startedPreview;
    BOOL _startedAudio;
    BOOL _isEnterRoom;
    BOOL _isStart;
    BOOL _needCheckRole;
    NSMutableSet *_mainUserList;
    NSMutableSet *_auxUserList;
    NSLock *_lock;
    WXLocalAudioRecorder *_audioRecorder;
    WXLivePushConfig *_config;
}

- (void).cxx_destruct;
- (void)setSystemVolumeType:(long long)arg1;
- (void)onLocalAudioWriteFail:(int)arg1 message:(id)arg2;
- (id)dictionaryFromQuery:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (BOOL)parseURL:(id)arg1;
- (void)sendNotifyEvent:(int)arg1 msg:(id)arg2;
- (id)getAudioAvailableJsonStr:(id)arg1 hasAudio:(BOOL)arg2;
- (id)getVideoAvailableJsonStr:(id)arg1 streamType:(id)arg2 hasVideo:(BOOL)arg3;
- (id)getUserExitJsonStr:(id)arg1;
- (id)getUserEnterJsonStr:(id)arg1;
- (id)getJsonStrFromUserList;
- (void)onRecvSEIMsg:(id)arg1 message:(id)arg2;
- (void)onStatistics:(id)arg1;
- (void)onNetworkQuality:(id)arg1 remoteQuality:(id)arg2;
- (void)onUserVoiceVolume:(id)arg1 totalVolume:(long long)arg2;
- (void)onUserAudioAvailable:(id)arg1 available:(BOOL)arg2;
- (void)onUserSubStreamAvailable:(id)arg1 available:(BOOL)arg2;
- (void)onUserVideoAvailable:(id)arg1 available:(BOOL)arg2;
- (void)onRemoteUserLeaveRoom:(id)arg1 reason:(long long)arg2;
- (void)onRemoteUserEnterRoom:(id)arg1;
- (void)onExitRoom:(long long)arg1;
- (void)onEnterRoom:(long long)arg1;
- (void)onWarning:(int)arg1 warningMsg:(id)arg2 extInfo:(id)arg3;
- (void)onError:(int)arg1 errMsg:(id)arg2 extInfo:(id)arg3;
- (int)transAudioSample:(long long)arg1;
- (void)updateConfig:(BOOL)arg1 config:(id)arg2;
- (void)checkSwitchAudience;
- (void)checkSwitchAnchor;
- (void)resetParams;
- (void)sendMessage:(id)arg1;
- (BOOL)sendMessageEx:(id)arg1;
- (void)showVideoDebugLog:(BOOL)arg1;
- (BOOL)setVoiceChangerType:(long long)arg1;
- (BOOL)setReverbType:(long long)arg1;
- (int)setBGMPosition:(long long)arg1;
- (BOOL)setBGMVolume:(float)arg1;
- (BOOL)setMicVolume:(float)arg1;
- (int)getMusicDuration:(id)arg1;
- (BOOL)resumeBGM;
- (BOOL)pauseBGM;
- (BOOL)stopBGM;
- (BOOL)playBGM:(id)arg1 withBeginNotify:(CDUnknownBlockType)arg2 withProgressNotify:(CDUnknownBlockType)arg3 andCompleteNotify:(CDUnknownBlockType)arg4;
- (void)setMute:(BOOL)arg1;
- (void)setZoom:(double)arg1;
- (void)setFocusPosition:(struct CGPoint)arg1;
- (void)setRenderRotation:(int)arg1;
- (BOOL)toggleTorch:(BOOL)arg1;
- (void)setBeautyStyle:(int)arg1 beautyLevel:(float)arg2 whitenessLevel:(float)arg3 ruddinessLevel:(float)arg4;
- (void)setMirror:(BOOL)arg1;
- (int)switchCamera;
- (void)stopPreview;
- (int)startPreview:(struct NSView *)arg1;
- (_Bool)isPublishing;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (void)stopPush;
- (int)startPush:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopDumpAudioData;
- (int)startDumpAudioData:(id)arg1;
- (void)stopAudioRecord;
- (void)startAudioRecord;
- (void)setVideoQuality:(long long)arg1 adjustBitrate:(BOOL)arg2 adjustResolution:(BOOL)arg3;
- (void)setPushURL:(id)arg1;
@property(copy, nonatomic) WXLivePushConfig *config; // @synthesize config=_config;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

