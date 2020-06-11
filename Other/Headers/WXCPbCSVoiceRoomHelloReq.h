//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSMutableArray, NSString;

@interface WXCPbCSVoiceRoomHelloReq : PBGeneratedMessage
{
    unsigned int hasGroupId:1;
    unsigned int hasRoomid:1;
    unsigned int hasRoomkey:1;
    unsigned int hasMemberId:1;
    unsigned int hasCallData:1;
    unsigned int hasMemoryCost:1;
    int roomid;
    int memberId;
    int callData;
    NSString *groupId;
    long long roomkey;
    NSData *memoryCost;
    NSMutableArray *mutableRelayReportList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableRelayReportList; // @synthesize mutableRelayReportList;
@property(retain, nonatomic, setter=SetMemoryCost:) NSData *memoryCost; // @synthesize memoryCost;
@property(readonly, nonatomic) BOOL hasMemoryCost; // @synthesize hasMemoryCost;
@property(nonatomic, setter=SetCallData:) int callData; // @synthesize callData;
@property(readonly, nonatomic) BOOL hasCallData; // @synthesize hasCallData;
@property(nonatomic, setter=SetMemberId:) int memberId; // @synthesize memberId;
@property(readonly, nonatomic) BOOL hasMemberId; // @synthesize hasMemberId;
@property(nonatomic, setter=SetRoomkey:) long long roomkey; // @synthesize roomkey;
@property(readonly, nonatomic) BOOL hasRoomkey; // @synthesize hasRoomkey;
@property(nonatomic, setter=SetRoomid:) int roomid; // @synthesize roomid;
@property(readonly, nonatomic) BOOL hasRoomid; // @synthesize hasRoomid;
@property(retain, nonatomic, setter=SetGroupId:) NSString *groupId; // @synthesize groupId;
@property(readonly, nonatomic) BOOL hasGroupId; // @synthesize hasGroupId;
- (void).cxx_destruct;
- (void)addRelayReport:(id)arg1;
- (void)addRelayReportFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *relayReport; // @dynamic relayReport;
- (id)relayReportList;
- (id)init;

@end
