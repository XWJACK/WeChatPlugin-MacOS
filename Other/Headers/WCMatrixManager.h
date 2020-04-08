//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MatrixAdapterDelegate-Protocol.h"
#import "MatrixManagerDelegate-Protocol.h"
#import "MatrixManagerReportDelegate-Protocol.h"

@class NSString, WCCrashBlockHandler, WCCrashBlockMonitorPlugin, WCMemoryStatPlugin;

@interface WCMatrixManager : NSObject <MatrixManagerReportDelegate, MatrixManagerDelegate, MatrixAdapterDelegate>
{
    WCCrashBlockMonitorPlugin *_crashBlockPlugin;
    WCCrashBlockHandler *_crashBlockHandler;
    WCMemoryStatPlugin *_memStatPlugin;
}

+ (id)customCacheRootPath;
+ (id)sharedInstance;
@property(retain, nonatomic) WCMemoryStatPlugin *memStatPlugin; // @synthesize memStatPlugin=_memStatPlugin;
@property(retain, nonatomic) WCCrashBlockHandler *crashBlockHandler; // @synthesize crashBlockHandler=_crashBlockHandler;
@property(retain, nonatomic) WCCrashBlockMonitorPlugin *crashBlockPlugin; // @synthesize crashBlockPlugin=_crashBlockPlugin;
- (void).cxx_destruct;
- (BOOL)onMatrixManagerCurrentNetworkOnWifi:(id)arg1;
- (void)onMatrixManager:(id)arg1 handleCustomIssue:(id)arg2 success:(BOOL)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadCustomIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleMemoryStatIssue:(id)arg2 success:(BOOL)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadMemoryStatIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleCrashIssue:(id)arg2 success:(BOOL)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadCrashIssue:(id)arg2;
- (void)onMatrixManager:(id)arg1 handleLagIssue:(id)arg2 success:(BOOL)arg3;
- (void)onMatrixManager:(id)arg1 beginUploadLagIssue:(id)arg2;
- (id)onGetReportCryptKeyWithVersion:(unsigned int)arg1 withDataSize:(unsigned int)arg2;
- (id)onGetMatrixReportCachePath;
- (id)onGetMatrixReportURL;
- (id)onGetMatrixReportHost;
- (id)onGetMatrixReportUserName;
- (unsigned int)onGetMatrixReportUin;
- (unsigned int)onGetMatrixReportVersion;
- (unsigned int)onGetMatrixReportProductID;
- (void)matrixLog:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 funcName:(const char *)arg5 message:(id)arg6;
- (BOOL)matrixShouldLog:(int)arg1;
- (void)setWeAppScene:(id)arg1;
- (void)setCurrentUin:(unsigned long long)arg1 andUsrName:(id)arg2;
- (id)getMemoryStatPlugin;
- (id)getCrashBlockMonitorPlugin;
- (void)uploadCustomIssue:(id)arg1;
- (void)installMatrix;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
