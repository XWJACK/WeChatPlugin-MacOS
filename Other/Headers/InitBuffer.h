//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface InitBuffer : PBGeneratedMessage
{
    unsigned int hasMaxSyncKey:1;
    unsigned int maxSyncKey;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetMaxSyncKey:) unsigned int maxSyncKey; // @synthesize maxSyncKey;
@property(readonly, nonatomic) BOOL hasMaxSyncKey; // @synthesize hasMaxSyncKey;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

