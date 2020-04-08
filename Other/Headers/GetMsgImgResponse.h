//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, SKBuiltinBuffer_t, SKBuiltinString_t;

@interface GetMsgImgResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasMsgId:1;
    unsigned int hasFromUserName:1;
    unsigned int hasToUserName:1;
    unsigned int hasTotalLen:1;
    unsigned int hasStartPos:1;
    unsigned int hasDataLen:1;
    unsigned int hasData:1;
    SKBuiltinBuffer_t *data_;
    unsigned int hasNewMsgId:1;
    unsigned int msgId;
    unsigned int totalLen;
    unsigned int startPos;
    unsigned int dataLen;
    BaseResponse *baseResponse;
    SKBuiltinString_t *fromUserName;
    SKBuiltinString_t *toUserName;
    unsigned long long newMsgId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetNewMsgId:) unsigned long long newMsgId; // @synthesize newMsgId;
@property(readonly, nonatomic) BOOL hasNewMsgId; // @synthesize hasNewMsgId;
@property(retain, nonatomic, setter=SetData:) SKBuiltinBuffer_t *data; // @synthesize data=data_;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
@property(nonatomic, setter=SetDataLen:) unsigned int dataLen; // @synthesize dataLen;
@property(readonly, nonatomic) BOOL hasDataLen; // @synthesize hasDataLen;
@property(nonatomic, setter=SetStartPos:) unsigned int startPos; // @synthesize startPos;
@property(readonly, nonatomic) BOOL hasStartPos; // @synthesize hasStartPos;
@property(nonatomic, setter=SetTotalLen:) unsigned int totalLen; // @synthesize totalLen;
@property(readonly, nonatomic) BOOL hasTotalLen; // @synthesize hasTotalLen;
@property(retain, nonatomic, setter=SetToUserName:) SKBuiltinString_t *toUserName; // @synthesize toUserName;
@property(readonly, nonatomic) BOOL hasToUserName; // @synthesize hasToUserName;
@property(retain, nonatomic, setter=SetFromUserName:) SKBuiltinString_t *fromUserName; // @synthesize fromUserName;
@property(readonly, nonatomic) BOOL hasFromUserName; // @synthesize hasFromUserName;
@property(nonatomic, setter=SetMsgId:) unsigned int msgId; // @synthesize msgId;
@property(readonly, nonatomic) BOOL hasMsgId; // @synthesize hasMsgId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

