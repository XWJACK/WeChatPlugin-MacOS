//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXCBasePlayer.h"

#import "TXIAudioPlayDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol TXIAudioPlayDelegate, TXINotifyDelegate;

@interface TXCAudioPlayer : TXCBasePlayer <TXIAudioPlayDelegate>
{
    NSMutableArray *_playPackets;
    struct TXCAudioSpeeder *_audioSpeeder;
    struct shared_ptr<TXCAudioJitterBuffer> _pAudioJitterBuffer;
    BOOL _isHWAcceleration;
    _Bool _autojustCache;
    _Bool _isRealTimePlay;
    BOOL _enableVolumeLevelCal;
    float _cacheTime;
    float _autoAdjustMaxCache;
    float _autoAdjustMinCache;
    int _sampleRate;
    int _channels;
    id <TXIAudioPlayDelegate> _dataDelegate;
    id <TXINotifyDelegate> _notifyDelegate;
    NSString *_userID;
}

+ (float)getOutputDeviceVolume;
+ (void)setOutputDeviceVolume:(float)arg1;
+ (unsigned int)getOutputDeviceId;
+ (void)setOutputDeviceId:(unsigned int)arg1;
+ (BOOL)canMixBGM;
+ (void)setAudioMode:(long long)arg1;
@property(nonatomic) BOOL enableVolumeLevelCal; // @synthesize enableVolumeLevelCal=_enableVolumeLevelCal;
@property(readonly, nonatomic) int channels; // @synthesize channels=_channels;
@property(readonly, nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool isRealTimePlay; // @synthesize isRealTimePlay=_isRealTimePlay;
@property(nonatomic) float autoAdjustMinCache; // @synthesize autoAdjustMinCache=_autoAdjustMinCache;
@property(nonatomic) float autoAdjustMaxCache; // @synthesize autoAdjustMaxCache=_autoAdjustMaxCache;
@property(nonatomic) _Bool autojustCache; // @synthesize autojustCache=_autojustCache;
@property(nonatomic) float cacheTime; // @synthesize cacheTime=_cacheTime;
@property(nonatomic) __weak id <TXINotifyDelegate> notifyDelegate; // @synthesize notifyDelegate=_notifyDelegate;
@property(nonatomic) __weak id <TXIAudioPlayDelegate> dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(nonatomic) BOOL isHWAcceleration; // @synthesize isHWAcceleration=_isHWAcceleration;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onAudioJitterStateNotify:(int)arg1;
@property(readonly) unsigned int volumeLevel;
- (id)queryData:(int)arg1;
- (long long)stopPlay;
- (long long)resetPlay;
- (long long)resumePlay;
- (long long)pausePlay;
- (long long)startPlay;
- (void)setMuteInSpeaker:(BOOL)arg1;
- (void)setIsMute:(BOOL)arg1;
- (void)setVolume:(int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
