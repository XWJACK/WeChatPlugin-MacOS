//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMSessionSortCache : NSObject <PBCoding>
{
    NSMutableDictionary *dicUsrNameTopTime;
    NSMutableDictionary *dicUsrNameUntopTime;
}

+ (void)initialize;
+ (void)_initPBTableOfMMSessionSortCache;
@property(retain, nonatomic) NSMutableDictionary *dicUsrNameUntopTime; // @synthesize dicUsrNameUntopTime;
@property(retain, nonatomic) NSMutableDictionary *dicUsrNameTopTime; // @synthesize dicUsrNameTopTime;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

