//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WAPermissionResult : MMObject
{
    BOOL _needDelayExecute;
    BOOL _resultHasPermission;
    unsigned int _permissionState;
    unsigned int _runningState;
    NSString *_runningStateDescription;
    NSString *_permissionMsg;
    NSString *_resultMsg;
}

+ (id)getSucceedResult;
+ (id)getFailedResult;
@property(nonatomic) BOOL resultHasPermission; // @synthesize resultHasPermission=_resultHasPermission;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(retain, nonatomic) NSString *permissionMsg; // @synthesize permissionMsg=_permissionMsg;
@property(nonatomic) BOOL needDelayExecute; // @synthesize needDelayExecute=_needDelayExecute;
@property(retain, nonatomic) NSString *runningStateDescription; // @synthesize runningStateDescription=_runningStateDescription;
@property(nonatomic) unsigned int runningState; // @synthesize runningState=_runningState;
@property(nonatomic) unsigned int permissionState; // @synthesize permissionState=_permissionState;
- (void).cxx_destruct;

@end

