//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface MMAnimateView : NSView
{
}

+ (void)setAnimationsEnabled:(BOOL)arg1;
+ (BOOL)areAnimationsEnabled;
+ (void)setAnimationTransition:(unsigned long long)arg1 forView:(id)arg2 cache:(BOOL)arg3;
+ (void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)transitionWithView:(id)arg1 duration:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_beginAnimationsWithOptions:(unsigned long long)arg1;
+ (void)_setAnimationCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)_setAnimationTransitionView:(id)arg1;
+ (void)setAnimationWillStartSelector:(SEL)arg1;
+ (void)setAnimationRepeatCount:(float)arg1;
+ (void)setAnimationRepeatAutoreverses:(BOOL)arg1;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationDidStopSelector:(SEL)arg1;
+ (void)setAnimationDelegate:(id)arg1;
+ (void)setAnimationDelay:(double)arg1;
+ (void)setAnimationCurve:(unsigned long long)arg1;
+ (void)setAnimationBeginsFromCurrentState:(BOOL)arg1;
+ (void)commitAnimations;
+ (void)animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
+ (void)animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;

@end

