//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "LocationRetrieveDelegate-Protocol.h"

@class LocationRetriever, NSString, WAWebViewPlugin_CustomNavigationBar;

@interface WAJSEventHandler_getLocation : WAJSEventHandler_BaseEvent <LocationRetrieveDelegate>
{
    long long m_geoLocationType;
    LocationRetriever *_locationRetriever;
    WAWebViewPlugin_CustomNavigationBar *_customNavBar;
    BOOL bRetry;
}

- (void).cxx_destruct;
- (void)getLocationFromHttp;
- (void)showAlertLocationWording;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)updateWebviewTitle;
- (id)getWebViewController;
- (void)onDelayDismiss;
- (void)startRetrieverAddress;
- (void)OnAskAuthorizationFailure:(id)arg1 ForAuthInfo:(id)arg2;
- (void)OnAskAuthorizationSuccessForAuthInfo:(id)arg1;
- (void)getLocation:(long long)arg1;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)unregister;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

