//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "AccountServiceExt-Protocol.h"
#import "NSWindowDelegate-Protocol.h"
#import "WeChatSearchProtocol-Protocol.h"

@class MMDivider, MMSessionChoosenView, MMSessionListView, NSString, NSWindow, WCContactData;

@interface MMSessionPickerWindow : NSWindowController <AccountServiceExt, WeChatSearchProtocol, NSWindowDelegate>
{
    NSString *_headingText;
    NSWindow *_spawningWindow;
    WCContactData *_sharedContact;
    MMSessionListView *_listViewController;
    MMSessionChoosenView *_choosenViewController;
    MMDivider *_verticalDivider;
    struct CGSize _originalSize;
}

+ (id)shareInstance;
@property(nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(retain, nonatomic) MMDivider *verticalDivider; // @synthesize verticalDivider=_verticalDivider;
@property(retain, nonatomic) MMSessionChoosenView *choosenViewController; // @synthesize choosenViewController=_choosenViewController;
@property(retain, nonatomic) MMSessionListView *listViewController; // @synthesize listViewController=_listViewController;
@property(retain, nonatomic) WCContactData *sharedContact; // @synthesize sharedContact=_sharedContact;
@property(nonatomic) __weak NSWindow *spawningWindow; // @synthesize spawningWindow=_spawningWindow;
@property(retain, nonatomic) NSString *headingText; // @synthesize headingText=_headingText;
- (void).cxx_destruct;
- (void)performSearchAction;
- (void)onUserLogout;
- (void)onCurrentNetworkLockStateWillChange:(BOOL)arg1;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)setAssignedContact:(id)arg1;
- (void)setFilteredUserNames:(id)arg1;
- (void)setForwardMessageData:(id)arg1;
- (void)setPreSelectedUserNames:(id)arg1;
- (void)setPreSelectedContact:(id)arg1;
- (void)setCancelButtonText:(id)arg1;
- (void)setConfirmButtonText:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setShowsOtherNonhumanChats:(BOOL)arg1;
- (void)setShowsOfficialAccounts:(BOOL)arg1;
- (void)setShowsGroupChats:(BOOL)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)_showSendSuccess;
- (void)endSheet;
- (void)showWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rebeginSheet;
- (void)beginSheetForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (void)beginSheetForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setWindowResizable:(BOOL)arg1;
- (void)beginRemoveMemberSheetForWindow:(id)arg1 assignedContact:(id)arg2 confirmButtonText:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginAddMemberSheetForWindow:(id)arg1 preSelectedContact:(id)arg2 confirmButtonText:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)beginNewChatSheetForWindow:(id)arg1 confirmButtonText:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginForwardSheetForWindow:(id)arg1 messageData:(id)arg2 showsGroupChats:(BOOL)arg3 showsOtherNonhumanChats:(BOOL)arg4 confirmButtonText:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)clearDataOnWindowDidEndSheet;
- (void)windowDidResize:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (void)destroy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

