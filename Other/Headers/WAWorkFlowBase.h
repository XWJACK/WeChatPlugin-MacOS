//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAWorkFlowImplement-Protocol.h"

@class NSMutableArray, NSString;

@interface WAWorkFlowBase : NSObject <WAWorkFlowImplement>
{
    NSString *_workFlowName;
    NSMutableArray *_arrStepInfo;
    id _context;
    BOOL _isStartRun;
    BOOL _isCancel;
    CDUnknownBlockType _completeHandler;
}

- (void).cxx_destruct;
- (void)callSuccess;
- (void)callFail:(id)arg1;
- (void)callCompleteHandler:(BOOL)arg1 error:(id)arg2;
- (BOOL)checkFinishedStepInfo:(id)arg1 getStepInfoIndex:(unsigned long long *)arg2;
- (void)runStepSubWorkFlow:(id)arg1;
- (void)runStepBlock:(id)arg1;
- (BOOL)runOneStep:(id)arg1;
- (void)onStepFinish:(id)arg1 isSuccess:(BOOL)arg2 error:(id)arg3;
- (void)runSteps;
- (void)cancel;
- (void)runWithContext:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)addStepSubWorkFlow:(id)arg1;
- (void)addStepName:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)workFlowName;
- (id)initWithName:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

