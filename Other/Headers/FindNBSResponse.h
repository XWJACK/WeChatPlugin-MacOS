//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, SKBuiltinBuffer_t;

@interface FindNBSResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasNbscount:1;
    unsigned int hasNbsconfigCount:1;
    unsigned int hasPageBuff:1;
    unsigned int nbscount;
    unsigned int nbsconfigCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableNbslistList;
    NSMutableArray *mutableNbsconfigListList;
    SKBuiltinBuffer_t *pageBuff;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetPageBuff:) SKBuiltinBuffer_t *pageBuff; // @synthesize pageBuff;
@property(readonly, nonatomic) BOOL hasPageBuff; // @synthesize hasPageBuff;
@property(retain, nonatomic) NSMutableArray *mutableNbsconfigListList; // @synthesize mutableNbsconfigListList;
@property(nonatomic, setter=SetNbsconfigCount:) unsigned int nbsconfigCount; // @synthesize nbsconfigCount;
@property(readonly, nonatomic) BOOL hasNbsconfigCount; // @synthesize hasNbsconfigCount;
@property(retain, nonatomic) NSMutableArray *mutableNbslistList; // @synthesize mutableNbslistList;
@property(nonatomic, setter=SetNbscount:) unsigned int nbscount; // @synthesize nbscount;
@property(readonly, nonatomic) BOOL hasNbscount; // @synthesize hasNbscount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addNbsconfigList:(id)arg1;
- (void)addNbsconfigListFromArray:(id)arg1;
- (void)addNbslist:(id)arg1;
- (void)addNbslistFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *nbsconfigList; // @dynamic nbsconfigList;
- (id)nbsconfigListList;
@property(retain, nonatomic) NSMutableArray *nbslist; // @dynamic nbslist;
- (id)nbslistList;
- (id)init;

@end
