//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface SdkOauthAuthorizeResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasAppname:1;
    unsigned int hasAppiconUrl:1;
    unsigned int hasRedirectUrl:1;
    unsigned int hasIsRecentHasAuth:1;
    unsigned int isRecentHasAuth_:1;
    unsigned int hasIsSlienctAuth:1;
    unsigned int isSlienctAuth_:1;
    unsigned int hasIsCallServerWhenConfirm:1;
    unsigned int isCallServerWhenConfirm_:1;
    unsigned int hasIsUseNewpage:1;
    unsigned int isUseNewpage_:1;
    unsigned int hasIsBanModifyAvatar:1;
    unsigned int isBanModifyAvatar_:1;
    unsigned int hasAvatarLimit:1;
    unsigned int hasDefaultAvatarId:1;
    unsigned int hasDefaultHeadimgUrl:1;
    unsigned int hasDefaultHeadimgFileid:1;
    unsigned int hasWxToken:1;
    unsigned int hasUserConfirmRedirectUrl:1;
    unsigned int hasUserConfirmWording:1;
    unsigned int avatarLimit;
    unsigned int defaultAvatarId;
    BaseResponse *baseResponse;
    NSMutableArray *mutableScopeListList;
    NSString *appname;
    NSString *appiconUrl;
    NSString *redirectUrl;
    NSMutableArray *mutableAvatarListList;
    NSString *defaultHeadimgUrl;
    NSString *defaultHeadimgFileid;
    NSString *wxToken;
    NSString *userConfirmRedirectUrl;
    NSString *userConfirmWording;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetUserConfirmWording:) NSString *userConfirmWording; // @synthesize userConfirmWording;
@property(readonly, nonatomic) BOOL hasUserConfirmWording; // @synthesize hasUserConfirmWording;
@property(retain, nonatomic, setter=SetUserConfirmRedirectUrl:) NSString *userConfirmRedirectUrl; // @synthesize userConfirmRedirectUrl;
@property(readonly, nonatomic) BOOL hasUserConfirmRedirectUrl; // @synthesize hasUserConfirmRedirectUrl;
@property(retain, nonatomic, setter=SetWxToken:) NSString *wxToken; // @synthesize wxToken;
@property(readonly, nonatomic) BOOL hasWxToken; // @synthesize hasWxToken;
@property(retain, nonatomic, setter=SetDefaultHeadimgFileid:) NSString *defaultHeadimgFileid; // @synthesize defaultHeadimgFileid;
@property(readonly, nonatomic) BOOL hasDefaultHeadimgFileid; // @synthesize hasDefaultHeadimgFileid;
@property(retain, nonatomic, setter=SetDefaultHeadimgUrl:) NSString *defaultHeadimgUrl; // @synthesize defaultHeadimgUrl;
@property(readonly, nonatomic) BOOL hasDefaultHeadimgUrl; // @synthesize hasDefaultHeadimgUrl;
@property(nonatomic, setter=SetDefaultAvatarId:) unsigned int defaultAvatarId; // @synthesize defaultAvatarId;
@property(readonly, nonatomic) BOOL hasDefaultAvatarId; // @synthesize hasDefaultAvatarId;
@property(nonatomic, setter=SetAvatarLimit:) unsigned int avatarLimit; // @synthesize avatarLimit;
@property(readonly, nonatomic) BOOL hasAvatarLimit; // @synthesize hasAvatarLimit;
@property(readonly, nonatomic) BOOL hasIsBanModifyAvatar; // @synthesize hasIsBanModifyAvatar;
@property(readonly, nonatomic) BOOL hasIsUseNewpage; // @synthesize hasIsUseNewpage;
@property(retain, nonatomic) NSMutableArray *mutableAvatarListList; // @synthesize mutableAvatarListList;
@property(readonly, nonatomic) BOOL hasIsCallServerWhenConfirm; // @synthesize hasIsCallServerWhenConfirm;
@property(readonly, nonatomic) BOOL hasIsSlienctAuth; // @synthesize hasIsSlienctAuth;
@property(readonly, nonatomic) BOOL hasIsRecentHasAuth; // @synthesize hasIsRecentHasAuth;
@property(retain, nonatomic, setter=SetRedirectUrl:) NSString *redirectUrl; // @synthesize redirectUrl;
@property(readonly, nonatomic) BOOL hasRedirectUrl; // @synthesize hasRedirectUrl;
@property(retain, nonatomic, setter=SetAppiconUrl:) NSString *appiconUrl; // @synthesize appiconUrl;
@property(readonly, nonatomic) BOOL hasAppiconUrl; // @synthesize hasAppiconUrl;
@property(retain, nonatomic, setter=SetAppname:) NSString *appname; // @synthesize appname;
@property(readonly, nonatomic) BOOL hasAppname; // @synthesize hasAppname;
@property(retain, nonatomic) NSMutableArray *mutableScopeListList; // @synthesize mutableScopeListList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addAvatarList:(id)arg1;
- (void)addAvatarListFromArray:(id)arg1;
- (void)addScopeList:(id)arg1;
- (void)addScopeListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(nonatomic, setter=SetIsBanModifyAvatar:) BOOL isBanModifyAvatar; // @synthesize isBanModifyAvatar=isBanModifyAvatar_;
@property(nonatomic, setter=SetIsUseNewpage:) BOOL isUseNewpage; // @synthesize isUseNewpage=isUseNewpage_;
@property(retain, nonatomic) NSMutableArray *avatarList; // @dynamic avatarList;
- (id)avatarListList;
@property(nonatomic, setter=SetIsCallServerWhenConfirm:) BOOL isCallServerWhenConfirm; // @synthesize isCallServerWhenConfirm=isCallServerWhenConfirm_;
@property(nonatomic, setter=SetIsSlienctAuth:) BOOL isSlienctAuth; // @synthesize isSlienctAuth=isSlienctAuth_;
@property(nonatomic, setter=SetIsRecentHasAuth:) BOOL isRecentHasAuth; // @synthesize isRecentHasAuth=isRecentHasAuth_;
@property(retain, nonatomic) NSMutableArray *scopeList; // @dynamic scopeList;
- (id)scopeListList;
- (id)init;

@end

