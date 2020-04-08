//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString, SKBuiltinBuffer_t;

@interface GetBrandListResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasBrandList:1;
    unsigned int hasRequestBuffer:1;
    BaseResponse *baseResponse;
    NSString *brandList;
    SKBuiltinBuffer_t *requestBuffer;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetRequestBuffer:) SKBuiltinBuffer_t *requestBuffer; // @synthesize requestBuffer;
@property(readonly, nonatomic) BOOL hasRequestBuffer; // @synthesize hasRequestBuffer;
@property(retain, nonatomic, setter=SetBrandList:) NSString *brandList; // @synthesize brandList;
@property(readonly, nonatomic) BOOL hasBrandList; // @synthesize hasBrandList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
