//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface BackupHeartBeatRequest : PBGeneratedMessage
{
    unsigned int hasAck:1;
    unsigned long long ack;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetAck:) unsigned long long ack; // @synthesize ack;
@property(readonly, nonatomic) BOOL hasAck; // @synthesize hasAck;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

