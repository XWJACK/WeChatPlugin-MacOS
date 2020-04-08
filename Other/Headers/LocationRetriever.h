//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLHeading, CLLocationManager, MMTimer, NSMutableArray, NSString;
@protocol LocationRetrieveDelegate;

@interface LocationRetriever : NSObject <CLLocationManagerDelegate>
{
    struct timeval m_tvStart;
    struct timeval m_tvFirst;
    BOOL m_bFirstRetriever;
    unsigned int m_firstRetrieverRange;
    BOOL m_bReport;
    BOOL m_bCanRepeatReportLocation;
    BOOL m_bShieldAccuracy;
    float m_requiredAccuracy;
    int m_timeoutCount;
    NSMutableArray *m_recentLocationList;
    id <LocationRetrieveDelegate> m_delegate;
    unsigned long long m_eBusType;
    long long m_geoMode;
    MMTimer *m_checkResultTimer;
    unsigned long long m_locationTag;
    unsigned long long m_headingTag;
    CLHeading *_m_heading;
    CLLocationManager *_currentManager;
}

+ (double)getLocationAccuracy:(id)arg1;
+ (id)changeEarthLocationToMarsLocation:(id)arg1;
+ (void)cacheGlobalLastLocation:(id)arg1;
@property(retain, nonatomic) CLLocationManager *currentManager; // @synthesize currentManager=_currentManager;
@property(retain, nonatomic) CLHeading *m_heading; // @synthesize m_heading=_m_heading;
@property(nonatomic) unsigned long long m_headingTag; // @synthesize m_headingTag;
@property(nonatomic) unsigned long long m_locationTag; // @synthesize m_locationTag;
@property(retain, nonatomic) MMTimer *m_checkResultTimer; // @synthesize m_checkResultTimer;
@property(nonatomic) BOOL m_bShieldAccuracy; // @synthesize m_bShieldAccuracy;
@property(nonatomic) long long m_geoMode; // @synthesize m_geoMode;
@property(nonatomic) unsigned long long m_eBusType; // @synthesize m_eBusType;
@property(nonatomic) __weak id <LocationRetrieveDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) int m_timeoutCount; // @synthesize m_timeoutCount;
@property(nonatomic) float m_requiredAccuracy; // @synthesize m_requiredAccuracy;
@property(nonatomic) BOOL m_bCanRepeatReportLocation; // @synthesize m_bCanRepeatReportLocation;
@property(retain, nonatomic) NSMutableArray *m_recentLocationList; // @synthesize m_recentLocationList;
- (void).cxx_destruct;
- (BOOL)isLocationOK:(id)arg1;
- (double)locationAccuracy:(id)arg1;
- (BOOL)isAccurateLocation:(id)arg1;
- (id)getTrueLocation:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)onGPSLocationChanged:(id)arg1;
- (id)getBestResultFromLocationList;
- (void)onGpsTimerTimeCheck;
- (void)CancelRetrieveHeading;
- (void)RetrieveHeading;
- (void)CancelRetrieveLocation;
- (void)RetrieveLocation;
- (void)clear;
- (void)dealloc;
- (void)Reset;
- (void)stopCheckTimer;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

