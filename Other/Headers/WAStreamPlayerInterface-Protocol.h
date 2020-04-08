//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSColor, NSImage, NSString;
@protocol MMVideoPlayerViewDelegate;

@protocol WAStreamPlayerInterface <NSObject>
@property(retain, nonatomic) NSString *scene;
@property(nonatomic) BOOL loop;
@property(nonatomic) BOOL enablePageGesture;
@property(nonatomic) BOOL needUpdateEvent;
@property(copy, nonatomic) NSString *userData;
@property(nonatomic) BOOL autoPlay;
@property(nonatomic) BOOL showDanmu;
@property(nonatomic) unsigned int videoId;
@property(nonatomic) BOOL customCache;
@property(nonatomic) __weak id <MMVideoPlayerViewDelegate> videoDelagate;
- (BOOL)isPlaying;
- (void)setMuted:(BOOL)arg1;
- (void)setPlayBackRate:(float)arg1;
- (long long)pauseCount;
- (void)pauseTemp:(BOOL)arg1;
- (void)pausePlayAndLoading;
- (NSImage *)getCurrentSnapshot;
- (void)setDuration:(double)arg1;
- (BOOL)isFullScreen;
- (void)setObjectFit:(long long)arg1;
- (void)setDanmuList:(NSArray *)arg1;
- (void)sendDanmu:(NSString *)arg1 color:(NSColor *)arg2;
- (unsigned int)getControlsMask;
- (void)setControls:(unsigned int)arg1;
- (void)setVideoFrame:(struct CGRect)arg1;
- (void)enableFullScreen:(BOOL)arg1;
- (void)seek:(unsigned int)arg1;
- (void)stop;
- (void)pause;
- (void)play:(BOOL)arg1;
- (void)setVideoThumb:(NSString *)arg1;
- (void)setVideoPath:(NSString *)arg1 initialTime:(double)arg2 isHLS:(long long)arg3;
- (id)initWithThumb:(NSString *)arg1 frame:(struct CGRect)arg2;
@end
