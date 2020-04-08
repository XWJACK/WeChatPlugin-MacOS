//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRecursiveLock;
@protocol SimpleAudioBufferDelegate;

@interface SimpleAudioState : NSObject
{
    BOOL _m_running;
    unsigned int _m_bufferByteSize;
    unsigned int _m_numPacketsToRead;
    struct AudioQueueBuffer **m_buffers;
    struct AudioStreamBasicDescription *m_dataFormat;
    long long _m_currentPacket;
    struct OpaqueAudioQueue *_m_queue;
    id <SimpleAudioBufferDelegate> _m_delegate;
    NSRecursiveLock *_m_dataLock;
}

@property(retain, nonatomic) NSRecursiveLock *m_dataLock; // @synthesize m_dataLock=_m_dataLock;
@property(nonatomic) __weak id <SimpleAudioBufferDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) struct OpaqueAudioQueue *m_queue; // @synthesize m_queue=_m_queue;
@property(nonatomic) unsigned int m_numPacketsToRead; // @synthesize m_numPacketsToRead=_m_numPacketsToRead;
@property(nonatomic) long long m_currentPacket; // @synthesize m_currentPacket=_m_currentPacket;
@property(nonatomic) unsigned int m_bufferByteSize; // @synthesize m_bufferByteSize=_m_bufferByteSize;
@property(nonatomic) BOOL m_running; // @synthesize m_running=_m_running;
@property(nonatomic) struct AudioStreamBasicDescription *m_dataFormat; // @synthesize m_dataFormat;
@property(nonatomic) struct AudioQueueBuffer **m_buffers; // @synthesize m_buffers;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

