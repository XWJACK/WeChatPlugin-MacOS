//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface BatchGetCardArray : PBGeneratedMessage
{
    NSMutableArray *mutableCardArrayList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableCardArrayList; // @synthesize mutableCardArrayList;
- (void).cxx_destruct;
- (void)addCardArray:(id)arg1;
- (void)addCardArrayFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *cardArray; // @dynamic cardArray;
- (id)cardArrayList;
- (id)init;

@end

