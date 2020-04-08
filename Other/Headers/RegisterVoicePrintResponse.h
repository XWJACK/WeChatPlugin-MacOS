//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, VoicePieceCtx;

@interface RegisterVoicePrintResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasResgisterRet:1;
    unsigned int hasNextStep:1;
    unsigned int hasNextPiece:1;
    unsigned int hasVoiceTicket:1;
    int resgisterRet;
    unsigned int nextStep;
    unsigned int voiceTicket;
    BaseResponse *baseResponse;
    VoicePieceCtx *nextPiece;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetVoiceTicket:) unsigned int voiceTicket; // @synthesize voiceTicket;
@property(readonly, nonatomic) BOOL hasVoiceTicket; // @synthesize hasVoiceTicket;
@property(retain, nonatomic, setter=SetNextPiece:) VoicePieceCtx *nextPiece; // @synthesize nextPiece;
@property(readonly, nonatomic) BOOL hasNextPiece; // @synthesize hasNextPiece;
@property(nonatomic, setter=SetNextStep:) unsigned int nextStep; // @synthesize nextStep;
@property(readonly, nonatomic) BOOL hasNextStep; // @synthesize hasNextStep;
@property(nonatomic, setter=SetResgisterRet:) int resgisterRet; // @synthesize resgisterRet;
@property(readonly, nonatomic) BOOL hasResgisterRet; // @synthesize hasResgisterRet;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
