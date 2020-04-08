//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface VoipNatDetectSvr : PBGeneratedMessage
{
    unsigned int hasIsp:1;
    unsigned int hasAddrCnt:1;
    unsigned int isp;
    unsigned int addrCnt;
    NSMutableArray *mutableAddrsList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableAddrsList; // @synthesize mutableAddrsList;
@property(nonatomic, setter=SetAddrCnt:) unsigned int addrCnt; // @synthesize addrCnt;
@property(readonly, nonatomic) BOOL hasAddrCnt; // @synthesize hasAddrCnt;
@property(nonatomic, setter=SetIsp:) unsigned int isp; // @synthesize isp;
@property(readonly, nonatomic) BOOL hasIsp; // @synthesize hasIsp;
- (void).cxx_destruct;
- (void)addAddrs:(id)arg1;
- (void)addAddrsFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *addrs; // @dynamic addrs;
- (id)addrsList;
- (id)init;

@end

