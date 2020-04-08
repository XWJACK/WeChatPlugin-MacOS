//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSViewController;
@protocol JSApiScopeConfirmWindowDelegate;

@interface JSApiScopeConfirmWindow : NSObject
{
    NSViewController *_precentViewController;
    NSViewController *_rootViewController;
    NSString *_appName;
    NSString *_appIconURL;
    NSArray *_arrScopeInfo;
    NSString *_confirmTitle;
    unsigned long long _orientation;
    id <JSApiScopeConfirmWindowDelegate> _confirmWindowDelegate;
}

@property(nonatomic) __weak id <JSApiScopeConfirmWindowDelegate> confirmWindowDelegate; // @synthesize confirmWindowDelegate=_confirmWindowDelegate;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSString *confirmTitle; // @synthesize confirmTitle=_confirmTitle;
@property(retain, nonatomic) NSArray *arrScopeInfo; // @synthesize arrScopeInfo=_arrScopeInfo;
@property(retain, nonatomic) NSString *appIconURL; // @synthesize appIconURL=_appIconURL;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak NSViewController *precentViewController; // @synthesize precentViewController=_precentViewController;
- (void).cxx_destruct;
- (void)close;
- (void)setupView;
- (void)dealloc;

@end

