//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface VoipAddr : PBGeneratedMessage
{
    unsigned int hasIp:1;
    unsigned int hasPort:1;
    unsigned int hasIpStr:1;
    int ip;
    int port;
    NSString *ipStr;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetIpStr:) NSString *ipStr; // @synthesize ipStr;
@property(readonly, nonatomic) BOOL hasIpStr; // @synthesize hasIpStr;
@property(nonatomic, setter=SetPort:) int port; // @synthesize port;
@property(readonly, nonatomic) BOOL hasPort; // @synthesize hasPort;
@property(nonatomic, setter=SetIp:) int ip; // @synthesize ip;
@property(readonly, nonatomic) BOOL hasIp; // @synthesize hasIp;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
