//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface BackupEmojiOperateResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    BaseResponse *baseResponse;
    NSMutableArray *mutableNeedUploadMd5ListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableNeedUploadMd5ListList; // @synthesize mutableNeedUploadMd5ListList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addNeedUploadMd5ListFromArray:(id)arg1;
- (void)addNeedUploadMd5List:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *needUploadMd5List; // @dynamic needUploadMd5List;
- (id)needUploadMd5ListList;
- (id)init;

@end

