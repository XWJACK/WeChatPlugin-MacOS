//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WXCPbCSRejectEnterVoiceRoomReq : PBGeneratedMessage
{
    unsigned int hasGroupId:1;
    unsigned int hasRoomid:1;
    unsigned int hasRoomkey:1;
    unsigned int hasReason:1;
    unsigned int hasClientGroupId:1;
    int roomid;
    int reason;
    NSString *groupId;
    long long roomkey;
    NSString *clientGroupId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetClientGroupId:) NSString *clientGroupId; // @synthesize clientGroupId;
@property(readonly, nonatomic) BOOL hasClientGroupId; // @synthesize hasClientGroupId;
@property(nonatomic, setter=SetReason:) int reason; // @synthesize reason;
@property(readonly, nonatomic) BOOL hasReason; // @synthesize hasReason;
@property(nonatomic, setter=SetRoomkey:) long long roomkey; // @synthesize roomkey;
@property(readonly, nonatomic) BOOL hasRoomkey; // @synthesize hasRoomkey;
@property(nonatomic, setter=SetRoomid:) int roomid; // @synthesize roomid;
@property(readonly, nonatomic) BOOL hasRoomid; // @synthesize hasRoomid;
@property(retain, nonatomic, setter=SetGroupId:) NSString *groupId; // @synthesize groupId;
@property(readonly, nonatomic) BOOL hasGroupId; // @synthesize hasGroupId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

