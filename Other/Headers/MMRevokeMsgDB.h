//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCTDatabase, WCTTable;

@interface MMRevokeMsgDB : NSObject
{
    WCTDatabase *revokeDB;
    WCTTable *revokeTable;
}

- (void).cxx_destruct;
- (BOOL)isOutOfDate:(id)arg1;
- (BOOL)isExistRevokeMsg:(id)arg1;
- (BOOL)deleteOutOfDateMsg;
- (BOOL)deleteRevokeMsg:(id)arg1;
- (id)getRevokeMsg:(id)arg1;
- (BOOL)insertRevokeMsg:(id)arg1;
- (void)deleteDB;
- (void)dealloc;
- (void)close;
- (void)closeDBBeforeInit;
- (id)init;

@end

