//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, SKBuiltinBuffer_t, VoipMultiRelayData;

@interface VoipInviteResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRoomId:1;
    unsigned int hasAddrCount:1;
    unsigned int hasRoomKey:1;
    unsigned int hasRoomMemberId:1;
    unsigned int hasRelayData:1;
    unsigned int hasNetQualityCnt:1;
    unsigned int hasAudioTsdfBeyond3G:1;
    unsigned int hasAudioTsdfEdge:1;
    unsigned int hasPassthroughQosAlgorithm:1;
    unsigned int hasFastPlayRepair:1;
    unsigned int hasVoipSyncInterval:1;
    unsigned int hasNewP2S:1;
    unsigned int hasAudioDtx:1;
    unsigned int hasTcpCnt:1;
    unsigned int hasSwitchInterval:1;
    unsigned int hasHw264SvrCfg:1;
    unsigned int hasAudioEnableRmioAndS3A:1;
    unsigned int hasAudioEnableSpkec:1;
    unsigned int hasAudioAecMode5:1;
    unsigned int hasSvrCfgListV:1;
    unsigned int hasEnableDataAccept:1;
    unsigned int hasAudioEnableConfigMic:1;
    unsigned int hasReInviteInterval:1;
    unsigned int hasSwitchFlag:1;
    unsigned int hasWifiScanInterval:1;
    unsigned int hasQosLocalMaxBr:1;
    unsigned int hasAudioEnableXnoiseSup:1;
    unsigned int hasIntStrategyIssued:1;
    int roomId;
    int addrCount;
    int roomMemberId;
    int netQualityCnt;
    int audioTsdfBeyond3G;
    int audioTsdfEdge;
    int passthroughQosAlgorithm;
    int fastPlayRepair;
    int voipSyncInterval;
    int newP2S;
    int audioDtx;
    unsigned int tcpCnt;
    unsigned int switchInterval;
    int hw264SvrCfg;
    int audioEnableRmioAndS3A;
    int audioEnableSpkec;
    unsigned int audioAecMode5;
    unsigned int svrCfgListV;
    unsigned int enableDataAccept;
    unsigned int audioEnableConfigMic;
    unsigned int reInviteInterval;
    unsigned int switchFlag;
    unsigned int wifiScanInterval;
    unsigned int qosLocalMaxBr;
    int audioEnableXnoiseSup;
    BaseResponse *baseResponse;
    NSMutableArray *mutableAddrListList;
    long long roomKey;
    VoipMultiRelayData *relayData;
    NSMutableArray *mutableNetQualityListList;
    SKBuiltinBuffer_t *intStrategyIssued;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetIntStrategyIssued:) SKBuiltinBuffer_t *intStrategyIssued; // @synthesize intStrategyIssued;
