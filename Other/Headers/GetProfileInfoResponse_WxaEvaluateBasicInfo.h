//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface GetProfileInfoResponse_WxaEvaluateBasicInfo : PBGeneratedMessage
{
    unsigned int hasAverageScore:1;
    unsigned int hasTotalScoreCnt:1;
    double averageScore;
    unsigned long long totalScoreCnt;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetTotalScoreCnt:) unsigned long long totalScoreCnt; // @synthesize totalScoreCnt;
@property(readonly, nonatomic) BOOL hasTotalScoreCnt; // @synthesize hasTotalScoreCnt;
@property(nonatomic, setter=SetAverageScore:) double averageScore; // @synthesize averageScore;
@property(readonly, nonatomic) BOOL hasAverageScore; // @synthesize hasAverageScore;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

