//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXDownloaderProxy-Protocol.h"
#import "TXINotifyDelegate-Protocol.h"

@class FLVDownloader, NSString;
@protocol MultiDownloaderDelegate;

@interface MultiStreamDownloader : NSObject <TXDownloaderProxy, TXINotifyDelegate>
{
    struct list<StreamRecvMulitData, std::__1::allocator<StreamRecvMulitData>> _tmpArray;
    BOOL _origStoped;
    unsigned int _recvNGop;
    unsigned int _recvSize;
    unsigned int _recv2Size;
    int _maxNGop;
    unsigned int _acceptATS;
    unsigned int _acceptVTS;
    unsigned int _stopVTS;
    unsigned int _startVTS;
    unsigned int _stopATS;
    unsigned int _startATS;
    unsigned int _recv2NGop;
    FLVDownloader *_origDownloader;
    FLVDownloader *_curDownloader;
    long long _switchMs;
    id <MultiDownloaderDelegate> _multiDelegate;
    long long _stopTick;
    long long _startTick;
}

@property long long startTick; // @synthesize startTick=_startTick;
@property long long stopTick; // @synthesize stopTick=_stopTick;
@property unsigned int recv2NGop; // @synthesize recv2NGop=_recv2NGop;
@property unsigned int startATS; // @synthesize startATS=_startATS;
@property unsigned int stopATS; // @synthesize stopATS=_stopATS;
@property unsigned int startVTS; // @synthesize startVTS=_startVTS;
@property unsigned int stopVTS; // @synthesize stopVTS=_stopVTS;
@property unsigned int acceptVTS; // @synthesize acceptVTS=_acceptVTS;
@property unsigned int acceptATS; // @synthesize acceptATS=_acceptATS;
@property __weak id <MultiDownloaderDelegate> multiDelegate; // @synthesize multiDelegate=_multiDelegate;
@property long long switchMs; // @synthesize switchMs=_switchMs;
@property int maxNGop; // @synthesize maxNGop=_maxNGop;
@property unsigned int recv2Size; // @synthesize recv2Size=_recv2Size;
@property unsigned int recvSize; // @synthesize recvSize=_recvSize;
@property unsigned int recvNGop; // @synthesize recvNGop=_recvNGop;
@property BOOL origStoped; // @synthesize origStoped=_origStoped;
@property(retain) FLVDownloader *curDownloader; // @synthesize curDownloader=_curDownloader;
@property(retain) FLVDownloader *origDownloader; // @synthesize origDownloader=_origDownloader;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
@property(readonly) long long hungryMs;
- (void)stop;
- (void)readyToSwitch;
- (void)pushAudioData:(struct tag_aduio_data)arg1;
- (int)onRecvAudioData:(struct tag_aduio_data)arg1 from:(id)arg2;
- (void)pushVideoData:(struct tag_decode_data)arg1;
- (int)onRecvVideoData:(struct tag_decode_data)arg1 from:(id)arg2;
- (int)switchStream:(id)arg1;
- (id)initWithDownloader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

