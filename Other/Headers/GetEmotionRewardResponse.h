//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, EmotionReward, NSMutableArray;

@interface GetEmotionRewardResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasDonorNum:1;
    unsigned int hasReward:1;
    unsigned int donorNum;
    BaseResponse *baseResponse;
    NSMutableArray *mutablePriceList;
    NSMutableArray *mutableDonorsList;
    EmotionReward *reward;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetReward:) EmotionReward *reward; // @synthesize reward;
@property(readonly, nonatomic) BOOL hasReward; // @synthesize hasReward;
@property(retain, nonatomic) NSMutableArray *mutableDonorsList; // @synthesize mutableDonorsList;
@property(nonatomic, setter=SetDonorNum:) unsigned int donorNum; // @synthesize donorNum;
@property(readonly, nonatomic) BOOL hasDonorNum; // @synthesize hasDonorNum;
@property(retain, nonatomic) NSMutableArray *mutablePriceList; // @synthesize mutablePriceList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addDonors:(id)arg1;
- (void)addDonorsFromArray:(id)arg1;
- (void)addPrice:(id)arg1;
- (void)addPriceFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *donors; // @dynamic donors;
- (id)donorsList;
@property(retain, nonatomic) NSMutableArray *price; // @dynamic price;
- (id)priceList;
- (id)init;

@end

