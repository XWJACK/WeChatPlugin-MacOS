//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JTCaptureWindowInfo;

@protocol JTCaptureViewDelegate <NSObject>
- (void)gotActiveWindowInfo:(JTCaptureWindowInfo *)arg1;
- (JTCaptureWindowInfo *)windowInfoAtPostion:(struct CGPoint)arg1;
- (void)selectionDidChange;
- (void)mouseLocationDidUpdate:(struct CGPoint)arg1 needShowMagnifier:(BOOL)arg2;
- (void)didConfirmSelection;
@end

