//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBasicSearchResult.h"

@class FavoritesItem;

@interface MMFavoritesSearchResult : MMBasicSearchResult
{
    FavoritesItem *_favItem;
}

@property(retain, nonatomic) FavoritesItem *favItem; // @synthesize favItem=_favItem;
- (void).cxx_destruct;
- (id)initWithFavoritesItem:(id)arg1;
- (id)identifier;

@end

