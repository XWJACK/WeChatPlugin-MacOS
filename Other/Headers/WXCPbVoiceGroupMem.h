//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSMutableArray, NSString, WXCPbVoiceClientScene;

@interface WXCPbVoiceGroupMem : PBGeneratedMessage
{
    unsigned int hasUuid:1;
    unsigned int hasInviteuuid:1;
    unsigned int hasStatus:1;
    unsigned int hasReason:1;
    unsigned int hasMemberId:1;
    unsigned int hasInviteTime:1;
    unsigned int hasClientScene:1;
    unsigned int hasMemberSession:1;
    unsigned int hasOpenClientId:1;
    unsigned int hasWxUserName:1;
    unsigned int hasWxInviteUserName:1;
    unsigned int hasMailAuthBuf:1;
    unsigned int uuid;
    unsigned int inviteuuid;
    unsigned int status;
    unsigned int reason;
    int memberId;
    unsigned int inviteTime;
    unsigned int memberSession;
    WXCPbVoiceClientScene *clientScene;
    NSString *openClientId;
    NSMutableArray *mutableClientSceneExtListList;
    NSString *wxUserName;
    NSString *wxInviteUserName;
    NSData *mailAuthBuf;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetMailAuthBuf:) NSData *mailAuthBuf; // @synthesize mailAuthBuf;
@property(readonly, nonatomic) BOOL hasMailAuthBuf; // @synthesize hasMailAuthBuf;
@property(retain, nonatomic, setter=SetWxInviteUserName:) NSString *wxInviteUserName; // @synthesize wxInviteUserName;
@property(readonly, nonatomic) BOOL hasWxInviteUserName; // @synthesize hasWxInviteUserName;
@property(retain, nonatomic, setter=SetWxUserName:) NSString *wxUserName; // @synthesize wxUserName;
@property(readonly, nonatomic) BOOL hasWxUserName; // @synthesize hasWxUserName;
@property(retain, nonatomic) NSMutableArray *mutableClientSceneExtListList; // @synthesize mutableClientSceneExtListList;
@property(retain, nonatomic, setter=SetOpenClientId:) NSString *openClientId; // @synthesize openClientId;
@property(readonly, nonatomic) BOOL hasOpenClientId; // @synthesize hasOpenClientId;
@property(nonatomic, setter=SetMemberSession:) unsigned int memberSession; // @synthesize memberSession;
@property(readonly, nonatomic) BOOL hasMemberSession; // @synthesize hasMemberSession;
@property(retain, nonatomic, setter=SetClientScene:) WXCPbVoiceClientScene *clientScene; // @synthesize clientScene;
@property(readonly, nonatomic) BOOL hasClientScene; // @synthesize hasClientScene;
@property(nonatomic, setter=SetInviteTime:) unsigned int inviteTime; // @synthesize inviteTime;
@property(readonly, nonatomic) BOOL hasInviteTime; // @synthesize hasInviteTime;
@property(nonatomic, setter=SetMemberId:) int memberId; // @synthesize memberId;
@property(readonly, nonatomic) BOOL hasMemberId; // @synthesize hasMemberId;
@property(nonatomic, setter=SetReason:) unsigned int reason; // @synthesize reason;
@property(readonly, nonatomic) BOOL hasReason; // @synthesize hasReason;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(nonatomic, setter=SetInviteuuid:) unsigned int inviteuuid; // @synthesize inviteuuid;
@property(readonly, nonatomic) BOOL hasInviteuuid; // @synthesize hasInviteuuid;
@property(nonatomic, setter=SetUuid:) unsigned int uuid; // @synthesize uuid;
@property(readonly, nonatomic) BOOL hasUuid; // @synthesize hasUuid;
- (void).cxx_destruct;
- (void)addClientSceneExtList:(id)arg1;
- (void)addClientSceneExtListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *clientSceneExtList; // @dynamic clientSceneExtList;
- (id)clientSceneExtListList;
- (id)init;
- (id)description;

@end

