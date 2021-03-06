//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountServiceExt-Protocol.h"

@class MMTimer, NSString;

@interface IoMonitor : NSObject <AccountServiceExt>
{
    int m_wechatPid;
    MMTimer *m_disk_io_timer;
    unsigned long long m_last_diskio_byteswritten;
    unsigned long long m_last_diskio_bytesread;
}

- (void).cxx_destruct;
- (void)onUserLogout;
- (void)stopTimer;
- (void)diskIoReportIfNeed;
- (void)setupDiskIoMonitor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

