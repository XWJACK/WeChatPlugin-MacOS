//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "WACameraLogicControllerDelegate-Protocol.h"

@class NSArray, NSButton, NSImage, NSImageView, NSPopUpButton, NSString, NSTextField, NSView, WACameraLogicController;
@protocol WATakePhotoViewControllerDelegate;

@interface WATakePhotoViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, WACameraLogicControllerDelegate>
{
    id <WATakePhotoViewControllerDelegate> _delegate;
    NSButton *_confirmButton;
    NSButton *_cancelButton;
    NSImageView *_previewImageView;
    NSView *_cameraView;
    WACameraLogicController *_cameraLogic;
    NSView *_animationView;
    NSImage *_choosedImage;
    NSPopUpButton *_devicesChooseButton;
    NSArray *_devices;
    NSButton *_screenFlashButton;
    NSTextField *_noConnectLabel;
}

@property __weak NSTextField *noConnectLabel; // @synthesize noConnectLabel=_noConnectLabel;
@property __weak NSButton *screenFlashButton; // @synthesize screenFlashButton=_screenFlashButton;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property __weak NSPopUpButton *devicesChooseButton; // @synthesize devicesChooseButton=_devicesChooseButton;
@property(retain, nonatomic) NSImage *choosedImage; // @synthesize choosedImage=_choosedImage;
@property __weak NSView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) WACameraLogicController *cameraLogic; // @synthesize cameraLogic=_cameraLogic;
@property(retain, nonatomic) NSView *cameraView; // @synthesize cameraView=_cameraView;
@property __weak NSImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak id <WATakePhotoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onCameraPictureTaken:(id)arg1 withFrontCamera:(BOOL)arg2;
- (void)devicesWasDisconnected:(id)arg1;
- (void)devicesWasConnected:(id)arg1;
- (void)onDevicesChange:(id)arg1;
- (void)onClickScreenFlashButton:(id)arg1;
- (void)updateViewStatus:(BOOL)arg1;
- (void)showTakePhotoAnimationCompletion:(CDUnknownBlockType)arg1;
- (void)onClickRetryButton:(id)arg1;
- (void)onClickTakePhotoButton:(id)arg1;
- (void)onClickConfirmButton:(id)arg1;
- (void)onClickCancelButton:(id)arg1;
- (void)showErrorLabel:(id)arg1;
- (void)reloadDevices;
- (void)dealloc;
- (void)initCamera;
- (void)initViews;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