@property(readonly, nonatomic) BOOL hasIntStrategyIssued; // @synthesize hasIntStrategyIssued;
@property(nonatomic, setter=SetAudioEnableXnoiseSup:) int audioEnableXnoiseSup; // @synthesize audioEnableXnoiseSup;
@property(readonly, nonatomic) BOOL hasAudioEnableXnoiseSup; // @synthesize hasAudioEnableXnoiseSup;
@property(nonatomic, setter=SetQosLocalMaxBr:) unsigned int qosLocalMaxBr; // @synthesize qosLocalMaxBr;
@property(readonly, nonatomic) BOOL hasQosLocalMaxBr; // @synthesize hasQosLocalMaxBr;
@property(nonatomic, setter=SetWifiScanInterval:) unsigned int wifiScanInterval; // @synthesize wifiScanInterval;
@property(readonly, nonatomic) BOOL hasWifiScanInterval; // @synthesize hasWifiScanInterval;
@property(nonatomic, setter=SetSwitchFlag:) unsigned int switchFlag; // @synthesize switchFlag;
@property(readonly, nonatomic) BOOL hasSwitchFlag; // @synthesize hasSwitchFlag;
@property(nonatomic, setter=SetReInviteInterval:) unsigned int reInviteInterval; // @synthesize reInviteInterval;
@property(readonly, nonatomic) BOOL hasReInviteInterval; // @synthesize hasReInviteInterval;
@property(nonatomic, setter=SetAudioEnableConfigMic:) unsigned int audioEnableConfigMic; // @synthesize audioEnableConfigMic;
@property(readonly, nonatomic) BOOL hasAudioEnableConfigMic; // @synthesize hasAudioEnableConfigMic;
@property(nonatomic, setter=SetEnableDataAccept:) unsigned int enableDataAccept; // @synthesize enableDataAccept;
@property(readonly, nonatomic) BOOL hasEnableDataAccept; // @synthesize hasEnableDataAccept;
@property(nonatomic, setter=SetSvrCfgListV:) unsigned int svrCfgListV; // @synthesize svrCfgListV;
@property(readonly, nonatomic) BOOL hasSvrCfgListV; // @synthesize hasSvrCfgListV;
@property(nonatomic, setter=SetAudioAecMode5:) unsigned int audioAecMode5; // @synthesize audioAecMode5;
@property(readonly, nonatomic) BOOL hasAudioAecMode5; // @synthesize hasAudioAecMode5;
@property(nonatomic, setter=SetAudioEnableSpkec:) int audioEnableSpkec; // @synthesize audioEnableSpkec;
@property(readonly, nonatomic) BOOL hasAudioEnableSpkec; // @synthesize hasAudioEnableSpkec;
@property(nonatomic, setter=SetAudioEnableRmioAndS3A:) int audioEnableRmioAndS3A; // @synthesize audioEnableRmioAndS3A;
@property(readonly, nonatomic) BOOL hasAudioEnableRmioAndS3A; // @synthesize hasAudioEnableRmioAndS3A;
@property(nonatomic, setter=SetHw264SvrCfg:) int hw264SvrCfg; // @synthesize hw264SvrCfg;
@property(readonly, nonatomic) BOOL hasHw264SvrCfg; // @synthesize hasHw264SvrCfg;
@property(nonatomic, setter=SetSwitchInterval:) unsigned int switchInterval; // @synthesize switchInterval;
@property(readonly, nonatomic) BOOL hasSwitchInterval; // @synthesize hasSwitchInterval;
@property(nonatomic, setter=SetTcpCnt:) unsigned int tcpCnt; // @synthesize tcpCnt;
@property(readonly, nonatomic) BOOL hasTcpCnt; // @synthesize hasTcpCnt;
@property(nonatomic, setter=SetAudioDtx:) int audioDtx; // @synthesize audioDtx;
@property(readonly, nonatomic) BOOL hasAudioDtx; // @synthesize hasAudioDtx;
@property(nonatomic, setter=SetNewP2S:) int newP2S; // @synthesize newP2S;
@property(readonly, nonatomic) BOOL hasNewP2S; // @synthesize hasNewP2S;
@property(nonatomic, setter=SetVoipSyncInterval:) int voipSyncInterval; // @synthesize voipSyncInterval;
@property(readonly, nonatomic) BOOL hasVoipSyncInterval; // @synthesize hasVoipSyncInterval;
@property(nonatomic, setter=SetFastPlayRepair:) int fastPlayRepair; // @synthesize fastPlayRepair;
@property(readonly, nonatomic) BOOL hasFastPlayRepair; // @synthesize hasFastPlayRepair;
@property(nonatomic, setter=SetPassthroughQosAlgorithm:) int passthroughQosAlgorithm; // @synthesize passthroughQosAlgorithm;
@property(readonly, nonatomic) BOOL hasPassthroughQosAlgorithm; // @synthesize hasPassthroughQosAlgorithm;
@property(nonatomic, setter=SetAudioTsdfEdge:) int audioTsdfEdge; // @synthesize audioTsdfEdge;
@property(readonly, nonatomic) BOOL hasAudioTsdfEdge; // @synthesize hasAudioTsdfEdge;
@property(nonatomic, setter=SetAudioTsdfBeyond3G:) int audioTsdfBeyond3G; // @synthesize audioTsdfBeyond3G;
@property(readonly, nonatomic) BOOL hasAudioTsdfBeyond3G; // @synthesize hasAudioTsdfBeyond3G;
@property(retain, nonatomic) NSMutableArray *mutableNetQualityListList; // @synthesize mutableNetQualityListList;
@property(nonatomic, setter=SetNetQualityCnt:) int netQualityCnt; // @synthesize netQualityCnt;
@property(readonly, nonatomic) BOOL hasNetQualityCnt; // @synthesize hasNetQualityCnt;
@property(retain, nonatomic, setter=SetRelayData:) VoipMultiRelayData *relayData; // @synthesize relayData;
@property(readonly, nonatomic) BOOL hasRelayData; // @synthesize hasRelayData;
@property(nonatomic, setter=SetRoomMemberId:) int roomMemberId; // @synthesize roomMemberId;
@property(readonly, nonatomic) BOOL hasRoomMemberId; // @synthesize hasRoomMemberId;
@property(nonatomic, setter=SetRoomKey:) long long roomKey; // @synthesize roomKey;
@property(readonly, nonatomic) BOOL hasRoomKey; // @synthesize hasRoomKey;
@property(retain, nonatomic) NSMutableArray *mutableAddrListList; // @synthesize mutableAddrListList;
@property(nonatomic, setter=SetAddrCount:) int addrCount; // @synthesize addrCount;
@property(readonly, nonatomic) BOOL hasAddrCount; // @synthesize hasAddrCount;
@property(nonatomic, setter=SetRoomId:) int roomId; // @synthesize roomId;
@property(readonly, nonatomic) BOOL hasRoomId; // @synthesize hasRoomId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addNetQualityList:(id)arg1;
- (void)addNetQualityListFromArray:(id)arg1;
- (void)addAddrList:(id)arg1;
- (void)addAddrListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *netQualityList; // @dynamic netQualityList;
- (id)netQualityListList;
@property(retain, nonatomic) NSMutableArray *addrList; // @dynamic addrList;
- (id)addrListList;
- (id)init;

@end
