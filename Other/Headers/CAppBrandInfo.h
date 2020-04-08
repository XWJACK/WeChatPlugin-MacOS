//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CAppBrandInfo : NSObject
{
    BOOL _hasAppInfo;
    BOOL _isUseModule;
    BOOL _webSocketSkipPortCheck;
    unsigned int _appServiceType;
    unsigned int _runningFlag;
    unsigned int _appRole;
    unsigned int _wechatPluginApp;
    unsigned int _profileCommentForbid;
    unsigned int _versionState;
    unsigned int _maxPkgSize;
    unsigned int _maxUploadConcurrent;
    unsigned int _maxDownloadConcurrent;
    unsigned int _maxLocalstorageSize;
    unsigned int _maxBackgroundLifespan;
    unsigned int _maxRequestConcurrent;
    unsigned int _maxWebsocketConnect;
    unsigned int _maxWebviewDepth;
    unsigned int _expendedMaxWebviewDepth;
    unsigned int _actualWebviewDepth;
    unsigned int _expiresAtList;
    unsigned int _maxFileStorageSize;
    unsigned int _backgroundNetworkInterruptedTimeout;
    unsigned int _lifeSpanBeforeSuspend;
    unsigned int _lifeSpanAfterSuspend;
    unsigned int _maxWorkerConcurrent;
    NSString *_regitserBody;
    NSString *_appid;
    NSString *_shortNickName;
    NSString *_runningOpenForbbidenUrl;
    NSArray *_templateList;
    NSString *_fromBusinessUserName;
    NSArray *_versionList;
    NSArray *_requestDomain;
    NSArray *_wsRequestDomain;
    NSArray *_uploadDomain;
    NSArray *_downloadDomain;
    NSDictionary *_dicPluginInfo;
    unsigned long long _appVersion;
    NSString *_versionPkgMD5;
    NSString *_deviceOrientation;
    NSArray *_arrModuleList;
    NSString *_entranceModule;
    NSDictionary *_dicClientJsExtInfo;
    NSArray *_categories;
    NSArray *_bizEntryInfo;
}

@property(retain, nonatomic) NSArray *bizEntryInfo; // @synthesize bizEntryInfo=_bizEntryInfo;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) unsigned int maxWorkerConcurrent; // @synthesize maxWorkerConcurrent=_maxWorkerConcurrent;
@property(nonatomic) BOOL webSocketSkipPortCheck; // @synthesize webSocketSkipPortCheck=_webSocketSkipPortCheck;
@property(nonatomic) unsigned int lifeSpanAfterSuspend; // @synthesize lifeSpanAfterSuspend=_lifeSpanAfterSuspend;
@property(nonatomic) unsigned int lifeSpanBeforeSuspend; // @synthesize lifeSpanBeforeSuspend=_lifeSpanBeforeSuspend;
@property(nonatomic) unsigned int backgroundNetworkInterruptedTimeout; // @synthesize backgroundNetworkInterruptedTimeout=_backgroundNetworkInterruptedTimeout;
@property(nonatomic) unsigned int maxFileStorageSize; // @synthesize maxFileStorageSize=_maxFileStorageSize;
@property(nonatomic) unsigned int expiresAtList; // @synthesize expiresAtList=_expiresAtList;
@property(nonatomic) unsigned int actualWebviewDepth; // @synthesize actualWebviewDepth=_actualWebviewDepth;
@property(nonatomic) unsigned int expendedMaxWebviewDepth; // @synthesize expendedMaxWebviewDepth=_expendedMaxWebviewDepth;
@property(nonatomic) unsigned int maxWebviewDepth; // @synthesize maxWebviewDepth=_maxWebviewDepth;
@property(nonatomic) unsigned int maxWebsocketConnect; // @synthesize maxWebsocketConnect=_maxWebsocketConnect;
@property(nonatomic) unsigned int maxRequestConcurrent; // @synthesize maxRequestConcurrent=_maxRequestConcurrent;
@property(nonatomic) unsigned int maxBackgroundLifespan; // @synthesize maxBackgroundLifespan=_maxBackgroundLifespan;
@property(nonatomic) unsigned int maxLocalstorageSize; // @synthesize maxLocalstorageSize=_maxLocalstorageSize;
@property(nonatomic) unsigned int maxDownloadConcurrent; // @synthesize maxDownloadConcurrent=_maxDownloadConcurrent;
@property(nonatomic) unsigned int maxUploadConcurrent; // @synthesize maxUploadConcurrent=_maxUploadConcurrent;
@property(nonatomic) unsigned int maxPkgSize; // @synthesize maxPkgSize=_maxPkgSize;
@property(retain, nonatomic) NSDictionary *dicClientJsExtInfo; // @synthesize dicClientJsExtInfo=_dicClientJsExtInfo;
@property(copy, nonatomic) NSString *entranceModule; // @synthesize entranceModule=_entranceModule;
@property(nonatomic) BOOL isUseModule; // @synthesize isUseModule=_isUseModule;
@property(retain, nonatomic) NSArray *arrModuleList; // @synthesize arrModuleList=_arrModuleList;
@property(copy, nonatomic) NSString *deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(copy, nonatomic) NSString *versionPkgMD5; // @synthesize versionPkgMD5=_versionPkgMD5;
@property(nonatomic) unsigned long long appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) unsigned int versionState; // @synthesize versionState=_versionState;
@property(retain, nonatomic) NSDictionary *dicPluginInfo; // @synthesize dicPluginInfo=_dicPluginInfo;
@property(retain, nonatomic) NSArray *downloadDomain; // @synthesize downloadDomain=_downloadDomain;
@property(retain, nonatomic) NSArray *uploadDomain; // @synthesize uploadDomain=_uploadDomain;
@property(retain, nonatomic) NSArray *wsRequestDomain; // @synthesize wsRequestDomain=_wsRequestDomain;
@property(retain, nonatomic) NSArray *requestDomain; // @synthesize requestDomain=_requestDomain;
@property(retain, nonatomic) NSArray *versionList; // @synthesize versionList=_versionList;
@property(copy, nonatomic) NSString *fromBusinessUserName; // @synthesize fromBusinessUserName=_fromBusinessUserName;
@property(nonatomic) unsigned int profileCommentForbid; // @synthesize profileCommentForbid=_profileCommentForbid;
@property(nonatomic) unsigned int wechatPluginApp; // @synthesize wechatPluginApp=_wechatPluginApp;
@property(retain, nonatomic) NSArray *templateList; // @synthesize templateList=_templateList;
@property(nonatomic) unsigned int appRole; // @synthesize appRole=_appRole;
@property(copy, nonatomic) NSString *runningOpenForbbidenUrl; // @synthesize runningOpenForbbidenUrl=_runningOpenForbbidenUrl;
@property(nonatomic) unsigned int runningFlag; // @synthesize runningFlag=_runningFlag;
@property(nonatomic) unsigned int appServiceType; // @synthesize appServiceType=_appServiceType;
@property(copy, nonatomic) NSString *shortNickName; // @synthesize shortNickName=_shortNickName;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) BOOL hasAppInfo; // @synthesize hasAppInfo=_hasAppInfo;
@property(copy, nonatomic) NSString *regitserBody; // @synthesize regitserBody=_regitserBody;
- (void).cxx_destruct;

@end

