//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class SKBuiltinString_t;

@interface KeyBuffer : PBGeneratedMessage
{
    unsigned int hasSynckey:1;
    SKBuiltinString_t *synckey;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetSynckey:) SKBuiltinString_t *synckey; // @synthesize synckey;
@property(readonly, nonatomic) BOOL hasSynckey; // @synthesize hasSynckey;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
