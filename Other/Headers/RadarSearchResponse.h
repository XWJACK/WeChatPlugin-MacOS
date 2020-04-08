//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface RadarSearchResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasTicket:1;
    unsigned int hasOpCode:1;
    unsigned int hasMemberCount:1;
    unsigned int opCode;
    unsigned int memberCount;
    BaseResponse *baseResponse;
    NSString *ticket;
    NSMutableArray *mutableMemberListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableMemberListList; // @synthesize mutableMemberListList;
@property(nonatomic, setter=SetMemberCount:) unsigned int memberCount; // @synthesize memberCount;
@property(readonly, nonatomic) BOOL hasMemberCount; // @synthesize hasMemberCount;
@property(nonatomic, setter=SetOpCode:) unsigned int opCode; // @synthesize opCode;
@property(readonly, nonatomic) BOOL hasOpCode; // @synthesize hasOpCode;
@property(retain, nonatomic, setter=SetTicket:) NSString *ticket; // @synthesize ticket;
@property(readonly, nonatomic) BOOL hasTicket; // @synthesize hasTicket;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addMemberList:(id)arg1;
- (void)addMemberListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *memberList; // @dynamic memberList;
- (id)memberListList;
- (id)init;

@end

