//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSImage, SDWebImageManager;

@protocol SDWebImageManagerDelegate <NSObject>

@optional
- (void)webImageManager:(SDWebImageManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)webImageManager:(SDWebImageManager *)arg1 didFinishWithImage:(NSImage *)arg2;
@end

