//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TaskInstance;

@interface MMEventHandler_BaseEvent : NSObject
{
    BOOL _bSendToServer;
    TaskInstance *_taskInstance;
}

@property(nonatomic) BOOL bSendToServer; // @synthesize bSendToServer=_bSendToServer;
@property(retain, nonatomic) TaskInstance *taskInstance; // @synthesize taskInstance=_taskInstance;
- (void).cxx_destruct;
- (void)send:(id)arg1;
- (void)receiveTaskEvent:(id)arg1;
- (void)sendTaskEvent:(id)arg1;

@end
