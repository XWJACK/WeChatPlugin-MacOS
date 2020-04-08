//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, QQFriendList, QQGroupList;

@interface GetQQGroupResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasOpType:1;
    unsigned int hasQqgroup:1;
    unsigned int hasQqfriend:1;
    unsigned int opType;
    BaseResponse *baseResponse;
    QQGroupList *qqgroup;
    QQFriendList *qqfriend;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetQqfriend:) QQFriendList *qqfriend; // @synthesize qqfriend;
@property(readonly, nonatomic) BOOL hasQqfriend; // @synthesize hasQqfriend;
@property(retain, nonatomic, setter=SetQqgroup:) QQGroupList *qqgroup; // @synthesize qqgroup;
@property(readonly, nonatomic) BOOL hasQqgroup; // @synthesize hasQqgroup;
@property(nonatomic, setter=SetOpType:) unsigned int opType; // @synthesize opType;
@property(readonly, nonatomic) BOOL hasOpType; // @synthesize hasOpType;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
