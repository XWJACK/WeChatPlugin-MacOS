//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FavoritesItem, NSString;

@protocol FavoritesUploadMgrDelegate <NSObject>

@optional
- (void)onUploadFavoritesItemFinished:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)onUploadFavoritesItem:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 FinishedLength:(int)arg3 TotalLength:(int)arg4;
- (void)onUploadFavoritesItemDidCopiedDataFiles:(FavoritesItem *)arg1;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
@end

