//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXIVideoEncoder.h"

@class NSMutableIndexSet, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TXCHWTwoPassVideoEncoder : TXIVideoEncoder
{
    const struct TXSVideoEncoderParam *_currentParam;
    struct encoder_state _encoderState;
    long long _bitrate;
    NSObject<OS_dispatch_queue> *_encodeQueue;
    BOOL _secondPass;
    BOOL _readyForNextPass;
    struct TXCMutex _sessionMutex;
    struct OpaqueVTCompressionSession *_compressionSession;
    struct OpaqueVTFrameSilo *_outputSilo;
    struct OpaqueVTMultiPassStorage *_multiPassStorage;
    NSMutableIndexSet *_indexSet;
    unsigned long long _siloCount;
    NSString *_siloTempFilePath;
    BOOL _siloHasBeenLaunched;
    NSString *_tempFileFolder;
    unsigned long long _runningState;
    NSObject<OS_dispatch_semaphore> *_sem;
    CDUnknownBlockType _firstPassEncodeFinished;
}

@property(copy, nonatomic) CDUnknownBlockType firstPassEncodeFinished; // @synthesize firstPassEncodeFinished=_firstPassEncodeFinished;
- (void)setBitrate:(long long)arg1;
- (long long)realBitrate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onCodecFinished:(void *)arg1 Status:(int)arg2 InfoFlags:(unsigned int)arg3 SampleBufferRef:(struct opaqueCMSampleBuffer *)arg4;
- (void)compressSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 index:(unsigned long long)arg2;
- (void)callDelegate:(char *)arg1 length:(unsigned long long)arg2 type:(int)arg3 gopIndex:(unsigned long long)arg4 gopFrameIndex:(unsigned long long)arg5 frameIndex:(unsigned long long)arg6 refFrameIndex:(unsigned long long)arg7 pts:(unsigned long long)arg8 dts:(unsigned long long)arg9 error:(int)arg10;
- (void)callDelgateFailedWithError:(int)arg1;
- (_Bool)encodeSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (BOOL)isVBR;
- (BOOL)isTaskQueueEmpty;
- (void)launchSilo;
- (void)finishAndBeginSecondPass;
- (long long)encodeGop;
- (long long)encodeFrameCount;
- (long long)realFPS;
- (void)finishPushSampleBuffer;
- (long long)pushSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned long long)arg2;
- (long long)stop;
- (long long)startWith:(struct TXSVideoEncoderParam *)arg1;
- (int)releaseEncoder;
- (int)_createVTCompressSession:(struct TXSVideoEncoderParam *)arg1;
- (int)initEncoder:(struct TXSVideoEncoderParam *)arg1;
- (void)dealloc;
- (id)init;

@end
