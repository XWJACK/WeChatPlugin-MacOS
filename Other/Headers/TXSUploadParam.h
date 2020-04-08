//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TXSUploadParam : NSObject
{
    BOOL _waitIFrame;
    BOOL _enableNearestIP;
    BOOL _realTimeMode;
    BOOL _sendAudioFirst;
    long long _mode;
    long long _fps;
    long long _samplingRate;
    long long _channels;
    long long _retryTimes;
    long long _protocol;
    long long _maxVideoQueueCount;
    long long _maxVideoCacheTime;
    long long _rtmpChannelType;
    double _retryInterval;
    long long _quicMode;
    NSDictionary *_metaData;
}

@property(copy, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
@property(nonatomic) long long quicMode; // @synthesize quicMode=_quicMode;
@property(nonatomic) BOOL sendAudioFirst; // @synthesize sendAudioFirst=_sendAudioFirst;
@property(nonatomic) BOOL realTimeMode; // @synthesize realTimeMode=_realTimeMode;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long rtmpChannelType; // @synthesize rtmpChannelType=_rtmpChannelType;
@property(nonatomic) BOOL enableNearestIP; // @synthesize enableNearestIP=_enableNearestIP;
@property(nonatomic) BOOL waitIFrame; // @synthesize waitIFrame=_waitIFrame;
@property(nonatomic) long long maxVideoCacheTime; // @synthesize maxVideoCacheTime=_maxVideoCacheTime;
@property(nonatomic) long long maxVideoQueueCount; // @synthesize maxVideoQueueCount=_maxVideoQueueCount;
@property(nonatomic) long long protocol; // @synthesize protocol=_protocol;
@property(nonatomic) long long retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) long long channels; // @synthesize channels=_channels;
@property(nonatomic) long long samplingRate; // @synthesize samplingRate=_samplingRate;
@property(nonatomic) long long fps; // @synthesize fps=_fps;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)init;

@end

