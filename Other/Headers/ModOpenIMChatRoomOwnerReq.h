//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, OpenIMChatRoomMemberInReq;

@interface ModOpenIMChatRoomOwnerReq : PBGeneratedMessage
{
    unsigned int hasRoomName:1;
    unsigned int hasNewOwner:1;
    NSString *roomName;
    OpenIMChatRoomMemberInReq *newOwner;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetNewOwner:) OpenIMChatRoomMemberInReq *newOwner; // @synthesize newOwner;
@property(readonly, nonatomic) BOOL hasNewOwner; // @synthesize hasNewOwner;
@property(retain, nonatomic, setter=SetRoomName:) NSString *roomName; // @synthesize roomName;
@property(readonly, nonatomic) BOOL hasRoomName; // @synthesize hasRoomName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
