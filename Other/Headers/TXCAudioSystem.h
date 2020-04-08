//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXIAudioCoreEventDelegate-Protocol.h"
#import "TXIAudioTestDelegate-Protocol.h"

@class NSString;
@protocol TXIAudioSystemEventDelegate, TXIAudioSystemSpeakerTestDelegate;

@interface TXCAudioSystem : NSObject <TXIAudioTestDelegate, TXIAudioCoreEventDelegate>
{
    id <TXIAudioSystemEventDelegate> _delegate;
    id <TXIAudioSystemSpeakerTestDelegate> _audioTestDelegate;
    long long _systemVolumeType;
}

+ (id)sharedInstance;
@property(nonatomic) long long systemVolumeType; // @synthesize systemVolumeType=_systemVolumeType;
@property(nonatomic) __weak id <TXIAudioSystemSpeakerTestDelegate> audioTestDelegate; // @synthesize audioTestDelegate=_audioTestDelegate;
@property(nonatomic) __weak id <TXIAudioSystemEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onAudioCorePlayTestFinished:(id)arg1;
- (void)audioCore:(id)arg1 onEvent:(int)arg2 info:(id)arg3;
- (void)_finishTest;
- (void)stopTest;
- (void)startTestWithFile:(id)arg1;
- (void)clean;
@property(readonly, nonatomic) BOOL isHeadset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
