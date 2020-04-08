//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol WARemoteDebugChannelDelegate;

@interface WARemoteDebugChannel : NSObject
{
    unsigned long long _totalSendLength;
    unsigned long long _lastTotalSendLength;
    unsigned long long _totalReciveLength;
    unsigned long long _lastTotalReciveLength;
    unsigned int _proxyPort;
    id <WARemoteDebugChannelDelegate> _delegate;
    NSURL *_proxyUrl;
}

@property(retain, nonatomic) NSURL *proxyUrl; // @synthesize proxyUrl=_proxyUrl;
@property(nonatomic) unsigned int proxyPort; // @synthesize proxyPort=_proxyPort;
@property(nonatomic) __weak id <WARemoteDebugChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getTotalReceiveLength;
- (void)addReceiveLength:(unsigned long long)arg1;
- (id)getTotalSendLength;
- (void)addSendLength:(unsigned long long)arg1;
- (void)sendData:(id)arg1;
- (void)sendString:(id)arg1;
- (void)closeChannel;
- (void)openChannel;
- (BOOL)isConnected;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
