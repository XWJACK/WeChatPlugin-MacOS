//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WAAppTaskReferrerInfo, WAAppTaskTransitInfo, WAAppTaskWebLaunchInfo, WAApptaskPluginResInfo, WAPageFlowAppInfo, WAPageFlowSessionInfo;

@interface WAAppTaskExtInfo : NSObject
{
    BOOL _beSpecificPage;
    BOOL _isRemoteMode;
    BOOL _ignoreDomain;
    unsigned int _channelType;
    unsigned int _proxyPort;
    unsigned int _supportCompressAlgo;
    WAAppTaskReferrerInfo *_referrerInfo;
    WAApptaskPluginResInfo *_pluginResInfo;
    WAAppTaskWebLaunchInfo *_webLaunchInfo;
    WAAppTaskTransitInfo *_transitInfo;
    NSString *_chatName;
    NSString *_shareKey;
    WAPageFlowAppInfo *_taskAppInfo;
    WAPageFlowSessionInfo *_taskSessionInfo;
    NSString *_opensdkAppID;
    NSString *_userName;
    NSString *_roomID;
    NSString *_pkgInfo;
    NSString *_debugToolUrlString;
    NSString *_thumbUrl;
    NSString *_thumbAesKey;
    NSMutableDictionary *_dynamicInfo;
}

@property(retain, nonatomic) NSMutableDictionary *dynamicInfo; // @synthesize dynamicInfo=_dynamicInfo;
@property(copy, nonatomic) NSString *thumbAesKey; // @synthesize thumbAesKey=_thumbAesKey;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *debugToolUrlString; // @synthesize debugToolUrlString=_debugToolUrlString;
@property(nonatomic) unsigned int supportCompressAlgo; // @synthesize supportCompressAlgo=_supportCompressAlgo;
@property(nonatomic) BOOL ignoreDomain; // @synthesize ignoreDomain=_ignoreDomain;
@property(nonatomic) unsigned int proxyPort; // @synthesize proxyPort=_proxyPort;
@property(nonatomic) unsigned int channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) NSString *pkgInfo; // @synthesize pkgInfo=_pkgInfo;
@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) BOOL isRemoteMode; // @synthesize isRemoteMode=_isRemoteMode;
@property(copy, nonatomic) NSString *opensdkAppID; // @synthesize opensdkAppID=_opensdkAppID;
@property(retain, nonatomic) WAPageFlowSessionInfo *taskSessionInfo; // @synthesize taskSessionInfo=_taskSessionInfo;
@property(retain, nonatomic) WAPageFlowAppInfo *taskAppInfo; // @synthesize taskAppInfo=_taskAppInfo;
@property(nonatomic) BOOL beSpecificPage; // @synthesize beSpecificPage=_beSpecificPage;
@property(copy, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
@property(copy, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(retain, nonatomic) WAAppTaskTransitInfo *transitInfo; // @synthesize transitInfo=_transitInfo;
@property(retain, nonatomic) WAAppTaskWebLaunchInfo *webLaunchInfo; // @synthesize webLaunchInfo=_webLaunchInfo;
@property(retain, nonatomic) WAApptaskPluginResInfo *pluginResInfo; // @synthesize pluginResInfo=_pluginResInfo;
@property(retain, nonatomic) WAAppTaskReferrerInfo *referrerInfo; // @synthesize referrerInfo=_referrerInfo;
- (void).cxx_destruct;

@end

