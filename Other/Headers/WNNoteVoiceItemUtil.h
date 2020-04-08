//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNNoteItemUtilBase.h"

#import "MMVoiceCommonPlayerDelegate-Protocol.h"

@class MMVoiceCommonPlayer, NSString, WNNoteVoiceItem;

@interface WNNoteVoiceItemUtil : WNNoteItemUtilBase <MMVoiceCommonPlayerDelegate>
{
    BOOL _bRecording;
    BOOL _isRecording;
    WNNoteVoiceItem *_voiceItem;
    MMVoiceCommonPlayer *_voicePlayer;
}

@property(retain, nonatomic) MMVoiceCommonPlayer *voicePlayer; // @synthesize voicePlayer=_voicePlayer;
@property(retain, nonatomic) WNNoteVoiceItem *voiceItem; // @synthesize voiceItem=_voiceItem;
@property(readonly, nonatomic) BOOL isRecording; // @synthesize isRecording=_isRecording;
- (void).cxx_destruct;
- (void)voicePlayDidUpdateCurrentTime:(double)arg1;
- (void)voicePlayDidStop;
- (void)stopPlaying;
- (void)startAudioPlayerWidthVoiceItem:(id)arg1;
- (void)insertItem:(id)arg1 isUpdate:(BOOL)arg2 isConfigData:(BOOL)arg3;
- (void)onClickItem:(id)arg1;
- (id)getIconSelectedName;
- (id)getIconHLName;
- (id)getIconName;
- (id)getTitle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

