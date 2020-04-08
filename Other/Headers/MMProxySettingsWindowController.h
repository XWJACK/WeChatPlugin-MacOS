//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class CAShapeLayer, MMLoadingButton, MMStateToastView, MMTimer, NSButton, NSMutableDictionary, NSSecureTextField, NSTextField, NSView;

@interface MMProxySettingsWindowController : NSWindowController
{
    int _proxyType;
    NSView *_proxySettingsContainerView;
    NSButton *_proxyUnableButton;
    NSButton *_proxyEnableButton;
    NSTextField *_useProxyTitleTextField;
    NSTextField *_proxyIPTitleTextField;
    NSTextField *_proxyPortTitleTextField;
    NSTextField *_proxyUsernameTitleTextField;
    NSTextField *_proxyPasswordTitleTextField;
    NSTextField *_proxyIPTextField;
    NSTextField *_proxyPortTextField;
    NSTextField *_proxyUsernameTextField;
    NSSecureTextField *_proxyPasswordTextField;
    MMLoadingButton *_proxyConfirmButton;
    MMStateToastView *_toastView;
    MMTimer *_proxySettingsTimer;
    CAShapeLayer *_shapeLayer;
    NSMutableDictionary *_proxyInfo;
}

+ (id)sharedInstance;
@property(nonatomic) int proxyType; // @synthesize proxyType=_proxyType;
@property(retain, nonatomic) NSMutableDictionary *proxyInfo; // @synthesize proxyInfo=_proxyInfo;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) MMTimer *proxySettingsTimer; // @synthesize proxySettingsTimer=_proxySettingsTimer;
@property(retain, nonatomic) MMStateToastView *toastView; // @synthesize toastView=_toastView;
@property __weak MMLoadingButton *proxyConfirmButton; // @synthesize proxyConfirmButton=_proxyConfirmButton;
@property(nonatomic) __weak NSSecureTextField *proxyPasswordTextField; // @synthesize proxyPasswordTextField=_proxyPasswordTextField;
@property(nonatomic) __weak NSTextField *proxyUsernameTextField; // @synthesize proxyUsernameTextField=_proxyUsernameTextField;
@property(nonatomic) __weak NSTextField *proxyPortTextField; // @synthesize proxyPortTextField=_proxyPortTextField;
@property(nonatomic) __weak NSTextField *proxyIPTextField; // @synthesize proxyIPTextField=_proxyIPTextField;
@property __weak NSTextField *proxyPasswordTitleTextField; // @synthesize proxyPasswordTitleTextField=_proxyPasswordTitleTextField;
@property __weak NSTextField *proxyUsernameTitleTextField; // @synthesize proxyUsernameTitleTextField=_proxyUsernameTitleTextField;
@property __weak NSTextField *proxyPortTitleTextField; // @synthesize proxyPortTitleTextField=_proxyPortTitleTextField;
@property __weak NSTextField *proxyIPTitleTextField; // @synthesize proxyIPTitleTextField=_proxyIPTitleTextField;
@property __weak NSTextField *useProxyTitleTextField; // @synthesize useProxyTitleTextField=_useProxyTitleTextField;
@property __weak NSButton *proxyEnableButton; // @synthesize proxyEnableButton=_proxyEnableButton;
@property __weak NSButton *proxyUnableButton; // @synthesize proxyUnableButton=_proxyUnableButton;
@property __weak NSView *proxySettingsContainerView; // @synthesize proxySettingsContainerView=_proxySettingsContainerView;
- (void).cxx_destruct;
- (void)updateViewWithStartTest:(unsigned char)arg1;
- (void)updateConfirmButton;
- (void)proxySettingsDidChange:(id)arg1;
- (void)closeToastPanel;
- (void)showCompleteToastWith:(id)arg1 imageName:(id)arg2 autoHide:(unsigned char)arg3;
- (id)makeProxyPasswordTextField;
- (id)makeProxyUsernameTextField;
- (id)makeProxyPortTextField;
- (id)makeProxyIPTextField;
- (void)updateProxySettingsViewWithEable:(unsigned char)arg1;
- (void)resetProxySettings;
- (void)confirmProxySettings:(id)arg1;
- (void)enableProxySettings:(id)arg1;
- (void)unableProxySettings:(id)arg1;
- (void)genProxySettings;
- (void)setupProxySettings;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;
- (id)initWithCoder:(id)arg1;

@end

