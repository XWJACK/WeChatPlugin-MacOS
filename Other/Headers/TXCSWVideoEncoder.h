//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXIVideoEncoder.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface TXCSWVideoEncoder : TXIVideoEncoder
{
    struct shared_ptr<TXCSoftwareVideoCodec> _sotfwareEncoder;
    struct shared_ptr<CSoftwareVideoEncoderListenerAdpt> _codecListenerAdpt;
    basic_string_23d93216 _frameBuffer;
    NSObject<OS_dispatch_queue> *_encodeQueue;
    int _streamType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onEncodeFinished:(unsigned int)arg1 gopIndex:(unsigned long long)arg2 rpsFrameIndex:(unsigned long long)arg3;
- (void)callDelegate:(struct tagTXSNALPacket *)arg1 Error:(int)arg2;
- (void)setID:(id)arg1;
- (long long)encodeGop;
- (long long)encodeFrameCount;
- (long long)realFPS;
- (long long)realBitrate;
- (void)restartIDR;
- (void)setEncodeFps:(long long)arg1;
- (void)setRPSRefBitmap:(long long)arg1 bitmap:(unsigned short)arg2 recvTimestamp:(long long)arg3;
- (void)enableNearestRPS:(long long)arg1;
- (void)setFrameRef:(long long)arg1;
- (void)setEncodeIdrFpsFromQos:(long long)arg1;
- (void)setBitrateFromQos:(long long)arg1 totalBitrate:(long long)arg2;
- (void)setBitrate:(long long)arg1;
- (long long)pushSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (void)stopInternal;
- (long long)stop;
- (long long)startWith:(struct TXSVideoEncoderParam *)arg1;
- (void)dealloc;
- (id)init;

@end
