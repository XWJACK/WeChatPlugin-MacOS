//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface SmcSelfMonitor : PBGeneratedMessage
{
    unsigned int hasItemcount:1;
    unsigned int itemcount;
    NSMutableArray *mutableItemlistList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableItemlistList; // @synthesize mutableItemlistList;
@property(nonatomic, setter=SetItemcount:) unsigned int itemcount; // @synthesize itemcount;
@property(readonly, nonatomic) BOOL hasItemcount; // @synthesize hasItemcount;
- (void).cxx_destruct;
- (void)addItemlist:(id)arg1;
- (void)addItemlistFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *itemlist; // @dynamic itemlist;
- (id)itemlistList;
- (id)init;

@end

