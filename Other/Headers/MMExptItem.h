//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSDictionary, NSString;

@interface MMExptItem : NSObject <PBCoding>
{
    unsigned int exptId;
    unsigned int groupId;
    unsigned int exptSeq;
    unsigned int startTimeSec;
    unsigned int endTimeSec;
    NSDictionary *exptArgs;
}

+ (void)initialize;
+ (void)_initPBTableOfMMExptItem;
@property(retain, nonatomic) NSDictionary *exptArgs; // @synthesize exptArgs;
@property(nonatomic) unsigned int endTimeSec; // @synthesize endTimeSec;
@property(nonatomic) unsigned int startTimeSec; // @synthesize startTimeSec;
@property(nonatomic) unsigned int exptSeq; // @synthesize exptSeq;
@property(nonatomic) unsigned int groupId; // @synthesize groupId;
@property(nonatomic) unsigned int exptId; // @synthesize exptId;
- (void).cxx_destruct;
- (BOOL)parseJson:(id)arg1;
- (BOOL)isReady;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
