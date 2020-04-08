//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASyncBaseCmd.h"

#import "PBCoding-Protocol.h"

@class NSString, WAInfoData;

@interface WASyncGetCodeCmd : WASyncBaseCmd <PBCoding>
{
    BOOL isEncrypt;
    BOOL isRetry;
    unsigned int squence;
    unsigned int maxRetryCount;
    unsigned int retryInterval;
    unsigned int appVersion;
    unsigned int currentRetryCount;
    unsigned int lastGetCodeTime;
    unsigned int reportId;
    NSString *username;
    NSString *appid;
    unsigned long long cmdType;
    unsigned long long networkType;
    NSString *md5;
    WAInfoData *_infoData;
}

+ (void)initialize;
+ (void)_initPBTableOfWASyncGetCodeCmd;
@property(retain, nonatomic) WAInfoData *infoData; // @synthesize infoData=_infoData;
- (void)setReportId:(unsigned int)arg1;
- (unsigned int)reportId;
@property(nonatomic) unsigned int lastGetCodeTime; // @synthesize lastGetCodeTime;
@property(nonatomic) unsigned int currentRetryCount; // @synthesize currentRetryCount;
@property(nonatomic) BOOL isRetry; // @synthesize isRetry;
@property(copy, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion;
@property(nonatomic) BOOL isEncrypt; // @synthesize isEncrypt;
@property(nonatomic) unsigned int retryInterval; // @synthesize retryInterval;
@property(nonatomic) unsigned int maxRetryCount; // @synthesize maxRetryCount;
@property(nonatomic) unsigned long long networkType; // @synthesize networkType;
- (void)setSquence:(unsigned int)arg1;
- (unsigned int)squence;
- (void)setCmdType:(unsigned long long)arg1;
- (unsigned long long)cmdType;
- (void)setAppid:(id)arg1;
- (id)appid;
- (void)setUsername:(id)arg1;
- (id)username;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)getDescribableNetworkType;
- (BOOL)canRetryNow;
- (BOOL)isAppInfoDataFromThisGetCodeCmd:(id)arg1;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

