//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JNWCollectionView, JNWCollectionViewCell, NSEvent, NSIndexPath, NSMenu;

@protocol JNWCollectionViewDelegate <NSObject>

@optional
- (NSMenu *)collectionView:(JNWCollectionView *)arg1 menuForEvent:(NSEvent *)arg2;
- (void)collectionView:(JNWCollectionView *)arg1 didEndDisplayingCell:(JNWCollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(JNWCollectionView *)arg1 didScrollToItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)collectionView:(JNWCollectionView *)arg1 shouldScrollToItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(JNWCollectionView *)arg1 didRightClickItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(JNWCollectionView *)arg1 didDoubleClickItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(JNWCollectionView *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)collectionView:(JNWCollectionView *)arg1 shouldDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(JNWCollectionView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)collectionView:(JNWCollectionView *)arg1 shouldSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(JNWCollectionView *)arg1 mouseExitedInItemAtIndexPath:(NSIndexPath *)arg2 withEvent:(NSEvent *)arg3;
- (void)collectionView:(JNWCollectionView *)arg1 mouseEnteredInItemAtIndexPath:(NSIndexPath *)arg2 withEvent:(NSEvent *)arg3;
- (void)collectionView:(JNWCollectionView *)arg1 mouseDraggedInItemAtIndexPath:(NSIndexPath *)arg2 withEvent:(NSEvent *)arg3;
- (void)collectionView:(JNWCollectionView *)arg1 mouseMovedInItemAtIndexPath:(NSIndexPath *)arg2 withEvent:(NSEvent *)arg3;
- (void)collectionView:(JNWCollectionView *)arg1 mouseUpInItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(JNWCollectionView *)arg1 mouseDownInItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(JNWCollectionView *)arg1 mouseUpInItemAtIndexPath:(NSIndexPath *)arg2 withEvent:(NSEvent *)arg3;
- (void)collectionView:(JNWCollectionView *)arg1 mouseDownInItemAtIndexPath:(NSIndexPath *)arg2 withEvent:(NSEvent *)arg3;
@end
