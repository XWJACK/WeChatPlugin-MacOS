//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class ActionSheetInfo, BaseResponse, CheckJsApiInfo, LaunchAction, OperationInfo, PublicLibUpdateInfo, WxaAppHostInfo;

@interface LaunchWxaAppResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasLaunch:1;
    unsigned int hasCheckJsApi:1;
    unsigned int hasHostInfo:1;
    unsigned int hasPublicLibUpdate:1;
    unsigned int hasActionSheet:1;
    unsigned int hasOperation:1;
    BaseResponse *baseResponse;
    LaunchAction *launch;
    CheckJsApiInfo *checkJsApi;
    WxaAppHostInfo *hostInfo;
    PublicLibUpdateInfo *publicLibUpdate;
    ActionSheetInfo *actionSheet;
    OperationInfo *operation;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetOperation:) OperationInfo *operation; // @synthesize operation;
@property(readonly, nonatomic) BOOL hasOperation; // @synthesize hasOperation;
@property(retain, nonatomic, setter=SetActionSheet:) ActionSheetInfo *actionSheet; // @synthesize actionSheet;
@property(readonly, nonatomic) BOOL hasActionSheet; // @synthesize hasActionSheet;
@property(retain, nonatomic, setter=SetPublicLibUpdate:) PublicLibUpdateInfo *publicLibUpdate; // @synthesize publicLibUpdate;
@property(readonly, nonatomic) BOOL hasPublicLibUpdate; // @synthesize hasPublicLibUpdate;
@property(retain, nonatomic, setter=SetHostInfo:) WxaAppHostInfo *hostInfo; // @synthesize hostInfo;
@property(readonly, nonatomic) BOOL hasHostInfo; // @synthesize hasHostInfo;
@property(retain, nonatomic, setter=SetCheckJsApi:) CheckJsApiInfo *checkJsApi; // @synthesize checkJsApi;
@property(readonly, nonatomic) BOOL hasCheckJsApi; // @synthesize hasCheckJsApi;
@property(retain, nonatomic, setter=SetLaunch:) LaunchAction *launch; // @synthesize launch;
@property(readonly, nonatomic) BOOL hasLaunch; // @synthesize hasLaunch;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

