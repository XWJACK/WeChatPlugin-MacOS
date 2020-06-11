//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMNetServiceDelegate-Protocol.h"
#import "WeChatInstance-Protocol.h"

@class AFHTTPSessionManager, DiskMonitor, IoMonitor, MMDockItem, MMServiceCenter, NSString, TaskHeartBeat, VisualizationMonitor, WCDBMonitorMgr;

@interface MiniProgram : NSObject <MMNetServiceDelegate, WeChatInstance>
{
    BOOL _isLoggedIn;
    BOOL _hasAuthOK;
    unsigned long long _scrollBarShowStatus;
    MMServiceCenter *_serviceCenter;
    MMDockItem *_dockItem;
    AFHTTPSessionManager *_downloadMgr;
    TaskHeartBeat *_taskHeartBeat;
    WCDBMonitorMgr *_wcdbMonitorMgr;
    IoMonitor *_ioMonitor;
    DiskMonitor *_diskMonitor;
    VisualizationMonitor *_visualizationMonitor;
}

+ (id)sharedInstance;
@property(retain, nonatomic) VisualizationMonitor *visualizationMonitor; // @synthesize visualizationMonitor=_visualizationMonitor;
@property(retain, nonatomic) DiskMonitor *diskMonitor; // @synthesize diskMonitor=_diskMonitor;
@property(retain, nonatomic) IoMonitor *ioMonitor; // @synthesize ioMonitor=_ioMonitor;
@property(retain, nonatomic) WCDBMonitorMgr *wcdbMonitorMgr; // @synthesize wcdbMonitorMgr=_wcdbMonitorMgr;
@property(retain, nonatomic) TaskHeartBeat *taskHeartBeat; // @synthesize taskHeartBeat=_taskHeartBeat;
@property(nonatomic) BOOL hasAuthOK; // @synthesize hasAuthOK=_hasAuthOK;
@property(retain, nonatomic) AFHTTPSessionManager *downloadMgr; // @synthesize downloadMgr=_downloadMgr;
@property(retain, nonatomic) MMDockItem *dockItem; // @synthesize dockItem=_dockItem;
@property(retain, nonatomic) MMServiceCenter *serviceCenter; // @synthesize serviceCenter=_serviceCenter;
@property(nonatomic) BOOL isLoggedIn; // @synthesize isLoggedIn=_isLoggedIn;
@property(nonatomic) unsigned long long scrollBarShowStatus; // @synthesize scrollBarShowStatus=_scrollBarShowStatus;
- (void).cxx_destruct;
- (int)CurrentQQUin;
- (int)CurrentWeixinUin;
- (id)CurrentUserName;
- (BOOL)OnHeadBeatCGIResponse:(id)arg1;
- (BOOL)GetHeartBeatRequestData:(id)arg1 reqCmdId:(int *)arg2 respCmdId:(int *)arg3;
- (BOOL)IsAuthOK;
- (BOOL)MakeSureAuth;
- (void)sendGetAppBrandContact;
- (void)downloadWeAppIcon:(id)arg1;
- (void)setupTaskAccountInfo;
- (void)setupDockItem;
- (void)showWeAppApplicationIcon;
- (void)setupTaskMonitorIfNeeded;
- (void)setupServices;
- (void)setupTaskHeartBeat;
- (void)setupTaskProcessIfNeeded;
- (void)applicationWillHide:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillBecomeActive:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
