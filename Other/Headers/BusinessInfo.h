//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData;

@interface BusinessInfo : PBGeneratedMessage
{
    unsigned int hasBusinessId:1;
    unsigned int hasBusinessBuff:1;
    unsigned long long businessId;
    NSData *businessBuff;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetBusinessBuff:) NSData *businessBuff; // @synthesize businessBuff;
@property(readonly, nonatomic) BOOL hasBusinessBuff; // @synthesize hasBusinessBuff;
@property(nonatomic, setter=SetBusinessId:) unsigned long long businessId; // @synthesize businessId;
@property(readonly, nonatomic) BOOL hasBusinessId; // @synthesize hasBusinessId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

