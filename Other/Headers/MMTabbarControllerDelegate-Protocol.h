//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMTabbarController, MMViewController;

@protocol MMTabbarControllerDelegate <NSObject>

@optional
- (void)tabbarController:(MMTabbarController *)arg1 didDoubleClickAtIndex:(unsigned long long)arg2;
- (void)tabbarController:(MMTabbarController *)arg1 didSelectViewControllerAtIndex:(unsigned long long)arg2;
- (void)tabbarController:(MMTabbarController *)arg1 didSelectViewController:(MMViewController *)arg2;
- (void)tabbarController:(MMTabbarController *)arg1 willSelectViewControllerAtIndex:(unsigned long long)arg2;
@end

