//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface WxaCmdsMsg : PBGeneratedMessage
{
    unsigned int hasGenTime:1;
    unsigned int genTime;
    NSMutableArray *mutableRespInfoListList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetGenTime:) unsigned int genTime; // @synthesize genTime;
@property(readonly, nonatomic) BOOL hasGenTime; // @synthesize hasGenTime;
@property(retain, nonatomic) NSMutableArray *mutableRespInfoListList; // @synthesize mutableRespInfoListList;
- (void).cxx_destruct;
- (void)addRespInfoList:(id)arg1;
- (void)addRespInfoListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *respInfoList; // @dynamic respInfoList;
- (id)respInfoListList;
- (id)init;

@end
