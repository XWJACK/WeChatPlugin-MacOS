//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BackupStartGeneralInfo, NSString;

@interface BackupStartResponse : PBGeneratedMessage
{
    unsigned int hasId:1;
    NSString *id_;
    unsigned int hasTotalCount:1;
    unsigned int hasTotalSize:1;
    unsigned int hasStatus:1;
    unsigned int hasNetworkState:1;
    unsigned int hasBigDataSize:1;
    unsigned int hasGeneralInfo:1;
    int status;
    unsigned int networkState;
    unsigned long long totalCount;
    unsigned long long totalSize;
    unsigned long long bigDataSize;
    BackupStartGeneralInfo *generalInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetGeneralInfo:) BackupStartGeneralInfo *generalInfo; // @synthesize generalInfo;
@property(readonly, nonatomic) BOOL hasGeneralInfo; // @synthesize hasGeneralInfo;
@property(nonatomic, setter=SetBigDataSize:) unsigned long long bigDataSize; // @synthesize bigDataSize;
@property(readonly, nonatomic) BOOL hasBigDataSize; // @synthesize hasBigDataSize;
@property(nonatomic, setter=SetNetworkState:) unsigned int networkState; // @synthesize networkState;
@property(readonly, nonatomic) BOOL hasNetworkState; // @synthesize hasNetworkState;
@property(nonatomic, setter=SetStatus:) int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(nonatomic, setter=SetTotalSize:) unsigned long long totalSize; // @synthesize totalSize;
@property(readonly, nonatomic) BOOL hasTotalSize; // @synthesize hasTotalSize;
@property(nonatomic, setter=SetTotalCount:) unsigned long long totalCount; // @synthesize totalCount;
@property(readonly, nonatomic) BOOL hasTotalCount; // @synthesize hasTotalCount;
@property(retain, nonatomic, setter=SetId:) NSString *id; // @synthesize id=id_;
@property(readonly, nonatomic) BOOL hasId; // @synthesize hasId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

