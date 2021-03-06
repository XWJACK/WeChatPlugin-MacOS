//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, TXCReverbParams;
@protocol OS_dispatch_queue, TXIAudioCoreEventDelegate, TXIAudioCorePlayDelegate, TXIAudioCoreRecordDelegate, TXIAudioTestDelegate;

@interface TXCAudioCore : NSObject
{
    float _innerSamplerate;
    unsigned int _innerChannels;
    BOOL _isInterruption;
    BOOL _isStartPlay;
    BOOL _isStartRecord;
    BOOL _isPauseRecord;
    NSString *_oldAudioCategroy;
    NSString *_oldAudioMode;
    unsigned int _frameLen;
    int _mixFrameLen;
    unsigned long long _lastRecordErrNotifyTs;
    double _tsWhenInterrupt;
    unsigned long long _timeWhenInterrupt;
    char *_emptyPcm;
    BOOL _sendEmptyPcm;
    NSObject<OS_dispatch_queue> *_sendEmptyQueue;
    struct TXCMutex _sendEmptyLock;
    NSMutableArray *_playDelegates;
    struct TXCMutex _playDelegatesMutex;
    int _workMode;
    double _timeForLogLimit;
    unsigned int _needPCMLen;
    struct TXCVolumeLevelS16 _playLevelCal;
    struct AudioStreamBasicDescription _effectStreamFormat;
    struct OpaqueAUGraph *_auGraph;
    struct TXCResampleMixer _recordResampler;
    struct TXCResampleMixer _playResampler;
    TXCReverbParams *_reverbParams;
    TXCReverbParams *_reverbParams_0;
    TXCReverbParams *_reverbParams_1;
    TXCReverbParams *_reverbParams_2;
    TXCReverbParams *_reverbParams_3;
    TXCReverbParams *_reverbParams_4;
    TXCReverbParams *_reverbParams_5;
    TXCReverbParams *_reverbParams_6;
    TXCReverbParams *_reverbParams_7;
    NSArray *_reverbParamsArray;
    float _silenceIntervalForStart;
    BOOL _needReStartAUGraph;
    int mVarispeedNode;
    struct ComponentInstanceRecord *mVarispeedUnit;
    int mOutputNode;
    struct ComponentInstanceRecord *mOutputUnit;
    struct TXCStatusModule _statusModule;
    unsigned long long _recordDelegateCountAfterRoutechange;
    void *_captureRingBuf;
    struct _TXSAudioData _captureRingBufHelpReadBuffer;
    void *_playRingBuf;
    struct _TXSAudioData _playRingBufHelpReadBuffer;
    BOOL _isVOIPMode;
    BOOL _enableReverb;
    BOOL _isAudioPreview;
    BOOL _isCustomRecord;
    BOOL _isHeadset;
    BOOL _enableCorePlayVolumeLevelCal;
    unsigned short _conversionBufferLen;
    unsigned int _audioCorePlayCallbackSampleNum;
    int _ioNode;
    int _convertNode;
    unsigned int _inputDeviceId;
    unsigned int _outputDeviceId;
    int _encFormat;
    unsigned int _playoutVolume;
    long long _audioMode;
    long long _reverbType;
    id <TXIAudioCoreRecordDelegate> _recordDelegate;
    id <TXIAudioTestDelegate> _audioTestDelegate;
    id <TXIAudioCoreEventDelegate> _eventDelegate;
    id <TXIAudioCorePlayDelegate> _audioCorePlayDelegate;
    struct ComponentInstanceRecord *_ioUnit;
    struct ComponentInstanceRecord *_convertUnit;
    struct AudioBufferList *_inputBuffer;
    short *_conversionBuffer;
    NSObject<OS_dispatch_queue> *_unitQueue;
    long long _systemVolumeType;
    NSArray *_audioDevicesList;
    struct AudioStreamBasicDescription _inputFormat;
    struct AudioStreamBasicDescription _outputFormat;
}

