//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface VoipGetRoomInfoReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasRoomId:1;
    unsigned int hasRoomKey:1;
    unsigned int hasCallerUserName:1;
    unsigned int hasType:1;
    unsigned int hasTimestamp64:1;
    int roomId;
    unsigned int type;
    BaseRequest *baseRequest;
    long long roomKey;
    NSString *callerUserName;
    unsigned long long timestamp64;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetTimestamp64:) unsigned long long timestamp64; // @synthesize timestamp64;
@property(readonly, nonatomic) BOOL hasTimestamp64; // @synthesize hasTimestamp64;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetCallerUserName:) NSString *callerUserName; // @synthesize callerUserName;
@property(readonly, nonatomic) BOOL hasCallerUserName; // @synthesize hasCallerUserName;
@property(nonatomic, setter=SetRoomKey:) long long roomKey; // @synthesize roomKey;
@property(readonly, nonatomic) BOOL hasRoomKey; // @synthesize hasRoomKey;
@property(nonatomic, setter=SetRoomId:) int roomId; // @synthesize roomId;
@property(readonly, nonatomic) BOOL hasRoomId; // @synthesize hasRoomId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

