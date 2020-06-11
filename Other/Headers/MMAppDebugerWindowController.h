//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "MMCGIDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class NSButton, NSString, NSTextField, WAAppWindowController;

@interface MMAppDebugerWindowController : NSWindowController <MMCGIDelegate, NSWindowDelegate>
{
    WAAppWindowController *_appWindowController;
    NSString *_currentReqStr;
    NSTextField *_widthTextField;
    NSTextField *_heightTextField;
    NSButton *_resizeableButton;
    NSButton *_showTitleBarButton;
    NSButton *_consoleButton;
    NSTextField *_customPathTextField;
}

@property(nonatomic) __weak NSTextField *customPathTextField; // @synthesize customPathTextField=_customPathTextField;
@property(nonatomic) __weak NSButton *consoleButton; // @synthesize consoleButton=_consoleButton;
@property(nonatomic) __weak NSButton *showTitleBarButton; // @synthesize showTitleBarButton=_showTitleBarButton;
@property(nonatomic) __weak NSButton *resizeableButton; // @synthesize resizeableButton=_resizeableButton;
@property(nonatomic) __weak NSTextField *heightTextField; // @synthesize heightTextField=_heightTextField;
@property(nonatomic) __weak NSTextField *widthTextField; // @synthesize widthTextField=_widthTextField;
@property(retain, nonatomic) NSString *currentReqStr; // @synthesize currentReqStr=_currentReqStr;
@property(retain, nonatomic) WAAppWindowController *appWindowController; // @synthesize appWindowController=_appWindowController;
- (void).cxx_destruct;
- (void)OnResponseCGIFailedWithSessionId:(unsigned int)arg1 cgiWrap:(id)arg2 errType:(unsigned int)arg3 errCode:(unsigned int)arg4;
- (void)OnGetA8Key:(id)arg1;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (void)GetA8Key:(id)arg1 Scene:(unsigned int)arg2 codeType:(unsigned int)arg3 codeVersion:(unsigned int)arg4 appId:(id)arg5;
- (id)stringByUrlDecoded:(id)arg1;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (struct CGImage *)CGImage:(id)arg1;
- (void)uploadQRCode:(id)arg1;
- (void)generateLaunchInfo:(id)arg1;
- (void)saveCustomPath:(id)arg1;
- (void)onClickDefaultPath:(id)arg1;
- (void)onClickChoosePath:(id)arg1;
- (void)onClickConsoleButton:(id)arg1;
- (void)onClickTitleBarButton:(id)arg1;
- (void)onClickResizeable:(id)arg1;
- (void)onClickApplyButton:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)initWithWindowNibName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

