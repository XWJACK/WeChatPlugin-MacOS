//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountServiceExt-Protocol.h"

@class MMLocalKvConfigDBTable, NSString, WCTDatabase;

@interface MMKvConfigDB : NSObject <AccountServiceExt>
{
    WCTDatabase *_database;
    MMLocalKvConfigDBTable *_localKvConfigDBTable;
}

+ (void)deleteKvConfigDB;
+ (id)sharedInstance;
@property(retain, nonatomic) MMLocalKvConfigDBTable *localKvConfigDBTable; // @synthesize localKvConfigDBTable=_localKvConfigDBTable;
@property(retain, nonatomic) WCTDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)getLocalKvConfigDBTable;
- (void)onUserLogout;
- (void)dealloc;
- (void)close;
- (void)closeDBBeforeInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

