//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "IWAAudioPlayerDelegate-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, WAAppTask;
@protocol IJSContextPluginDelegate, OS_dispatch_queue;

@interface WAJSContextPlugin_AudioPlayer : WAJSContextPluginBase <IWAAudioPlayerDelegate>
{
    struct ALCcontext_struct *_alcContext;
    BOOL _bResumeContextOnWXBecomingActive;
    BOOL _isNeedResumeWXMusic;
    BOOL _obeyMuteSwitch;
    BOOL _mixWithOthers;
    id <IJSContextPluginDelegate> _resultDelegate;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_fileQueue;
    NSMutableDictionary *_playerDic;
}

@property(nonatomic) BOOL mixWithOthers; // @synthesize mixWithOthers=_mixWithOthers;
@property(nonatomic) BOOL obeyMuteSwitch; // @synthesize obeyMuteSwitch=_obeyMuteSwitch;
@property(nonatomic) BOOL isNeedResumeWXMusic; // @synthesize isNeedResumeWXMusic=_isNeedResumeWXMusic;
@property(retain, nonatomic) NSMutableDictionary *playerDic; // @synthesize playerDic=_playerDic;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(nonatomic) __weak id <IJSContextPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)resumeMusicIfNeed:(BOOL)arg1;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)asyncClearAudioCache;
- (void)resumeAudioContext;
- (void)interruptAllPlayer;
- (BOOL)hasPlayerPlayingOrWaiting;
- (void)forcePauseAllPlayer;
- (void)stopAllPlayer;
- (void)activeAudioSession;
- (void)removeObserver;
- (void)addObserver;
@property(readonly, nonatomic) WAAppTask *task;
@property(readonly, nonatomic) BOOL isGameApp;
- (void)onDownloadAudioData:(id)arg1 src:(id)arg2;
- (void)setCurrentContext;
- (void)onPlayerStateChange:(long long)arg1 audioId:(id)arg2 errCode:(long long)arg3 errMsg:(id)arg4;
- (BOOL)isPlayingAudio;
- (id)getPlayerWithAudioId:(id)arg1;
- (double)getPlayerVolume:(id)arg1;
- (double)getPlayerBufferTime:(id)arg1;
- (double)getPlayerStartTime:(id)arg1;
- (id)getPlayerSrc:(id)arg1;
- (double)getPlayerCurtime:(id)arg1;
- (double)getPlayerDuration:(id)arg1;
- (BOOL)isPlayerIdle:(id)arg1;
- (BOOL)isPlayerWaiting:(id)arg1;
- (BOOL)isPlayerPlaying:(id)arg1;
- (BOOL)isPlayerPaused:(id)arg1;
- (BOOL)isPlayerSet:(id)arg1;
- (void)destoryPlayer:(id)arg1;
- (void)stopPlayer:(id)arg1;
- (void)seekPlayer:(id)arg1 seekTime:(float)arg2;
- (void)pausePlayer:(id)arg1;
- (void)playPlayer:(id)arg1;
- (id)generateUrlFromSrc:(id)arg1 fileData:(id *)arg2;
- (void)setPlayerState:(id)arg1 src:(id)arg2 startTime:(double)arg3 autoPlay:(BOOL)arg4 loop:(BOOL)arg5 obeyMuteSwitch:(BOOL)arg6 volume:(double)arg7;
- (BOOL)isAudioPlayerExist:(id)arg1;
- (id)createAudioInstance;
- (void)setInnerAudioSession:(BOOL)arg1 mixWithOthers:(BOOL)arg2;
- (id)localPathByAudioData:(id)arg1 pathExtension:(id)arg2;
- (id)audioCacheDataPathForSrc:(id)arg1;
- (id)audioTmpPathByfileName:(id)arg1;
- (id)audioTmpRootPath;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
