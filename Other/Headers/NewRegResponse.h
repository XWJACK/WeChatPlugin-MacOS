//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, BuiltinIPList, CDNDnsInfo, HostList, NSString, NetworkControl, PluginKeyList, SKBuiltinBuffer_t, SecAuthRegKeySect, ShowStyleKey;

@interface NewRegResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasUin:1;
    unsigned int hasSessionKey:1;
    unsigned int hasOfficialUserName:1;
    unsigned int hasOfficialNickName:1;
    unsigned int hasQqmicroBlogUserName:1;
    unsigned int hasBindEmail:1;
    unsigned int hasPushMailStatus:1;
    unsigned int hasSendCardBitFlag:1;
    unsigned int hasPushMailSettingTicket:1;
    unsigned int hasBuiltinIplist:1;
    unsigned int hasFsurl:1;
    unsigned int hasUserName:1;
    unsigned int hasStatus:1;
    unsigned int hasNetworkControl:1;
    unsigned int hasReturnFlag:1;
    unsigned int hasRegType:1;
    unsigned int hasAuthKey:1;
    unsigned int hasPluginKeyList:1;
    unsigned int hasPassword:1;
    unsigned int hasProfileFlag:1;
    unsigned int hasNewHostList:1;
    unsigned int hasAutoAuthTicket:1;
    unsigned int hasDnsInfo:1;
    unsigned int hasStepTicket:1;
    unsigned int hasVerifySignature:1;
    unsigned int hasVerifyBuff:1;
    unsigned int hasShowStyle:1;
    unsigned int hasSnsDnsInfo:1;
    unsigned int hasAppDnsInfo:1;
    unsigned int hasSecAuthRegKeySect:1;
    unsigned int uin;
    unsigned int pushMailStatus;
    unsigned int sendCardBitFlag;
    unsigned int status;
    unsigned int returnFlag;
    unsigned int regType;
    unsigned int profileFlag;
    BaseResponse *baseResponse;
    NSString *sessionKey;
    NSString *officialUserName;
    NSString *officialNickName;
    NSString *qqmicroBlogUserName;
    NSString *bindEmail;
    NSString *pushMailSettingTicket;
    BuiltinIPList *builtinIplist;
    NSString *fsurl;
    NSString *userName;
    NetworkControl *networkControl;
    NSString *authKey;
    PluginKeyList *pluginKeyList;
    NSString *password;
    HostList *newHostList;
    NSString *autoAuthTicket;
    CDNDnsInfo *dnsInfo;
    NSString *stepTicket;
    NSString *verifySignature;
    SKBuiltinBuffer_t *verifyBuff;
    ShowStyleKey *showStyle;
    CDNDnsInfo *snsDnsInfo;
    CDNDnsInfo *appDnsInfo;
    SecAuthRegKeySect *secAuthRegKeySect;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetSecAuthRegKeySect:) SecAuthRegKeySect *secAuthRegKeySect; // @synthesize secAuthRegKeySect;
