//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonPlayer.h"

#import "SimpleAudioBufferDelegate-Protocol.h"

@class NSString, SimpleAudioPlayer;
@protocol AudioDataRead;

@interface SilkAudioPlayer : CommonPlayer <SimpleAudioBufferDelegate>
{
    int _m_sampleRate;
    struct AudioDecoder *m_decoder;
    SimpleAudioPlayer *_m_audioPlayer;
    NSString *_m_audioPath;
    id <AudioDataRead> _m_audioData;
}

@property(nonatomic) int m_sampleRate; // @synthesize m_sampleRate=_m_sampleRate;
@property(retain, nonatomic) id <AudioDataRead> m_audioData; // @synthesize m_audioData=_m_audioData;
@property(retain, nonatomic) NSString *m_audioPath; // @synthesize m_audioPath=_m_audioPath;
@property(retain, nonatomic) SimpleAudioPlayer *m_audioPlayer; // @synthesize m_audioPlayer=_m_audioPlayer;
@property(nonatomic) struct AudioDecoder *m_decoder; // @synthesize m_decoder;
- (void).cxx_destruct;
- (unsigned int)channlesPerFrame;
- (unsigned int)framesPerPacket;
- (unsigned int)bitsPerChannel;
- (double)simpleRateForBuffer;
- (void)onAudioBufferPlayEnd;
- (unsigned int)fillPcmBuffer:(short *)arg1 startPacket:(long long)arg2 bufferSize:(unsigned int)arg3;
- (void)prepareSilkBuffer;
- (double)duration;
- (void)start;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)updatePath:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

