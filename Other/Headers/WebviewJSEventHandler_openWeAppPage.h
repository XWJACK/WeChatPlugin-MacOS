//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "OpenWeAppAdapterExt-Protocol.h"

@class JSEvent, NSString;

@interface WebviewJSEventHandler_openWeAppPage : WebviewJSEventHandlerBase <OpenWeAppAdapterExt>
{
    JSEvent *_myEvent;
    NSString *_userName;
}

@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) JSEvent *myEvent; // @synthesize myEvent=_myEvent;
- (void).cxx_destruct;
- (void)doOpenWeAppSuccess:(id)arg1 withUserName:(id)arg2;
- (void)doOpenWeAppFailed:(id)arg1 withUserName:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

