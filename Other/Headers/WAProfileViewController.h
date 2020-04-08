//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAViewController.h"

#import "IMessageExt-Protocol.h"
#import "RemoteTaskCenterExt-Protocol.h"
#import "WAAppActionSheetDelegate-Protocol.h"
#import "WAProfileContentViewDelegate-Protocol.h"

@class CContact, MMButton, NSDictionary, NSImageView, NSMutableSet, NSString, NSTextField, NSView, WAAppActionSheet, WAProfileContentViewController;

@interface WAProfileViewController : WAViewController <WAAppActionSheetDelegate, IMessageExt, RemoteTaskCenterExt, WAProfileContentViewDelegate>
{
    BOOL _isEnterStatReported;
    BOOL _isEnterStatisticUploaded;
    unsigned int _fromAppVersion;
    unsigned int _enterProfileTimeStamp;
    unsigned long long _enterScene;
    NSString *_sceneNote;
    unsigned long long _exposeFrom;
    NSString *_pagePath;
    unsigned long long _fromDebugMode;
    NSDictionary *_exposeExtraInfo;
    unsigned long long _preScene;
    NSString *_preSceneNote;
    NSString *_userName;
    CContact *_contact;
    NSView *_headerContainerView;
    NSImageView *_avatarImageView;
    NSTextField *_titleLabel;
    NSTextField *_detailLabel;
    MMButton *_openButton;
    MMButton *_shareButton;
    NSView *_infoContainerView;
    WAAppActionSheet *_actionSheet;
    NSMutableSet *_shareMessagesId;
    WAProfileContentViewController *_popoverView;
}

@property(retain, nonatomic) WAProfileContentViewController *popoverView; // @synthesize popoverView=_popoverView;
@property(retain, nonatomic) NSMutableSet *shareMessagesId; // @synthesize shareMessagesId=_shareMessagesId;
@property(retain, nonatomic) WAAppActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) __weak NSView *infoContainerView; // @synthesize infoContainerView=_infoContainerView;
@property(nonatomic) __weak MMButton *shareButton; // @synthesize shareButton=_shareButton;
@property(nonatomic) __weak MMButton *openButton; // @synthesize openButton=_openButton;
@property(nonatomic) __weak NSTextField *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak NSView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(nonatomic) unsigned int enterProfileTimeStamp; // @synthesize enterProfileTimeStamp=_enterProfileTimeStamp;
@property(nonatomic) BOOL isEnterStatisticUploaded; // @synthesize isEnterStatisticUploaded=_isEnterStatisticUploaded;
@property(nonatomic) BOOL isEnterStatReported; // @synthesize isEnterStatReported=_isEnterStatReported;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *preSceneNote; // @synthesize preSceneNote=_preSceneNote;
@property(nonatomic) unsigned long long preScene; // @synthesize preScene=_preScene;
@property(retain, nonatomic) NSDictionary *exposeExtraInfo; // @synthesize exposeExtraInfo=_exposeExtraInfo;
@property(nonatomic) unsigned int fromAppVersion; // @synthesize fromAppVersion=_fromAppVersion;
@property(nonatomic) unsigned long long fromDebugMode; // @synthesize fromDebugMode=_fromDebugMode;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
@property(nonatomic) unsigned long long exposeFrom; // @synthesize exposeFrom=_exposeFrom;
@property(copy, nonatomic) NSString *sceneNote; // @synthesize sceneNote=_sceneNote;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
- (void).cxx_destruct;
- (void)onPopoverContentCellClick:(id)arg1;
- (BOOL)openFeedback;
- (void)openWebviewWindowWithUrlString:(id)arg1;
- (id)genCategoryString;
- (void)onAppMsgSendFinish:(id)arg1 msgData:(id)arg2;
- (void)onForwardMsgCallBack:(id)arg1 withErrCode:(int)arg2;
- (void)onShareButtonClicked:(id)arg1;
- (void)onEnterButtonClicked:(id)arg1;
- (void)openBrandContact:(id)arg1;
- (void)openDevInfo:(id)arg1;
- (void)onClickNavRightButton:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)onWAActionSheetClickButtonWithButtonTitle:(id)arg1;
- (void)onWAActionSheetDidDismiss;
- (void)updateWeappContact;
- (void)initViews;
- (void)reloadData;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)initWithUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
