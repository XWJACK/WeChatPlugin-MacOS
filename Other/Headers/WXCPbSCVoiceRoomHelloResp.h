//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WXCPbSCVoiceRoomHelloResp : PBGeneratedMessage
{
    unsigned int hasGroupId:1;
    unsigned int hasRoomid:1;
    unsigned int hasRoomkey:1;
    int roomid;
    NSString *groupId;
    long long roomkey;
}

+ (id)parseFromData:(id)arg1;
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

