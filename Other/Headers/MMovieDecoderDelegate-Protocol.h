//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMovieDecoder;

@protocol MMovieDecoderDelegate <NSObject>

@optional
- (void)mMovieDecoderOnDecodeFailed:(MMovieDecoder *)arg1;
- (void)mMovieDecoderOnDecodeFinished:(MMovieDecoder *)arg1;
- (void)mMovieDecoder:(MMovieDecoder *)arg1 onNewAudioFrameReady:(struct opaqueCMSampleBuffer *)arg2;
- (void)mMovieDecoder:(MMovieDecoder *)arg1 onNewVideoFrameReady:(struct opaqueCMSampleBuffer *)arg2;
@end

