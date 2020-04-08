//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface VerifyPurchaseResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasSeriesId:1;
    unsigned int hasBizType:1;
    unsigned int bizType;
    BaseResponse *baseResponse;
    NSString *seriesId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetBizType:) unsigned int bizType; // @synthesize bizType;
@property(readonly, nonatomic) BOOL hasBizType; // @synthesize hasBizType;
@property(retain, nonatomic, setter=SetSeriesId:) NSString *seriesId; // @synthesize seriesId;
@property(readonly, nonatomic) BOOL hasSeriesId; // @synthesize hasSeriesId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

