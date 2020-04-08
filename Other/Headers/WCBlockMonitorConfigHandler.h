//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCBlockMonitorConfiguration;

@interface WCBlockMonitorConfigHandler : NSObject
{
    int m_cpuCount;
    WCBlockMonitorConfiguration *m_currentConfiguration;
}

+ (int)getDeviceCPUCount;
- (void).cxx_destruct;
- (BOOL)getShouldPrintMemoryUse;
- (unsigned int)getTriggerFilterCount;
- (BOOL)getShouldFilterSameStack;
- (float)getPowerConsumeCPULimit;
- (BOOL)getShouldGetPowerConsumeStack;
- (BOOL)getShouldGetCPUHighLog;
- (BOOL)getShouldPrintCPUUsage;
- (int)getMainThreadCount;
- (unsigned int)getPerStackInterval;
- (unsigned int)getCheckPeriodTime;
- (BOOL)getMainThreadHandle;
- (float)getCPUUsagePercent;
- (unsigned int)getRunloopTimeOut;
- (void)setConfiguration:(id)arg1;
- (id)init;

@end
