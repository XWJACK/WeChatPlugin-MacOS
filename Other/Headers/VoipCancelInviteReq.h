//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, VoipStatReportData;

@interface VoipCancelInviteReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasFromUsername:1;
    unsigned int hasRoomId:1;
    unsigned int hasRoomKey:1;
    unsigned int hasToUserName:1;
    unsigned int hasReportData:1;
    unsigned int hasInviteType:1;
    unsigned int hasTimestamp64:1;
    unsigned int hasInviteId:1;
    unsigned int hasCancelType:1;
    int roomId;
    unsigned int inviteType;
    unsigned int inviteId;
    unsigned int cancelType;
    BaseRequest *baseRequest;
    NSString *fromUsername;
    long long roomKey;
    NSString *toUserName;
    VoipStatReportData *reportData;
    unsigned long long timestamp64;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetCancelType:) unsigned int cancelType; // @synthesize cancelType;
@property(readonly, nonatomic) BOOL hasCancelType; // @synthesize hasCancelType;
@property(nonatomic, setter=SetInviteId:) unsigned int inviteId; // @synthesize inviteId;
@property(readonly, nonatomic) BOOL hasInviteId; // @synthesize hasInviteId;
@property(nonatomic, setter=SetTimestamp64:) unsigned long long timestamp64; // @synthesize timestamp64;
@property(readonly, nonatomic) BOOL hasTimestamp64; // @synthesize hasTimestamp64;
@property(nonatomic, setter=SetInviteType:) unsigned int inviteType; // @synthesize inviteType;
@property(readonly, nonatomic) BOOL hasInviteType; // @synthesize hasInviteType;
@property(retain, nonatomic, setter=SetReportData:) VoipStatReportData *reportData; // @synthesize reportData;
@property(readonly, nonatomic) BOOL hasReportData; // @synthesize hasReportData;
@property(retain, nonatomic, setter=SetToUserName:) NSString *toUserName; // @synthesize toUserName;
@property(readonly, nonatomic) BOOL hasToUserName; // @synthesize hasToUserName;
@property(nonatomic, setter=SetRoomKey:) long long roomKey; // @synthesize roomKey;
@property(readonly, nonatomic) BOOL hasRoomKey; // @synthesize hasRoomKey;
@property(nonatomic, setter=SetRoomId:) int roomId; // @synthesize roomId;
@property(readonly, nonatomic) BOOL hasRoomId; // @synthesize hasRoomId;
@property(retain, nonatomic, setter=SetFromUsername:) NSString *fromUsername; // @synthesize fromUsername;
@property(readonly, nonatomic) BOOL hasFromUsername; // @synthesize hasFromUsername;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

