//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WxaJumpInfo : PBGeneratedMessage
{
    unsigned int hasSourceAppid:1;
    unsigned int hasSourceType:1;
    unsigned int hasAgentId:1;
    unsigned int sourceType;
    NSString *sourceAppid;
    NSString *agentId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetAgentId:) NSString *agentId; // @synthesize agentId;
@property(readonly, nonatomic) BOOL hasAgentId; // @synthesize hasAgentId;
@property(nonatomic, setter=SetSourceType:) unsigned int sourceType; // @synthesize sourceType;
@property(readonly, nonatomic) BOOL hasSourceType; // @synthesize hasSourceType;
@property(retain, nonatomic, setter=SetSourceAppid:) NSString *sourceAppid; // @synthesize sourceAppid;
@property(readonly, nonatomic) BOOL hasSourceAppid; // @synthesize hasSourceAppid;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

