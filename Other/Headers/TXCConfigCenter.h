//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface TXCConfigCenter : NSObject
{
    BOOL _isLoaded;
    BOOL _isUpdating;
    NSString *_appID;
    NSDictionary *_appIDConfig;
    double _updateFrequency;
}

+ (id)shareInstance;
@property double updateFrequency; // @synthesize updateFrequency=_updateFrequency;
@property BOOL isUpdating; // @synthesize isUpdating=_isUpdating;
@property BOOL isLoaded; // @synthesize isLoaded=_isLoaded;
@property(copy) NSDictionary *appIDConfig; // @synthesize appIDConfig=_appIDConfig;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (void)parseServerConfig:(id)arg1;
- (void)parseServerResponse:(id)arg1;
- (void)updateServerConfig;
- (BOOL)needUpdate;
- (void)loadConfig;
- (void)checkConfig;
- (BOOL)getHostInDNSWhiteList:(id)arg1;
- (id)getGlobalConfig:(id)arg1 key:(id)arg2;
- (id)getCloudConfig:(id)arg1 key:(id)arg2;
- (long long)getCloudConfigLong:(id)arg1 key:(id)arg2;
- (float)getCloudConfigDouble:(id)arg1 key:(id)arg2;
- (id)getCloudConfigString:(id)arg1 key:(id)arg2;
- (id)init;

@end

