//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMenu;

@protocol MMImageEditToolbarViewDelegate <NSObject>
- (NSMenu *)contextMenu;
- (void)download;
- (void)forward;
- (void)shrink;
- (void)magnify;
- (void)tailor;
- (void)undo;
- (void)showPopoverViewType:(long long)arg1;
- (void)graphTypeDidChange:(long long)arg1;
@end

