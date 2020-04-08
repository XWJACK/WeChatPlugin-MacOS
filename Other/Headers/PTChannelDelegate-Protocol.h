//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, PTAddress, PTChannel, PTData;

@protocol PTChannelDelegate <NSObject>
- (void)ioFrameChannel:(PTChannel *)arg1 didReceiveFrameOfType:(unsigned int)arg2 tag:(unsigned int)arg3 payload:(PTData *)arg4;

@optional
- (void)ioFrameChannel:(PTChannel *)arg1 didAcceptConnection:(PTChannel *)arg2 fromAddress:(PTAddress *)arg3;
- (void)ioFrameChannel:(PTChannel *)arg1 didEndWithError:(NSError *)arg2;
- (BOOL)ioFrameChannel:(PTChannel *)arg1 shouldAcceptFrameOfType:(unsigned int)arg2 tag:(unsigned int)arg3 payloadSize:(unsigned int)arg4;
@end

