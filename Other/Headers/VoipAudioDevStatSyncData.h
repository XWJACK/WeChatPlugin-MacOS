//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface VoipAudioDevStatSyncData : PBGeneratedMessage
{
    unsigned int hasAudioDevOccupiedStat:1;
    unsigned int hasAudioDevOccupiedApp:1;
    unsigned int audioDevOccupiedStat;
    unsigned int audioDevOccupiedApp;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetAudioDevOccupiedApp:) unsigned int audioDevOccupiedApp; // @synthesize audioDevOccupiedApp;
@property(readonly, nonatomic) BOOL hasAudioDevOccupiedApp; // @synthesize hasAudioDevOccupiedApp;
@property(nonatomic, setter=SetAudioDevOccupiedStat:) unsigned int audioDevOccupiedStat; // @synthesize audioDevOccupiedStat;
@property(readonly, nonatomic) BOOL hasAudioDevOccupiedStat; // @synthesize hasAudioDevOccupiedStat;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

