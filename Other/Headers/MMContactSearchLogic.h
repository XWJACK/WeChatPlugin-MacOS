//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseSearchLogic.h"

@interface MMContactSearchLogic : MMBaseSearchLogic
{
}

- (unsigned long long)getMaxPreviewRowCount;
- (void)clearDataWhenSearchEnd;
- (void)reloadSearchResultDataWithKeyword:(id)arg1 resultContainer:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)doSearchWithKeyword:(id)arg1 searchScene:(unsigned long long)arg2 resultIsShownBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_isValidContact:(id)arg1;
- (id)init;

@end

