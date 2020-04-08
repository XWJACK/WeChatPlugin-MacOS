//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JNWCollectionViewLayout.h"

@class NSMutableArray;
@protocol JNWCollectionViewListLayoutDelegate;

@interface JNWCollectionViewListLayout : JNWCollectionViewLayout
{
    BOOL _stickyHeaders;
    id <JNWCollectionViewListLayoutDelegate> _delegate;
    double _rowHeight;
    double _verticalSpacing;
    NSMutableArray *_sections;
}

@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) BOOL stickyHeaders; // @synthesize stickyHeaders=_stickyHeaders;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) __weak id <JNWCollectionViewListLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)indexPathForNextItemInDirection:(long long)arg1 currentIndexPath:(id)arg2;
- (long long)nearestIntersectingRowInSection:(id)arg1 inRect:(struct CGRect)arg2 edge:(long long)arg3;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
- (struct CGRect)rectForSectionAtIndex:(long long)arg1;
- (struct CGRect)rectForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (BOOL)shouldApplyExistingLayoutAttributesOnLayout;
- (id)layoutAttributesForSupplementaryItemInSection:(long long)arg1 kind:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)init;

@end
