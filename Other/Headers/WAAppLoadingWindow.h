//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMAppMouseEventView, NSString, WALoadingView;

@interface WAAppLoadingWindow : NSObject
{
    MMAppMouseEventView *_interateView;
    WALoadingView *_loadingView;
    NSString *_text;
    struct CGRect _parentFrame;
}

@property(nonatomic) struct CGRect parentFrame; // @synthesize parentFrame=_parentFrame;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) WALoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MMAppMouseEventView *interateView; // @synthesize interateView=_interateView;
- (void).cxx_destruct;
- (void)endLoading;
- (void)startLoading;
- (void)initInterateView;
- (void)initLoadingView;
- (void)showInView:(id)arg1 withText:(id)arg2;
- (void)showInView:(id)arg1;
- (void)releaseViews;

@end

