//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "AVAudioPlayerDelegate-Protocol.h"
#import "AVAudioRecorderDelegate-Protocol.h"
#import "FavAudioPlayerExt-Protocol.h"
#import "MMService-Protocol.h"

@class AVAudioPlayer, AVAudioRecorder, MMTimer, NSString;

@interface WeNoteAudioMgr : MMService <AVAudioRecorderDelegate, AVAudioPlayerDelegate, FavAudioPlayerExt, MMService>
{
    BOOL _recording;
    BOOL _playing;
    AVAudioPlayer *_audioPlayer;
    AVAudioRecorder *_audioRecoder;
    double _lowPassResults;
    MMTimer *_levelTimer;
    NSString *_filePath;
    NSString *_curPlayingObjectId;
}

@property(retain, nonatomic) NSString *curPlayingObjectId; // @synthesize curPlayingObjectId=_curPlayingObjectId;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) MMTimer *levelTimer; // @synthesize levelTimer=_levelTimer;
@property(nonatomic) double lowPassResults; // @synthesize lowPassResults=_lowPassResults;
@property(retain, nonatomic) AVAudioRecorder *audioRecoder; // @synthesize audioRecoder=_audioRecoder;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) BOOL playing; // @synthesize playing=_playing;
@property(readonly, nonatomic) BOOL recording; // @synthesize recording=_recording;
- (void).cxx_destruct;
- (void)OnEndPlay:(id)arg1 isForceStop:(BOOL)arg2;
- (void)stopPlay:(id)arg1;
- (id)curPlayId;
- (void)startPlayWithObjectId:(id)arg1 LocalPath:(id)arg2 Fmt:(unsigned int)arg3 Len:(int)arg4 lastPlayTime:(double)arg5;
- (void)stopTimer;
- (void)enableMettering:(BOOL)arg1;
- (void)checkRecordingMeters:(id)arg1;
- (id)getTempFilePath;
- (void)deleteImageFromFile:(id)arg1;
- (id)imageDataWriteToUploadTmp:(id)arg1;
- (void)prepareForRecording;
- (unsigned char)stopAudioRecord;
- (unsigned char)startAudioRecord;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

