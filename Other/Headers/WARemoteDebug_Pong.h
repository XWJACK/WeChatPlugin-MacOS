//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WARemoteDebug_Pong : PBGeneratedMessage
{
    unsigned int hasPingId:1;
    unsigned int hasNetworkType:1;
    unsigned int hasPayload:1;
    unsigned int networkType;
    unsigned long long pingId;
    NSString *payload;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetPayload:) NSString *payload; // @synthesize payload;
@property(readonly, nonatomic) BOOL hasPayload; // @synthesize hasPayload;
@property(nonatomic, setter=SetNetworkType:) unsigned int networkType; // @synthesize networkType;
@property(readonly, nonatomic) BOOL hasNetworkType; // @synthesize hasNetworkType;
@property(nonatomic, setter=SetPingId:) unsigned long long pingId; // @synthesize pingId;
@property(readonly, nonatomic) BOOL hasPingId; // @synthesize hasPingId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

