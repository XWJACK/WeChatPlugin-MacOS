//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WCAudioSessionDelegate;

@interface WCAudioSession : NSObject
{
    BOOL _m_otherPlayingBeforeActive;
    id <WCAudioSessionDelegate> _m_delegate;
}

+ (id)shareInstance;
@property(nonatomic) BOOL m_otherPlayingBeforeActive; // @synthesize m_otherPlayingBeforeActive=_m_otherPlayingBeforeActive;
@property(nonatomic) __weak id <WCAudioSessionDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)handleRouteChange:(id)arg1;
- (unsigned long long)currentCategoryId;
- (float)getOutputVolume;
- (void)activePlaybackMixWithOthers;
- (void)activeMixWithOtherAudio;
- (BOOL)isOtherAudioPlaying;
- (unsigned long long)getCurrentAudioMode;
- (void)enableBluetoothInput;
- (void)setSpeaker:(BOOL)arg1;
- (void)setCategroy:(unsigned long long)arg1;
- (void)setActive:(BOOL)arg1;
- (void)restart;
- (void)updateDelegate:(id)arg1;
- (BOOL)otherPlayingBeforeActive;
- (void)dealloc;

@end

