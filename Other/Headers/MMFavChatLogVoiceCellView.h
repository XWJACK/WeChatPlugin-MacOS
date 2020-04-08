//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMChatLogVoiceCellView.h"

#import "MMVoiceCommonPlayerDelegate-Protocol.h"

@class MMVoiceCommonPlayer, NSString;

@interface MMFavChatLogVoiceCellView : MMChatLogVoiceCellView <MMVoiceCommonPlayerDelegate>
{
    MMVoiceCommonPlayer *_voicePlayer;
}

@property(retain, nonatomic) MMVoiceCommonPlayer *voicePlayer; // @synthesize voicePlayer=_voicePlayer;
- (void).cxx_destruct;
- (void)playerShouldStopWhenReceiveStopPlayNotification:(id)arg1;
- (void)voicePlayDidUpdateCurrentTime:(double)arg1;
- (void)voicePlayDidStop;
- (void)layoutVoiceView;
- (void)populateWithFavItemDataField:(id)arg1 parentFavItem:(id)arg2;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

