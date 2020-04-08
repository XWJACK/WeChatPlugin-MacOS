//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

@class CContact, MMImageView, NSButton, NSString, NSTextField, NSView, WADotLoadingView;
@protocol WALoadingViewControllerDelegate;

@interface WALoadingViewController : WAViewController
{
    BOOL _isCallReturn;
    BOOL _isStartLoading;
    CContact *_contact;
    id <WALoadingViewControllerDelegate> _delegate;
    NSString *_pagePath;
    NSString *_navTitle;
    NSString *_backColorStr;
    NSView *_backgroundView;
    NSTextField *_titleTextField;
    MMImageView *_iconImageView;
    WADotLoadingView *_dotView;
    NSButton *_moreBtn;
    NSButton *_closeBtn;
}

@property(retain, nonatomic) NSButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) NSButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) WADotLoadingView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) MMImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(nonatomic) __weak NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) BOOL isStartLoading; // @synthesize isStartLoading=_isStartLoading;
@property(copy, nonatomic) NSString *backColorStr; // @synthesize backColorStr=_backColorStr;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) BOOL isCallReturn; // @synthesize isCallReturn=_isCallReturn;
@property(nonatomic) __weak id <WALoadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)removeMyselfInViewControllers;
- (void)showDownloadingProgressView;
- (void)startEnterAppAnimation;
- (void)startLoadContactAnimation;
- (void)onClickExit:(id)arg1;
- (void)updateContact:(id)arg1;
- (void)layoutContent;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1 pagePath:(id)arg2;

@end
