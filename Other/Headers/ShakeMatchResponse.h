//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface ShakeMatchResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasTips:1;
    unsigned int hasRet:1;
    unsigned int ret;
    BaseResponse *baseResponse;
    NSString *tips;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetRet:) unsigned int ret; // @synthesize ret;
@property(readonly, nonatomic) BOOL hasRet; // @synthesize hasRet;
@property(retain, nonatomic, setter=SetTips:) NSString *tips; // @synthesize tips;
@property(readonly, nonatomic) BOOL hasTips; // @synthesize hasTips;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

