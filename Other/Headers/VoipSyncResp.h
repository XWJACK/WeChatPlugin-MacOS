//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, SKBuiltinBuffer_t, VoipCmdList;

@interface VoipSyncResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRoomId:1;
    unsigned int hasKeyBuf:1;
    unsigned int hasCmdList:1;
    unsigned int hasContinueFlag:1;
    unsigned int hasRoomKey:1;
    int roomId;
    int continueFlag;
    BaseResponse *baseResponse;
    SKBuiltinBuffer_t *keyBuf;
    VoipCmdList *cmdList;
    long long roomKey;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetRoomKey:) long long roomKey; // @synthesize roomKey;
@property(readonly, nonatomic) BOOL hasRoomKey; // @synthesize hasRoomKey;
@property(nonatomic, setter=SetContinueFlag:) int continueFlag; // @synthesize continueFlag;
@property(readonly, nonatomic) BOOL hasContinueFlag; // @synthesize hasContinueFlag;
@property(retain, nonatomic, setter=SetCmdList:) VoipCmdList *cmdList; // @synthesize cmdList;
@property(readonly, nonatomic) BOOL hasCmdList; // @synthesize hasCmdList;
@property(retain, nonatomic, setter=SetKeyBuf:) SKBuiltinBuffer_t *keyBuf; // @synthesize keyBuf;
@property(readonly, nonatomic) BOOL hasKeyBuf; // @synthesize hasKeyBuf;
@property(nonatomic, setter=SetRoomId:) int roomId; // @synthesize roomId;
@property(readonly, nonatomic) BOOL hasRoomId; // @synthesize hasRoomId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
