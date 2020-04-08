//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, VoipStatReportData;

@interface VoipStatReportReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasReportData:1;
    unsigned int hasChannelReportData:1;
    unsigned int hasDialReportData:1;
    unsigned int hasEngineReportData:1;
    unsigned int hasTimestamp64:1;
    unsigned int hasEngineExtReportData:1;
    unsigned int hasNatReportCnt:1;
    unsigned int hasDirectConnCnt:1;
    unsigned int hasRelayConnCnt:1;
    unsigned int hasEngineMpReportCnt:1;
    unsigned int natReportCnt;
    unsigned int directConnCnt;
    unsigned int relayConnCnt;
    unsigned int engineMpReportCnt;
    BaseRequest *baseRequest;
    VoipStatReportData *reportData;
    VoipStatReportData *channelReportData;
    VoipStatReportData *dialReportData;
    VoipStatReportData *engineReportData;
    unsigned long long timestamp64;
    VoipStatReportData *engineExtReportData;
    NSMutableArray *mutableNatReportList;
    NSMutableArray *mutableDirectConnReportsList;
    NSMutableArray *mutableRelayConnReportsList;
    NSMutableArray *mutableEngineMpReportsList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableEngineMpReportsList; // @synthesize mutableEngineMpReportsList;
@property(nonatomic, setter=SetEngineMpReportCnt:) unsigned int engineMpReportCnt; // @synthesize engineMpReportCnt;
@property(readonly, nonatomic) BOOL hasEngineMpReportCnt; // @synthesize hasEngineMpReportCnt;
@property(retain, nonatomic) NSMutableArray *mutableRelayConnReportsList; // @synthesize mutableRelayConnReportsList;
@property(nonatomic, setter=SetRelayConnCnt:) unsigned int relayConnCnt; // @synthesize relayConnCnt;
@property(readonly, nonatomic) BOOL hasRelayConnCnt; // @synthesize hasRelayConnCnt;
@property(retain, nonatomic) NSMutableArray *mutableDirectConnReportsList; // @synthesize mutableDirectConnReportsList;
@property(nonatomic, setter=SetDirectConnCnt:) unsigned int directConnCnt; // @synthesize directConnCnt;
@property(readonly, nonatomic) BOOL hasDirectConnCnt; // @synthesize hasDirectConnCnt;
@property(retain, nonatomic) NSMutableArray *mutableNatReportList; // @synthesize mutableNatReportList;
@property(nonatomic, setter=SetNatReportCnt:) unsigned int natReportCnt; // @synthesize natReportCnt;
@property(readonly, nonatomic) BOOL hasNatReportCnt; // @synthesize hasNatReportCnt;
@property(retain, nonatomic, setter=SetEngineExtReportData:) VoipStatReportData *engineExtReportData; // @synthesize engineExtReportData;
@property(readonly, nonatomic) BOOL hasEngineExtReportData; // @synthesize hasEngineExtReportData;
@property(nonatomic, setter=SetTimestamp64:) unsigned long long timestamp64; // @synthesize timestamp64;
@property(readonly, nonatomic) BOOL hasTimestamp64; // @synthesize hasTimestamp64;
@property(retain, nonatomic, setter=SetEngineReportData:) VoipStatReportData *engineReportData; // @synthesize engineReportData;
@property(readonly, nonatomic) BOOL hasEngineReportData; // @synthesize hasEngineReportData;
@property(retain, nonatomic, setter=SetDialReportData:) VoipStatReportData *dialReportData; // @synthesize dialReportData;
@property(readonly, nonatomic) BOOL hasDialReportData; // @synthesize hasDialReportData;
@property(retain, nonatomic, setter=SetChannelReportData:) VoipStatReportData *channelReportData; // @synthesize channelReportData;
@property(readonly, nonatomic) BOOL hasChannelReportData; // @synthesize hasChannelReportData;
@property(retain, nonatomic, setter=SetReportData:) VoipStatReportData *reportData; // @synthesize reportData;
@property(readonly, nonatomic) BOOL hasReportData; // @synthesize hasReportData;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addEngineMpReports:(id)arg1;
- (void)addEngineMpReportsFromArray:(id)arg1;
- (void)addRelayConnReports:(id)arg1;
- (void)addRelayConnReportsFromArray:(id)arg1;
- (void)addDirectConnReports:(id)arg1;
- (void)addDirectConnReportsFromArray:(id)arg1;
- (void)addNatReport:(id)arg1;
- (void)addNatReportFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *engineMpReports; // @dynamic engineMpReports;
- (id)engineMpReportsList;
@property(retain, nonatomic) NSMutableArray *relayConnReports; // @dynamic relayConnReports;
- (id)relayConnReportsList;
@property(retain, nonatomic) NSMutableArray *directConnReports; // @dynamic directConnReports;
- (id)directConnReportsList;
@property(retain, nonatomic) NSMutableArray *natReport; // @dynamic natReport;
- (id)natReportList;
- (id)init;

@end

