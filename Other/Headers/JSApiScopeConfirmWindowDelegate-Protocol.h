//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JSApiScopeConfirmWindow, NSArray;

@protocol JSApiScopeConfirmWindowDelegate <NSObject>

@optional
- (void)onScopeWindowClose:(JSApiScopeConfirmWindow *)arg1;
- (void)onScopeWindowCancel:(JSApiScopeConfirmWindow *)arg1;
- (void)onScopeWindowConfirm:(JSApiScopeConfirmWindow *)arg1 withScope:(NSArray *)arg2;
@end