@property(readonly, nonatomic) BOOL hasSecAuthRegKeySect; // @synthesize hasSecAuthRegKeySect;
@property(retain, nonatomic, setter=SetAppDnsInfo:) CDNDnsInfo *appDnsInfo; // @synthesize appDnsInfo;
@property(readonly, nonatomic) BOOL hasAppDnsInfo; // @synthesize hasAppDnsInfo;
@property(retain, nonatomic, setter=SetSnsDnsInfo:) CDNDnsInfo *snsDnsInfo; // @synthesize snsDnsInfo;
@property(readonly, nonatomic) BOOL hasSnsDnsInfo; // @synthesize hasSnsDnsInfo;
@property(retain, nonatomic, setter=SetShowStyle:) ShowStyleKey *showStyle; // @synthesize showStyle;
@property(readonly, nonatomic) BOOL hasShowStyle; // @synthesize hasShowStyle;
@property(retain, nonatomic, setter=SetVerifyBuff:) SKBuiltinBuffer_t *verifyBuff; // @synthesize verifyBuff;
@property(readonly, nonatomic) BOOL hasVerifyBuff; // @synthesize hasVerifyBuff;
@property(retain, nonatomic, setter=SetVerifySignature:) NSString *verifySignature; // @synthesize verifySignature;
@property(readonly, nonatomic) BOOL hasVerifySignature; // @synthesize hasVerifySignature;
@property(retain, nonatomic, setter=SetStepTicket:) NSString *stepTicket; // @synthesize stepTicket;
@property(readonly, nonatomic) BOOL hasStepTicket; // @synthesize hasStepTicket;
@property(retain, nonatomic, setter=SetDnsInfo:) CDNDnsInfo *dnsInfo; // @synthesize dnsInfo;
@property(readonly, nonatomic) BOOL hasDnsInfo; // @synthesize hasDnsInfo;
@property(retain, nonatomic, setter=SetAutoAuthTicket:) NSString *autoAuthTicket; // @synthesize autoAuthTicket;
@property(readonly, nonatomic) BOOL hasAutoAuthTicket; // @synthesize hasAutoAuthTicket;
@property(retain, nonatomic, setter=SetNewHostList:) HostList *newHostList; // @synthesize newHostList;
@property(readonly, nonatomic) BOOL hasNewHostList; // @synthesize hasNewHostList;
@property(nonatomic, setter=SetProfileFlag:) unsigned int profileFlag; // @synthesize profileFlag;
@property(readonly, nonatomic) BOOL hasProfileFlag; // @synthesize hasProfileFlag;
@property(retain, nonatomic, setter=SetPassword:) NSString *password; // @synthesize password;
@property(readonly, nonatomic) BOOL hasPassword; // @synthesize hasPassword;
@property(retain, nonatomic, setter=SetPluginKeyList:) PluginKeyList *pluginKeyList; // @synthesize pluginKeyList;
@property(readonly, nonatomic) BOOL hasPluginKeyList; // @synthesize hasPluginKeyList;
@property(retain, nonatomic, setter=SetAuthKey:) NSString *authKey; // @synthesize authKey;
@property(readonly, nonatomic) BOOL hasAuthKey; // @synthesize hasAuthKey;
@property(nonatomic, setter=SetRegType:) unsigned int regType; // @synthesize regType;
@property(readonly, nonatomic) BOOL hasRegType; // @synthesize hasRegType;
@property(nonatomic, setter=SetReturnFlag:) unsigned int returnFlag; // @synthesize returnFlag;
@property(readonly, nonatomic) BOOL hasReturnFlag; // @synthesize hasReturnFlag;
@property(retain, nonatomic, setter=SetNetworkControl:) NetworkControl *networkControl; // @synthesize networkControl;
@property(readonly, nonatomic) BOOL hasNetworkControl; // @synthesize hasNetworkControl;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetFsurl:) NSString *fsurl; // @synthesize fsurl;
@property(readonly, nonatomic) BOOL hasFsurl; // @synthesize hasFsurl;
@property(retain, nonatomic, setter=SetBuiltinIplist:) BuiltinIPList *builtinIplist; // @synthesize builtinIplist;
@property(readonly, nonatomic) BOOL hasBuiltinIplist; // @synthesize hasBuiltinIplist;
@property(retain, nonatomic, setter=SetPushMailSettingTicket:) NSString *pushMailSettingTicket; // @synthesize pushMailSettingTicket;
@property(readonly, nonatomic) BOOL hasPushMailSettingTicket; // @synthesize hasPushMailSettingTicket;
@property(nonatomic, setter=SetSendCardBitFlag:) unsigned int sendCardBitFlag; // @synthesize sendCardBitFlag;
@property(readonly, nonatomic) BOOL hasSendCardBitFlag; // @synthesize hasSendCardBitFlag;
@property(nonatomic, setter=SetPushMailStatus:) unsigned int pushMailStatus; // @synthesize pushMailStatus;
@property(readonly, nonatomic) BOOL hasPushMailStatus; // @synthesize hasPushMailStatus;
@property(retain, nonatomic, setter=SetBindEmail:) NSString *bindEmail; // @synthesize bindEmail;
@property(readonly, nonatomic) BOOL hasBindEmail; // @synthesize hasBindEmail;
@property(retain, nonatomic, setter=SetQqmicroBlogUserName:) NSString *qqmicroBlogUserName; // @synthesize qqmicroBlogUserName;
@property(readonly, nonatomic) BOOL hasQqmicroBlogUserName; // @synthesize hasQqmicroBlogUserName;
@property(retain, nonatomic, setter=SetOfficialNickName:) NSString *officialNickName; // @synthesize officialNickName;
@property(readonly, nonatomic) BOOL hasOfficialNickName; // @synthesize hasOfficialNickName;
@property(retain, nonatomic, setter=SetOfficialUserName:) NSString *officialUserName; // @synthesize officialUserName;
@property(readonly, nonatomic) BOOL hasOfficialUserName; // @synthesize hasOfficialUserName;
@property(retain, nonatomic, setter=SetSessionKey:) NSString *sessionKey; // @synthesize sessionKey;
@property(readonly, nonatomic) BOOL hasSessionKey; // @synthesize hasSessionKey;
@property(nonatomic, setter=SetUin:) unsigned int uin; // @synthesize uin;
@property(readonly, nonatomic) BOOL hasUin; // @synthesize hasUin;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

