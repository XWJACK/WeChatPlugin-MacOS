//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface UxLifeGetEventCommentResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    BaseResponse *baseResponse;
    NSMutableArray *mutableLikelistList;
    NSMutableArray *mutableCommentlistList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableCommentlistList; // @synthesize mutableCommentlistList;
@property(retain, nonatomic) NSMutableArray *mutableLikelistList; // @synthesize mutableLikelistList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addCommentlist:(id)arg1;
- (void)addCommentlistFromArray:(id)arg1;
- (void)addLikelist:(id)arg1;
- (void)addLikelistFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *commentlist; // @dynamic commentlist;
- (id)commentlistList;
@property(retain, nonatomic) NSMutableArray *likelist; // @dynamic likelist;
- (id)likelistList;
- (id)init;

@end

