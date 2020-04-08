//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, WxaAppBaseInfo, WxaClientPublicLibInfo, WxaJumpInfo, WxaPluginInfo, WxaWebLaunchInfo;

@interface LaunchWxaAppRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasAppId:1;
    unsigned int hasWxaAppInfo:1;
    unsigned int hasRequestType:1;
    unsigned int hasPluginInfo:1;
    unsigned int hasPublicLib:1;
    unsigned int hasWebLaunchInfo:1;
    unsigned int hasJumpInfo:1;
    unsigned int hasPerformanceLevel:1;
    unsigned int hasInstanceId:1;
    unsigned int requestType;
    int performanceLevel;
    BaseRequest *baseRequest;
    NSString *appId;
    WxaAppBaseInfo *wxaAppInfo;
    WxaPluginInfo *pluginInfo;
    WxaClientPublicLibInfo *publicLib;
    WxaWebLaunchInfo *webLaunchInfo;
    WxaJumpInfo *jumpInfo;
    NSString *instanceId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetInstanceId:) NSString *instanceId; // @synthesize instanceId;
@property(readonly, nonatomic) BOOL hasInstanceId; // @synthesize hasInstanceId;
@property(nonatomic, setter=SetPerformanceLevel:) int performanceLevel; // @synthesize performanceLevel;
@property(readonly, nonatomic) BOOL hasPerformanceLevel; // @synthesize hasPerformanceLevel;
@property(retain, nonatomic, setter=SetJumpInfo:) WxaJumpInfo *jumpInfo; // @synthesize jumpInfo;
@property(readonly, nonatomic) BOOL hasJumpInfo; // @synthesize hasJumpInfo;
@property(retain, nonatomic, setter=SetWebLaunchInfo:) WxaWebLaunchInfo *webLaunchInfo; // @synthesize webLaunchInfo;
@property(readonly, nonatomic) BOOL hasWebLaunchInfo; // @synthesize hasWebLaunchInfo;
@property(retain, nonatomic, setter=SetPublicLib:) WxaClientPublicLibInfo *publicLib; // @synthesize publicLib;
@property(readonly, nonatomic) BOOL hasPublicLib; // @synthesize hasPublicLib;
@property(retain, nonatomic, setter=SetPluginInfo:) WxaPluginInfo *pluginInfo; // @synthesize pluginInfo;
@property(readonly, nonatomic) BOOL hasPluginInfo; // @synthesize hasPluginInfo;
@property(nonatomic, setter=SetRequestType:) unsigned int requestType; // @synthesize requestType;
@property(readonly, nonatomic) BOOL hasRequestType; // @synthesize hasRequestType;
@property(retain, nonatomic, setter=SetWxaAppInfo:) WxaAppBaseInfo *wxaAppInfo; // @synthesize wxaAppInfo;
@property(readonly, nonatomic) BOOL hasWxaAppInfo; // @synthesize hasWxaAppInfo;
@property(retain, nonatomic, setter=SetAppId:) NSString *appId; // @synthesize appId;
@property(readonly, nonatomic) BOOL hasAppId; // @synthesize hasAppId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

