//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"
#import "SPUUpdaterDelegate-Protocol.h"

@class NSAlert, NSString, SPUUpdater;
@protocol SPUUserDriver><SPUStandardUserDriverProtocol;

@interface MMUpdateMgr : MMService <SPUUpdaterDelegate, MMService>
{
    BOOL _isGrayReleaseAvailable;
    NSAlert *_expiredAlert;
    NSString *_customXmlUrl;
    double _updateCheckInterval;
    SPUUpdater *_sparkleUpdater;
    id <SPUUserDriver><SPUStandardUserDriverProtocol> _userDriver;
    double _lastCheckTime;
}

+ (id)previousVersionInfo;
+ (BOOL)isVersionChange;
@property(nonatomic) BOOL isGrayReleaseAvailable; // @synthesize isGrayReleaseAvailable=_isGrayReleaseAvailable;
@property(nonatomic) double lastCheckTime; // @synthesize lastCheckTime=_lastCheckTime;
@property(retain, nonatomic) id <SPUUserDriver><SPUStandardUserDriverProtocol> userDriver; // @synthesize userDriver=_userDriver;
@property(retain, nonatomic) SPUUpdater *sparkleUpdater; // @synthesize sparkleUpdater=_sparkleUpdater;
@property(nonatomic) double updateCheckInterval; // @synthesize updateCheckInterval=_updateCheckInterval;
@property(retain, nonatomic) NSString *customXmlUrl; // @synthesize customXmlUrl=_customXmlUrl;
@property(nonatomic) __weak NSAlert *expiredAlert; // @synthesize expiredAlert=_expiredAlert;
- (void).cxx_destruct;
- (void)updater:(id)arg1 scheduledUpdateCheckDidAbortWithError:(id)arg2;
- (void)updater:(id)arg1 didAbortWithError:(id)arg2;
- (void)updater:(id)arg1 didCancelInstallUpdateOnQuit:(id)arg2;
- (void)updaterWillRelaunchApplication:(id)arg1;
- (void)userDidCancelDownload:(id)arg1;
- (void)updater:(id)arg1 failedToDownloadUpdate:(id)arg2 error:(id)arg3;
- (void)updater:(id)arg1 willDownloadUpdate:(id)arg2 withRequest:(id)arg3;
- (void)updaterDidNotFindUpdate:(id)arg1;
- (void)updater:(id)arg1 didFindValidUpdate:(id)arg2;
- (void)updater:(id)arg1 didFinishLoadingAppcast:(id)arg2;
- (BOOL)updaterShouldPromptForPermissionToCheckForUpdates:(id)arg1;
- (id)feedURLStringForUpdater:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)installUpdatesIfAvailable;
- (void)checkForUpdatesInBackground;
- (void)startBackgroundUpdatesCheck;
- (void)checkForUpdates:(id)arg1;
- (void)setupUpdater;
- (void)saveToDiskWithVersion:(unsigned int)arg1;
- (void)saveCurrentVersionToDisk;
- (id)checkVersionFilePath;
- (unsigned int)checkVersionFromDisk;
- (BOOL)shouldShowWhatsNew;
- (void)loadConfig;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

