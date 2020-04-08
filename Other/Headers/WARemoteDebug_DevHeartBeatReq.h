//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class WARemoteDebug_BaseReq;

@interface WARemoteDebug_DevHeartBeatReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasRecvAck:1;
    unsigned int recvAck;
    WARemoteDebug_BaseReq *baseRequest;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetRecvAck:) unsigned int recvAck; // @synthesize recvAck;
@property(readonly, nonatomic) BOOL hasRecvAck; // @synthesize hasRecvAck;
@property(retain, nonatomic, setter=SetBaseRequest:) WARemoteDebug_BaseReq *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

