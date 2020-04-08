//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class AddMsg, BaseResponse, BusinessInfo, NSString;

@interface GetFuncMsgResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasOpCode:1;
    unsigned int hasVersion:1;
    unsigned int hasAddMsg:1;
    unsigned int hasCustomBuff:1;
    unsigned int hasActionTime:1;
    unsigned int hasBusinessInfo:1;
    int opCode;
    unsigned int actionTime;
    BaseResponse *baseResponse;
    unsigned long long version;
    AddMsg *addMsg;
    NSString *customBuff;
    BusinessInfo *businessInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetBusinessInfo:) BusinessInfo *businessInfo; // @synthesize businessInfo;
@property(readonly, nonatomic) BOOL hasBusinessInfo; // @synthesize hasBusinessInfo;
@property(nonatomic, setter=SetActionTime:) unsigned int actionTime; // @synthesize actionTime;
@property(readonly, nonatomic) BOOL hasActionTime; // @synthesize hasActionTime;
@property(retain, nonatomic, setter=SetCustomBuff:) NSString *customBuff; // @synthesize customBuff;
@property(readonly, nonatomic) BOOL hasCustomBuff; // @synthesize hasCustomBuff;
@property(retain, nonatomic, setter=SetAddMsg:) AddMsg *addMsg; // @synthesize addMsg;
@property(readonly, nonatomic) BOOL hasAddMsg; // @synthesize hasAddMsg;
@property(nonatomic, setter=SetVersion:) unsigned long long version; // @synthesize version;
@property(readonly, nonatomic) BOOL hasVersion; // @synthesize hasVersion;
@property(nonatomic, setter=SetOpCode:) int opCode; // @synthesize opCode;
@property(readonly, nonatomic) BOOL hasOpCode; // @synthesize hasOpCode;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

