//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CContact, MMAppMouseEventView, MMButton, MMTableView, NSImageView, NSString, NSTextField, NSView, ScopeInfo;
@protocol WAAppScopeConfirmWindowDelegate;

@interface WAAppScopeConfirmWindow : NSObject
{
    NSString *_appId;
    NSString *_appName;
    NSString *_appIconURL;
    ScopeInfo *_scopeInfo;
    NSString *_allowWording;
    NSString *_cacelWording;
    NSString *_applyWording;
    unsigned long long _orientation;
    id <WAAppScopeConfirmWindowDelegate> _confirmWindowDelegate;
    MMAppMouseEventView *_interateView;
    NSView *_containerView;
    NSView *_parentView;
    NSImageView *_maskView;
    CContact *_m_contact;
    MMButton *_cancleButton;
    MMButton *_confirmButton;
    NSImageView *_iconImageView;
    NSTextField *_nameLabel;
    NSTextField *_descLabel;
    MMTableView *_tableView;
}

@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSTextField *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) NSTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMButton *cancleButton; // @synthesize cancleButton=_cancleButton;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact=_m_contact;
@property(retain, nonatomic) NSImageView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) __weak NSView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) MMAppMouseEventView *interateView; // @synthesize interateView=_interateView;
@property(nonatomic) __weak id <WAAppScopeConfirmWindowDelegate> confirmWindowDelegate; // @synthesize confirmWindowDelegate=_confirmWindowDelegate;
@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSString *applyWording; // @synthesize applyWording=_applyWording;
@property(retain, nonatomic) NSString *cacelWording; // @synthesize cacelWording=_cacelWording;
@property(retain, nonatomic) NSString *allowWording; // @synthesize allowWording=_allowWording;
@property(retain, nonatomic) ScopeInfo *scopeInfo; // @synthesize scopeInfo=_scopeInfo;
@property(retain, nonatomic) NSString *appIconURL; // @synthesize appIconURL=_appIconURL;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)onClickButtonCancel:(id)arg1;
- (void)onClickButtonConfirm:(id)arg1;
- (id)formatNickNameText:(id)arg1;
- (void)initMaskView;
- (void)initInterateView;
- (void)initContainerView;
- (void)dismissWithAnimation;
- (void)showInView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (double)getActionSheetWidth;
- (void)_releaseViews;

@end

