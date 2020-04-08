//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, WxaAppBaseResponse;

@interface GetWxaUsageRecordResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasWxaappBaseresponse:1;
    unsigned int hasStatus:1;
    unsigned int status;
    BaseResponse *baseResponse;
    WxaAppBaseResponse *wxaappBaseresponse;
    NSMutableArray *mutableStarListList;
    NSMutableArray *mutableHistoryListList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(retain, nonatomic) NSMutableArray *mutableHistoryListList; // @synthesize mutableHistoryListList;
@property(retain, nonatomic) NSMutableArray *mutableStarListList; // @synthesize mutableStarListList;
@property(retain, nonatomic, setter=SetWxaappBaseresponse:) WxaAppBaseResponse *wxaappBaseresponse; // @synthesize wxaappBaseresponse;
@property(readonly, nonatomic) BOOL hasWxaappBaseresponse; // @synthesize hasWxaappBaseresponse;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addHistoryList:(id)arg1;
- (void)addHistoryListFromArray:(id)arg1;
- (void)addStarList:(id)arg1;
- (void)addStarListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *historyList; // @dynamic historyList;
- (id)historyListList;
@property(retain, nonatomic) NSMutableArray *starList; // @dynamic starList;
- (id)starListList;
- (id)init;

@end

