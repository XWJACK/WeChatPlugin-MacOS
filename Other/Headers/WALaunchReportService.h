//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WALaunchReportService : MMService <MMService>
{
    BOOL _isLaunch;
    double _startTime;
    NSMutableDictionary *_reports;
}

@property(nonatomic) BOOL isLaunch; // @synthesize isLaunch=_isLaunch;
@property(retain, nonatomic) NSMutableDictionary *reports; // @synthesize reports=_reports;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (void)finishAndReport;
- (void)report:(unsigned long long)arg1;
- (void)launch;
- (void)onServiceClearData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

