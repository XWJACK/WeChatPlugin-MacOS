//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface StrategyInterval : PBGeneratedMessage
{
    unsigned int hasLogIdbegin:1;
    unsigned int hasLogIdend:1;
    unsigned int logIdbegin;
    unsigned int logIdend;
    NSMutableArray *mutableStrategyItemList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableStrategyItemList; // @synthesize mutableStrategyItemList;
@property(nonatomic, setter=SetLogIdend:) unsigned int logIdend; // @synthesize logIdend;
@property(readonly, nonatomic) BOOL hasLogIdend; // @synthesize hasLogIdend;
@property(nonatomic, setter=SetLogIdbegin:) unsigned int logIdbegin; // @synthesize logIdbegin;
@property(readonly, nonatomic) BOOL hasLogIdbegin; // @synthesize hasLogIdbegin;
- (void).cxx_destruct;
- (void)addStrategyItem:(id)arg1;
- (void)addStrategyItemFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *strategyItem; // @dynamic strategyItem;
- (id)strategyItemList;
- (id)init;

@end
