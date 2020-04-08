//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, JSAPIBaseResponse;

@interface JSAPICheckLaunchAppResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasJsapiBaseresponse:1;
    unsigned int hasErrcode:1;
    unsigned int hasShowType:1;
    unsigned int hasJumpStoreFlag:1;
    unsigned int errcode;
    int showType;
    int jumpStoreFlag;
    BaseResponse *baseResponse;
    JSAPIBaseResponse *jsapiBaseresponse;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetJumpStoreFlag:) int jumpStoreFlag; // @synthesize jumpStoreFlag;
@property(readonly, nonatomic) BOOL hasJumpStoreFlag; // @synthesize hasJumpStoreFlag;
@property(nonatomic, setter=SetShowType:) int showType; // @synthesize showType;
@property(readonly, nonatomic) BOOL hasShowType; // @synthesize hasShowType;
@property(nonatomic, setter=SetErrcode:) unsigned int errcode; // @synthesize errcode;
@property(readonly, nonatomic) BOOL hasErrcode; // @synthesize hasErrcode;
@property(retain, nonatomic, setter=SetJsapiBaseresponse:) JSAPIBaseResponse *jsapiBaseresponse; // @synthesize jsapiBaseresponse;
@property(readonly, nonatomic) BOOL hasJsapiBaseresponse; // @synthesize hasJsapiBaseresponse;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
