//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString;

@interface RemoteOpenWeAppAdapter : MMService <MMService>
{
}

- (void)openDebugWeApp:(id)arg1;
- (void)openWeAppFromOfficalBrand:(id)arg1;
- (void)openWeAppFromNavigateTo:(id)arg1;
- (void)openWeAppFromNavigateBack:(id)arg1;
- (void)openWeApp:(id)arg1;
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
