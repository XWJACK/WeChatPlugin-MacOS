//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, NSString;

@protocol WAContactMgrExtension <NSObject>

@optional
- (void)onDeleteWeAppContact:(NSString *)arg1;
- (void)onModifyWeAppContactList:(NSArray *)arg1;
- (void)onModifyWeAppContact:(CContact *)arg1;
- (void)onUpdateWeAppContactFailedWithKey:(NSString *)arg1 type:(unsigned long long)arg2 errMsg:(NSString *)arg3;
- (void)onUpdateWeAppContactSuccess:(CContact *)arg1;
@end

