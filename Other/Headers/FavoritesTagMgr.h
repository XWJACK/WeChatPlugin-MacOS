//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCFavoritesDB;

@interface FavoritesTagMgr : NSObject
{
    WCFavoritesDB *_favTagDB;
}

- (void).cxx_destruct;
- (id)getItemTags:(unsigned int)arg1;
- (id)getAllTags;
- (void)updateItemTags:(id)arg1 byFavLocalId:(unsigned int)arg2;
- (void)deleteItemTagsByFavLocalId:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end

