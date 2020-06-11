//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSMutableArray, NSString, WXCPbVoiceConf, WXCPbVoiceGroupInfo;

@interface WXCPbSCCreateVoiceGroupResp : PBGeneratedMessage
{
    unsigned int hasGroupId:1;
    unsigned int hasRoomid:1;
    unsigned int hasRoomkey:1;
    unsigned int hasRouteId:1;
    unsigned int hasConf:1;
    unsigned int hasClientGroupId:1;
    unsigned int hasEncryptSwitch:1;
    unsigned int hasGroupInfo:1;
    unsigned int hasBusinessid:1;
    unsigned int hasRetrySeconds:1;
    unsigned int hasHelloFreqSeconds:1;
    unsigned int hasTcpstarttime:1;
    unsigned int hasEncrypttype:1;
    unsigned int hasAudioencodetype:1;
    unsigned int hasEncryptkeybuf:1;
    unsigned int hasMemberid:1;
    unsigned int hasVideoencrypttype:1;
    int roomid;
    unsigned int routeId;
    int encryptSwitch;
    unsigned int businessid;
    unsigned int retrySeconds;
    unsigned int helloFreqSeconds;
    int tcpstarttime;
    int encrypttype;
    int audioencodetype;
    int memberid;
    unsigned int videoencrypttype;
    NSString *groupId;
    long long roomkey;
    NSMutableArray *mutableAddrlistList;
    NSMutableArray *mutableGrpUsrProfileListList;
    WXCPbVoiceConf *conf;
    NSString *clientGroupId;
    NSMutableArray *mutableGrpMemListList;
    NSMutableArray *mutableHeadSignsList;
    WXCPbVoiceGroupInfo *groupInfo;
    NSMutableArray *mutableLiveaddrlistList;
    NSMutableArray *mutableExitMembersList;
    NSMutableArray *mutableTcpaddrlistList;
    NSData *encryptkeybuf;
    NSMutableArray *mutableGeneralpolicysList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetVideoencrypttype:) unsigned int videoencrypttype; // @synthesize videoencrypttype;
