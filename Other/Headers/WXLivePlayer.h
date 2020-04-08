//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXLivePlayer.h"

#import "IAudioVolumeEvaluationListener-Protocol.h"
#import "TXLivePlayListener-Protocol.h"

@class NSString, WXLivePlayConfig;
@protocol IAudioVolumeEvaluationListener, TXLivePlayListener;

@interface WXLivePlayer : TXLivePlayer <IAudioVolumeEvaluationListener, TXLivePlayListener>
{
    BOOL _isTRTC;
    NSString *_userId;
    NSString *_streamType;
    struct NSView *_remoteView;
    BOOL _trtcPlaying;
    BOOL _muteAudio;
    BOOL _muteVideo;
    int _renderMode;
    int _renderRotation;
    int _audioRoute;
    BOOL _playBeginNotified;
    CDUnknownBlockType _audioVolumeEvaluationListener;
    WXLivePlayConfig *_config;
    id <IAudioVolumeEvaluationListener> _audioVolumeListener;
    id <TXLivePlayListener> _playListener;
}

@property(nonatomic) __weak id <TXLivePlayListener> playListener; // @synthesize playListener=_playListener;
@property(nonatomic) __weak id <IAudioVolumeEvaluationListener> audioVolumeListener; // @synthesize audioVolumeListener=_audioVolumeListener;
- (void).cxx_destruct;
- (id)dictionaryFromQuery:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (BOOL)parseURL:(id)arg1;
- (void)onNetStatus:(id)arg1;
- (void)onPlayEvent:(int)arg1 withParam:(id)arg2;
- (void)onAudioVolumeEvaluation:(int)arg1;
- (void)resetParams;
- (void)setAudioVolumeEvaluationListener:(CDUnknownBlockType)arg1;
- (void)showVideoDebugLog:(BOOL)arg1;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (void)setMute:(BOOL)arg1;
- (void)setAudioRoute:(long long)arg1;
- (void)setRenderRotation:(long long)arg1;
- (void)setRenderMode:(long long)arg1;
- (void)removeVideoWidget;
- (void)setupVideoWidget:(struct CGRect)arg1 containView:(id)arg2 insertIndex:(unsigned int)arg3;
- (int)stopPlay;
- (int)startPlay:(id)arg1 type:(long long)arg2;
- (BOOL)isPlaying;
- (void)setDelegate:(id)arg1;
- (void)muteVideo:(BOOL)arg1;
- (void)muteAudio:(BOOL)arg1;
- (void)setPlayURL:(id)arg1;
@property(copy, nonatomic) WXLivePlayConfig *config; // @synthesize config=_config;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

