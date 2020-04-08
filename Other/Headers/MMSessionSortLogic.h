//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMSessionSortCache;

@interface MMSessionSortLogic : NSObject
{
    MMSessionSortCache *_oSessionSortCache;
}

- (void).cxx_destruct;
- (BOOL)isTopSessionCountExceed;
- (id)getUntopTime:(id)arg1;
- (id)getTopTime:(id)arg1;
- (void)clearSession:(id)arg1;
- (void)untopSession:(id)arg1;
- (void)topSession:(id)arg1;
- (id)getCurrentDate;
- (void)reloadCache;
- (void)saveCache;
- (void)loadCache;
- (void)loadSortDataInternal;
- (void)saveSortDataInternal;
- (id)getSortCacheDataFilePath;
- (void)dealloc;
- (id)init;

@end

