//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface OauthAuthorizeResp : PBGeneratedMessage
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
    BaseResponse *baseResponse;
    NSMutableArray *mutableScopeListList;
    NSString *appname;
    NSString *appiconUrl;
    NSString *redirectUrl;
}

+ (id)parseFromData:(id)arg1;
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
- (void)addScopeList:(id)arg1;
- (void)addScopeListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(nonatomic, setter=SetIsCallServerWhenConfirm:) BOOL isCallServerWhenConfirm; // @synthesize isCallServerWhenConfirm=isCallServerWhenConfirm_;
@property(nonatomic, setter=SetIsSlienctAuth:) BOOL isSlienctAuth; // @synthesize isSlienctAuth=isSlienctAuth_;
@property(nonatomic, setter=SetIsRecentHasAuth:) BOOL isRecentHasAuth; // @synthesize isRecentHasAuth=isRecentHasAuth_;
@property(retain, nonatomic) NSMutableArray *scopeList; // @dynamic scopeList;
- (id)scopeListList;
- (id)init;

@end