@property(readonly, nonatomic) BOOL hasVideoencrypttype; // @synthesize hasVideoencrypttype;
@property(retain, nonatomic) NSMutableArray *mutableGeneralpolicysList; // @synthesize mutableGeneralpolicysList;
@property(nonatomic, setter=SetMemberid:) int memberid; // @synthesize memberid;
@property(readonly, nonatomic) BOOL hasMemberid; // @synthesize hasMemberid;
@property(retain, nonatomic, setter=SetEncryptkeybuf:) NSData *encryptkeybuf; // @synthesize encryptkeybuf;
@property(readonly, nonatomic) BOOL hasEncryptkeybuf; // @synthesize hasEncryptkeybuf;
@property(nonatomic, setter=SetAudioencodetype:) int audioencodetype; // @synthesize audioencodetype;
@property(readonly, nonatomic) BOOL hasAudioencodetype; // @synthesize hasAudioencodetype;
@property(nonatomic, setter=SetEncrypttype:) int encrypttype; // @synthesize encrypttype;
@property(readonly, nonatomic) BOOL hasEncrypttype; // @synthesize hasEncrypttype;
@property(nonatomic, setter=SetTcpstarttime:) int tcpstarttime; // @synthesize tcpstarttime;
@property(readonly, nonatomic) BOOL hasTcpstarttime; // @synthesize hasTcpstarttime;
@property(retain, nonatomic) NSMutableArray *mutableTcpaddrlistList; // @synthesize mutableTcpaddrlistList;
@property(retain, nonatomic) NSMutableArray *mutableExitMembersList; // @synthesize mutableExitMembersList;
@property(nonatomic, setter=SetHelloFreqSeconds:) unsigned int helloFreqSeconds; // @synthesize helloFreqSeconds;
@property(readonly, nonatomic) BOOL hasHelloFreqSeconds; // @synthesize hasHelloFreqSeconds;
@property(nonatomic, setter=SetRetrySeconds:) unsigned int retrySeconds; // @synthesize retrySeconds;
@property(readonly, nonatomic) BOOL hasRetrySeconds; // @synthesize hasRetrySeconds;
@property(retain, nonatomic) NSMutableArray *mutableLiveaddrlistList; // @synthesize mutableLiveaddrlistList;
@property(nonatomic, setter=SetBusinessid:) unsigned int businessid; // @synthesize businessid;
@property(readonly, nonatomic) BOOL hasBusinessid; // @synthesize hasBusinessid;
@property(retain, nonatomic, setter=SetGroupInfo:) WXCPbVoiceGroupInfo *groupInfo; // @synthesize groupInfo;
@property(readonly, nonatomic) BOOL hasGroupInfo; // @synthesize hasGroupInfo;
@property(retain, nonatomic) NSMutableArray *mutableHeadSignsList; // @synthesize mutableHeadSignsList;
@property(nonatomic, setter=SetEncryptSwitch:) int encryptSwitch; // @synthesize encryptSwitch;
@property(readonly, nonatomic) BOOL hasEncryptSwitch; // @synthesize hasEncryptSwitch;
@property(retain, nonatomic) NSMutableArray *mutableGrpMemListList; // @synthesize mutableGrpMemListList;
@property(retain, nonatomic, setter=SetClientGroupId:) NSString *clientGroupId; // @synthesize clientGroupId;
@property(readonly, nonatomic) BOOL hasClientGroupId; // @synthesize hasClientGroupId;
@property(retain, nonatomic, setter=SetConf:) WXCPbVoiceConf *conf; // @synthesize conf;
@property(readonly, nonatomic) BOOL hasConf; // @synthesize hasConf;
@property(retain, nonatomic) NSMutableArray *mutableGrpUsrProfileListList; // @synthesize mutableGrpUsrProfileListList;
@property(retain, nonatomic) NSMutableArray *mutableAddrlistList; // @synthesize mutableAddrlistList;
@property(nonatomic, setter=SetRouteId:) unsigned int routeId; // @synthesize routeId;
@property(readonly, nonatomic) BOOL hasRouteId; // @synthesize hasRouteId;
@property(nonatomic, setter=SetRoomkey:) long long roomkey; // @synthesize roomkey;
@property(readonly, nonatomic) BOOL hasRoomkey; // @synthesize hasRoomkey;
@property(nonatomic, setter=SetRoomid:) int roomid; // @synthesize roomid;
@property(readonly, nonatomic) BOOL hasRoomid; // @synthesize hasRoomid;
@property(retain, nonatomic, setter=SetGroupId:) NSString *groupId; // @synthesize groupId;
@property(readonly, nonatomic) BOOL hasGroupId; // @synthesize hasGroupId;
- (void).cxx_destruct;
- (void)addGeneralpolicysFromArray:(id)arg1;
- (void)addGeneralpolicys:(unsigned int)arg1;
- (void)addTcpaddrlist:(id)arg1;
- (void)addTcpaddrlistFromArray:(id)arg1;
- (void)addExitMembers:(id)arg1;
- (void)addExitMembersFromArray:(id)arg1;
- (void)addLiveaddrlist:(id)arg1;
- (void)addLiveaddrlistFromArray:(id)arg1;
- (void)addHeadSignsFromArray:(id)arg1;
- (void)addHeadSigns:(int)arg1;
- (void)addGrpMemList:(id)arg1;
- (void)addGrpMemListFromArray:(id)arg1;
- (void)addGrpUsrProfileList:(id)arg1;
- (void)addGrpUsrProfileListFromArray:(id)arg1;
- (void)addAddrlist:(id)arg1;
- (void)addAddrlistFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *generalpolicys; // @dynamic generalpolicys;
- (id)generalpolicysList;
@property(retain, nonatomic) NSMutableArray *tcpaddrlist; // @dynamic tcpaddrlist;
- (id)tcpaddrlistList;
@property(retain, nonatomic) NSMutableArray *exitMembers; // @dynamic exitMembers;
- (id)exitMembersList;
@property(retain, nonatomic) NSMutableArray *liveaddrlist; // @dynamic liveaddrlist;
- (id)liveaddrlistList;
@property(retain, nonatomic) NSMutableArray *headSigns; // @dynamic headSigns;
- (id)headSignsList;
@property(retain, nonatomic) NSMutableArray *grpMemList; // @dynamic grpMemList;
- (id)grpMemListList;
@property(retain, nonatomic) NSMutableArray *grpUsrProfileList; // @dynamic grpUsrProfileList;
- (id)grpUsrProfileListList;
@property(retain, nonatomic) NSMutableArray *addrlist; // @dynamic addrlist;
- (id)addrlistList;
- (id)init;

@end

