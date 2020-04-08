//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString;

@interface OpenWeAppAdapter : MMService <MMService>
{
}

- (void)openDebugWeAppInternal:(id)arg1;
- (void)openOfficalBrandAppBrand:(id)arg1;
- (void)openOpenSDKAppBrand:(id)arg1 withScene:(int)arg2;
- (void)openNormalAppBrand:(id)arg1 withScene:(int)arg2;
- (void)openProfileAppBrand:(id)arg1 withScene:(int)arg2;
- (void)openWeApp:(id)arg1;
- (void)openWeAppFromWeappOPWrap:(id)arg1 scene:(unsigned long long)arg2;
- (void)openWeAppFromJson:(id)arg1 contact:(id)arg2 withScene:(int)arg3;
- (void)openWeAppWithHandoffItem:(id)arg1 withScene:(int)arg2;
- (void)openWeAppWithContact:(id)arg1 withScene:(int)arg2;
- (void)openWeAppWithFavoritesItemData:(id)arg1 withScene:(int)arg2;
- (void)openWeAppWithOfficalBrandDict:(id)arg1;
- (void)openDebugWeApp:(id)arg1;
- (void)openWeApp:(id)arg1 withScene:(int)arg2;
- (unsigned long long)getFromPreScene:(int)arg1;
- (unsigned long long)getFromScene:(int)arg1;
- (int)getWeAppType:(id)arg1;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
