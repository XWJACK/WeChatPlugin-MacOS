//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "C2ObjcServerCallBackExt-Protocol.h"

@class MMSpeedFilter, NSDate, NSString;
@protocol LocalAreaNetworkServerDelegate;

@interface LocalAreaNetworkServer : NSObject <C2ObjcServerCallBackExt>
{
    NSString *client_ip;
    unsigned short client_port;
    NSDate *m_sendStartDate;
    NSDate *m_receiveStartDate;
    unsigned long long m_totalReceiveLength;
    unsigned long long m_totalSendLength;
    unsigned long long m_lastTotalReciveLength;
    unsigned long long m_lastTotalSendLength;
    MMSpeedFilter *m_sendSpeedFilter;
    MMSpeedFilter *m_recveSpeedFilter;
    NSDate *m_serverConnectDate;
    id <LocalAreaNetworkServerDelegate> _delegate;
}

+ (void)stopServer;
@property(nonatomic) __weak id <LocalAreaNetworkServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)getServerOpenTime;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getTotalSendLength;
- (float)getServerReceiveSpeed;
- (float)getServerSendSpeed;
- (void)onDisconnect:(id)arg1 port:(unsigned short)arg2;
- (void)onConnected:(id)arg1 port:(unsigned short)arg2;
- (void)onRecv:(id)arg1 port:(unsigned short)arg2 data:(id)arg3 length:(unsigned int)arg4;
- (unsigned long long)sendData:(id)arg1 andLength:(unsigned int)arg2;
- (BOOL)startServer:(id *)arg1 port:(unsigned short *)arg2;
- (void)dealloc;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

