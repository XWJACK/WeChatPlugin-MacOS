//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/AVPlayerView.h>

#import "WAStreamPlayerInterface-Protocol.h"
#import "WAVideoPlayerCoreDelegate-Protocol.h"

@class AVPlayerItemVideoOutput, MMUILabel, NSButton, NSColor, NSImage, NSImageView, NSString, NSView, WAProgressIndicator, WAVideoLayer, WAVideoPlayerCore;
@protocol MMVideoPlayerViewDelegate;

@interface WADefaultSteamPlayerView : AVPlayerView <WAVideoPlayerCoreDelegate, WAStreamPlayerInterface>
{
    unsigned int _controlsMask;
    NSColor *_scrollBgColor;
    NSColor *_webViewBgColor;
    BOOL _lockSlider;
    BOOL _touchesProgressMoved;
    BOOL _useCustomDuration;
    BOOL _customThumb;
    BOOL _live;
    unsigned int _pauseTemp;
    unsigned long long _currentTimeLen;
    BOOL _adjustVolume;
    double _totalDuration;
    BOOL _disableEvent;
    NSString *_path;
    BOOL _customCache;
    BOOL _showDanmu;
    BOOL _autoPlay;
    BOOL _needUpdateEvent;
    BOOL _enablePageGesture;
    BOOL _loop;
    unsigned int _videoId;
    id <MMVideoPlayerViewDelegate> _videoDelagate;
    NSString *_userData;
    NSString *_scene;
    WAVideoPlayerCore *_mediaCore;
    NSImageView *_thumbImageView;
    NSView *_coverView;
    NSButton *_coverButton;
    MMUILabel *_coverTime;
    WAProgressIndicator *_loadingView;
    WAVideoLayer *_danmuLayer;
    NSImage *_snapImage;
    AVPlayerItemVideoOutput *_snapshotOutput;
    struct CGSize _videoSize;
    struct CGRect _rect;
}

@property(retain, nonatomic) AVPlayerItemVideoOutput *snapshotOutput; // @synthesize snapshotOutput=_snapshotOutput;
@property(retain, nonatomic) NSImage *snapImage; // @synthesize snapImage=_snapImage;
@property(retain, nonatomic) WAVideoLayer *danmuLayer; // @synthesize danmuLayer=_danmuLayer;
@property(retain, nonatomic) WAProgressIndicator *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMUILabel *coverTime; // @synthesize coverTime=_coverTime;
@property(retain, nonatomic) NSButton *coverButton; // @synthesize coverButton=_coverButton;
@property(retain, nonatomic) NSView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) NSImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) WAVideoPlayerCore *mediaCore; // @synthesize mediaCore=_mediaCore;
@property(retain, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) BOOL loop; // @synthesize loop=_loop;
@property(nonatomic) BOOL enablePageGesture; // @synthesize enablePageGesture=_enablePageGesture;
@property(nonatomic) BOOL needUpdateEvent; // @synthesize needUpdateEvent=_needUpdateEvent;
@property(copy, nonatomic) NSString *userData; // @synthesize userData=_userData;
@property(nonatomic) BOOL autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) BOOL showDanmu; // @synthesize showDanmu=_showDanmu;
@property(nonatomic) BOOL customCache; // @synthesize customCache=_customCache;
@property(nonatomic) unsigned int videoId; // @synthesize videoId=_videoId;
@property(nonatomic) __weak id <MMVideoPlayerViewDelegate> videoDelagate; // @synthesize videoDelagate=_videoDelagate;
- (void).cxx_destruct;
- (id)drawInRectAspectFill:(id)arg1;
- (void)onCurrentTimeUpdate:(double)arg1;
- (void)onTotalTimeUpdate:(double)arg1;
- (void)onCacheUpdate:(double)arg1;
- (void)onLoadingEnd;
- (void)onLoadingBegin;
- (void)retryToLoadVideo;
- (void)onVideoPlayEnd;
- (void)onNetWorkError:(long long)arg1 errorMsg:(id)arg2;
- (void)onStateChange:(long long)arg1;
- (void)onLargePlay:(id)arg1;
- (void)updateSubviews:(struct CGSize)arg1;
- (void)initMediaCore:(id)arg1 initialTime:(unsigned int)arg2;
- (void)updateThumbImage;
- (void)updateLiveSize;
- (void)resizeThumbImage;
- (void)setVideoThumbImage:(id)arg1;
- (void)initViews;
- (void)scrollWheel:(id)arg1;
- (void)setVideoThumb:(id)arg1;
- (void)setVideoPath:(id)arg1 initialTime:(double)arg2 isHLS:(long long)arg3;
- (void)setVideoFrame:(struct CGRect)arg1;
- (void)setObjectFit:(long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setDanmuList:(id)arg1;
- (void)setControls:(unsigned int)arg1;
- (void)sendDanmu:(id)arg1 color:(id)arg2;
- (BOOL)isForground;
- (void)setMuted:(BOOL)arg1;
- (void)setPlayBackRate:(float)arg1;
- (void)pauseTemp:(BOOL)arg1;
- (void)pausePlayAndLoading;
- (long long)pauseCount;
- (void)pause;
- (void)seek:(unsigned int)arg1;
- (void)stop;
- (void)play:(BOOL)arg1;
- (BOOL)isPlaying;
- (id)getCurrentSnapshot;
- (unsigned int)getControlsMask;
- (void)enableFullScreen:(BOOL)arg1;
- (id)initWithThumb:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

