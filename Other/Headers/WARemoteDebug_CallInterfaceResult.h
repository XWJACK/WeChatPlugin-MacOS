//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WARemoteDebug_CallInterfaceResult : PBGeneratedMessage
{
    unsigned int hasRet:1;
    unsigned int hasCallId:1;
    unsigned int callId;
    NSString *ret;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetCallId:) unsigned int callId; // @synthesize callId;
@property(readonly, nonatomic) BOOL hasCallId; // @synthesize hasCallId;
@property(retain, nonatomic, setter=SetRet:) NSString *ret; // @synthesize ret;
@property(readonly, nonatomic) BOOL hasRet; // @synthesize hasRet;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
