//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMDraftMgr : MMService <MMService>
{
    NSMutableDictionary *_draftCache;
}

@property(retain, nonatomic) NSMutableDictionary *draftCache; // @synthesize draftCache=_draftCache;
- (void).cxx_destruct;
- (void)removeDraftForUserName:(id)arg1;
- (BOOL)hasDraftWithUserName:(id)arg1;
- (id)draftWithUserName:(id)arg1;
- (void)setDraft:(id)arg1 withUsername:(id)arg2;
- (void)onServiceClearData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
