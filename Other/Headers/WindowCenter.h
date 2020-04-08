//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString, TSDictionary;

@interface WindowCenter : MMService <MMService>
{
    TSDictionary *dictWindowController;
}

- (void).cxx_destruct;
- (BOOL)isExist:(id)arg1;
- (id)getWindowController:(id)arg1 makeIfNecessary:(BOOL)arg2;
- (id)getWindowController:(id)arg1;
- (void)pop:(id)arg1 withIdentifier:(id)arg2;
- (void)popWithoutIdentifier:(id)arg1;
- (void)pop:(id)arg1;
- (void)push:(id)arg1 withIdentifier:(id)arg2 sender:(id)arg3;
- (void)push:(id)arg1 withIdentifier:(id)arg2;
- (void)push:(id)arg1 sender:(id)arg2;
- (void)push:(id)arg1;
- (void)pushWithoutIdentifier:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