+ (void)releaseAudioBufferList:(struct AudioBufferList **)arg1;
+ (id)sharedInstance;
@property unsigned int playoutVolume; // @synthesize playoutVolume=_playoutVolume;
@property(nonatomic) struct AudioStreamBasicDescription outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) struct AudioStreamBasicDescription inputFormat; // @synthesize inputFormat=_inputFormat;
@property(retain, nonatomic) NSArray *audioDevicesList; // @synthesize audioDevicesList=_audioDevicesList;
@property(nonatomic) long long systemVolumeType; // @synthesize systemVolumeType=_systemVolumeType;
@property BOOL enableCorePlayVolumeLevelCal; // @synthesize enableCorePlayVolumeLevelCal=_enableCorePlayVolumeLevelCal;
@property int encFormat; // @synthesize encFormat=_encFormat;
@property BOOL isHeadset; // @synthesize isHeadset=_isHeadset;
@property BOOL isStartRecord; // @synthesize isStartRecord=_isStartRecord;
@property BOOL isCustomRecord; // @synthesize isCustomRecord=_isCustomRecord;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *unitQueue; // @synthesize unitQueue=_unitQueue;
@property(nonatomic) unsigned short conversionBufferLen; // @synthesize conversionBufferLen=_conversionBufferLen;
@property(nonatomic) short *conversionBuffer; // @synthesize conversionBuffer=_conversionBuffer;
@property(nonatomic) struct AudioBufferList *inputBuffer; // @synthesize inputBuffer=_inputBuffer;
@property(nonatomic) unsigned int outputDeviceId; // @synthesize outputDeviceId=_outputDeviceId;
@property(nonatomic) unsigned int inputDeviceId; // @synthesize inputDeviceId=_inputDeviceId;
@property int workMode; // @synthesize workMode=_workMode;
@property(nonatomic) struct ComponentInstanceRecord *convertUnit; // @synthesize convertUnit=_convertUnit;
@property(nonatomic) int convertNode; // @synthesize convertNode=_convertNode;
@property(nonatomic) int ioNode; // @synthesize ioNode=_ioNode;
@property(nonatomic) struct ComponentInstanceRecord *ioUnit; // @synthesize ioUnit=_ioUnit;
@property(nonatomic) struct OpaqueAUGraph *auGraph; // @synthesize auGraph=_auGraph;
@property unsigned int audioCorePlayCallbackSampleNum; // @synthesize audioCorePlayCallbackSampleNum=_audioCorePlayCallbackSampleNum;
@property __weak id <TXIAudioCorePlayDelegate> audioCorePlayDelegate; // @synthesize audioCorePlayDelegate=_audioCorePlayDelegate;
@property(nonatomic) __weak id <TXIAudioCoreEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(nonatomic) __weak id <TXIAudioTestDelegate> audioTestDelegate; // @synthesize audioTestDelegate=_audioTestDelegate;
@property(nonatomic) __weak id <TXIAudioCoreRecordDelegate> recordDelegate; // @synthesize recordDelegate=_recordDelegate;
@property(nonatomic) BOOL isAudioPreview; // @synthesize isAudioPreview=_isAudioPreview;
@property(nonatomic) long long reverbType; // @synthesize reverbType=_reverbType;
@property(nonatomic) BOOL enableReverb; // @synthesize enableReverb=_enableReverb;
@property(nonatomic) long long audioMode; // @synthesize audioMode=_audioMode;
@property(readonly, nonatomic) BOOL isVOIPMode; // @synthesize isVOIPMode=_isVOIPMode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)restartAUGraphIfNewDeviceSelected:(id)arg1;
- (BOOL)handleNewDeviceSelected:(id)arg1;
- (void)notifyPlayPCMDataToSoftAEC:(char *)arg1 dataLen:(unsigned int)arg2;
- (void)notifyRecordPCMData:(char *)arg1 dataLen:(unsigned int)arg2 timestamp:(unsigned long long)arg3;
- (void)clean;
- (void)setEnableAEC:(BOOL)arg1;
- (void)checkSampleRateByDataSource:(BOOL)arg1;
- (void)addInUseInputDeviceChangedListener:(BOOL)arg1;
- (void)addInUseOutputDeviceChangedListener:(BOOL)arg1;
- (void)checkMicByDataSource:(BOOL)arg1;
- (unsigned int)getPairDevice:(BOOL)arg1 deviceId:(unsigned int)arg2;
- (void)calPlayVolumeLevel:(char *)arg1 len:(unsigned int)arg2 sampleRate:(unsigned int)arg3 channels:(unsigned int)arg4;
- (void)sendEvent:(int)arg1 message:(id)arg2;
@property(readonly) unsigned int corePlayVolumeLevel;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)setTestFile:(id)arg1;
- (void)mixAudio:(char *)arg1 length:(int)arg2;
- (unsigned int)queryPlayData:(char *)arg1 withMaxLen:(unsigned int)arg2;
- (void)notifyRecordErr:(long long)arg1 info:(id)arg2;
- (void)sendRecordDataInternal;
- (void)sendRecordData;
- (void)sendRecordData:(char *)arg1 withLen:(unsigned int)arg2 withTS:(double)arg3;
- (void)clearAudioDataList:(list_3e119c15 *)arg1;
- (long long)resetPlay;
- (long long)resumePlay;
- (long long)pausePlay;
- (long long)stopPlay:(id)arg1;
- (long long)startPlay:(id)arg1;
- (long long)stopRecord;
- (long long)resetRecord;
- (long long)resumeRecord;
- (long long)pauseRecord;
- (long long)startRecord;
- (float)getDeviceVolume:(BOOL)arg1;
- (void)setDeviceVolume:(float)arg1 isInput:(BOOL)arg2;
- (BOOL)isVolumeSettableOnChannel:(int)arg1;
- (void)removeDevicesListener;
- (void)addDeviceListChangedListener;
- (void)stopAUGraph;
- (BOOL)IsRunning;
- (void)startAUGraph;
- (void)connectAUGraph_VOIP;
- (void)configAUGraph_VOIP;
- (void)configAUGraph;
- (void)createAUGraph_VOIP;
- (void)createAUGraph;
- (void)dealloc;
- (void)setupDefaultDeviceID;
- (id)init;

@end

