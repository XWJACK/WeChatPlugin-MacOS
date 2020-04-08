//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface StatisticsSnsAdInfo : PBGeneratedMessage
{
    unsigned int hasAdType:1;
    unsigned int hasAdPublishId:1;
    unsigned int hasAdUxInfo:1;
    unsigned int hasSource:1;
    unsigned int hasSnsStatExt:1;
    unsigned int adType;
    unsigned int source;
    NSString *adPublishId;
    NSString *adUxInfo;
    NSString *snsStatExt;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetSnsStatExt:) NSString *snsStatExt; // @synthesize snsStatExt;
@property(readonly, nonatomic) BOOL hasSnsStatExt; // @synthesize hasSnsStatExt;
@property(nonatomic, setter=SetSource:) unsigned int source; // @synthesize source;
@property(readonly, nonatomic) BOOL hasSource; // @synthesize hasSource;
@property(retain, nonatomic, setter=SetAdUxInfo:) NSString *adUxInfo; // @synthesize adUxInfo;
@property(readonly, nonatomic) BOOL hasAdUxInfo; // @synthesize hasAdUxInfo;
@property(retain, nonatomic, setter=SetAdPublishId:) NSString *adPublishId; // @synthesize adPublishId;
@property(readonly, nonatomic) BOOL hasAdPublishId; // @synthesize hasAdPublishId;
@property(nonatomic, setter=SetAdType:) unsigned int adType; // @synthesize adType;
@property(readonly, nonatomic) BOOL hasAdType; // @synthesize hasAdType;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
