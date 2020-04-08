//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface WAPermissionLaunchAction : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL isUpdateHistoryList;
    unsigned int actionCode;
    NSString *openURL;
    NSString *alertMsg;
    NSString *alertTitle;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)_initPBTableOfWAPermissionLaunchAction;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle;
@property(retain, nonatomic) NSString *alertMsg; // @synthesize alertMsg;
@property(nonatomic) BOOL isUpdateHistoryList; // @synthesize isUpdateHistoryList;
@property(retain, nonatomic) NSString *openURL; // @synthesize openURL;
@property(nonatomic) unsigned int actionCode; // @synthesize actionCode;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)archivedWCTValue;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

