//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IntelligentRouteDelegate;

@interface TXCIntelligentRoute : NSObject
{
    id <IntelligentRouteDelegate> _delegate;
}

@property(nonatomic) __weak id <IntelligentRouteDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)printIPList:(id)arg1;
- (id)adjustIPList:(id)arg1 withDomainFirst:(BOOL)arg2;
- (BOOL)isPureInt:(id)arg1;
- (BOOL)isDomain:(id)arg1;
- (id)getIPRecord:(id)arg1;
- (id)parseIpList:(id)arg1;
- (void)internalFetchByUrl:(id)arg1;
- (void)fetchByUrl:(id)arg1 rtmpChannelType:(int)arg2;
- (id)initWithDelegate:(id)arg1;

@end
