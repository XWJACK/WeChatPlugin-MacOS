//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface LbsResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasContactCount:1;
    unsigned int hasState:1;
    unsigned int hasFlushTime:1;
    unsigned int hasIsShowRoom:1;
    unsigned int hasRoomMemberCount:1;
    unsigned int contactCount;
    unsigned int state;
    unsigned int flushTime;
    unsigned int isShowRoom;
    unsigned int roomMemberCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableContactListList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetRoomMemberCount:) unsigned int roomMemberCount; // @synthesize roomMemberCount;
@property(readonly, nonatomic) BOOL hasRoomMemberCount; // @synthesize hasRoomMemberCount;
@property(nonatomic, setter=SetIsShowRoom:) unsigned int isShowRoom; // @synthesize isShowRoom;
@property(readonly, nonatomic) BOOL hasIsShowRoom; // @synthesize hasIsShowRoom;
@property(nonatomic, setter=SetFlushTime:) unsigned int flushTime; // @synthesize flushTime;
@property(readonly, nonatomic) BOOL hasFlushTime; // @synthesize hasFlushTime;
@property(nonatomic, setter=SetState:) unsigned int state; // @synthesize state;
@property(readonly, nonatomic) BOOL hasState; // @synthesize hasState;
@property(retain, nonatomic) NSMutableArray *mutableContactListList; // @synthesize mutableContactListList;
@property(nonatomic, setter=SetContactCount:) unsigned int contactCount; // @synthesize contactCount;
@property(readonly, nonatomic) BOOL hasContactCount; // @synthesize hasContactCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addContactList:(id)arg1;
- (void)addContactListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *contactList; // @dynamic contactList;
- (id)contactListList;
- (id)init;

@end

