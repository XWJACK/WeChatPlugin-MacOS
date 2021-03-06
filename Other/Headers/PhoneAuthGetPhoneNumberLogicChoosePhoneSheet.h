//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPageSheet.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MASConstraint, MMButton, MMUILabel, NSButton, NSImageView, NSScrollView, NSString, NSTableView, NSView, PhoneAuthGetPhoneNumberLogicChoosePhoneSheetInfo, WAReportPhoneAuthActionItem;
@protocol GetPhoneNumberLogicChoosePhoneSheetDelegate;

@interface PhoneAuthGetPhoneNumberLogicChoosePhoneSheet : WAPageSheet <NSTableViewDelegate, NSTableViewDataSource>
{
    long long _currentToggledIndexRow;
    WAReportPhoneAuthActionItem *_actionItem;
    id <GetPhoneNumberLogicChoosePhoneSheetDelegate> _phoneSheetDelegate;
    PhoneAuthGetPhoneNumberLogicChoosePhoneSheetInfo *_info;
    NSImageView *_avartarIconImageView;
    MMUILabel *_appNameLabel;
    MMUILabel *_requireLabel;
    NSButton *_infomationButton;
    MMUILabel *_yourPhoneListTitleLabel;
    NSTableView *_phoneListTableView;
    NSScrollView *_phoneListScrollView;
    NSButton *_managePhoneListButton;
    NSButton *_useOtherPhoneButton;
    MMButton *_rejectButton;
    MMButton *_allowButton;
    NSView *_infomationView;
    NSButton *_infomationReturnButton;
    MMUILabel *_descTitleLabel;
    MMUILabel *_descContentTextView;
    MASConstraint *_informationLeftConstraint;
}

@property(retain, nonatomic) MASConstraint *informationLeftConstraint; // @synthesize informationLeftConstraint=_informationLeftConstraint;
@property(retain, nonatomic) MMUILabel *descContentTextView; // @synthesize descContentTextView=_descContentTextView;
@property(retain, nonatomic) MMUILabel *descTitleLabel; // @synthesize descTitleLabel=_descTitleLabel;
@property(retain, nonatomic) NSButton *infomationReturnButton; // @synthesize infomationReturnButton=_infomationReturnButton;
@property(retain, nonatomic) NSView *infomationView; // @synthesize infomationView=_infomationView;
@property(retain, nonatomic) MMButton *allowButton; // @synthesize allowButton=_allowButton;
@property(retain, nonatomic) MMButton *rejectButton; // @synthesize rejectButton=_rejectButton;
@property(retain, nonatomic) NSButton *useOtherPhoneButton; // @synthesize useOtherPhoneButton=_useOtherPhoneButton;
@property(retain, nonatomic) NSButton *managePhoneListButton; // @synthesize managePhoneListButton=_managePhoneListButton;
@property(retain, nonatomic) NSScrollView *phoneListScrollView; // @synthesize phoneListScrollView=_phoneListScrollView;
@property(retain, nonatomic) NSTableView *phoneListTableView; // @synthesize phoneListTableView=_phoneListTableView;
@property(retain, nonatomic) MMUILabel *yourPhoneListTitleLabel; // @synthesize yourPhoneListTitleLabel=_yourPhoneListTitleLabel;
@property(retain, nonatomic) NSButton *infomationButton; // @synthesize infomationButton=_infomationButton;
@property(retain, nonatomic) MMUILabel *requireLabel; // @synthesize requireLabel=_requireLabel;
@property(retain, nonatomic) MMUILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) NSImageView *avartarIconImageView; // @synthesize avartarIconImageView=_avartarIconImageView;
@property(retain, nonatomic) PhoneAuthGetPhoneNumberLogicChoosePhoneSheetInfo *info; // @synthesize info=_info;
@property(nonatomic) __weak id <GetPhoneNumberLogicChoosePhoneSheetDelegate> phoneSheetDelegate; // @synthesize phoneSheetDelegate=_phoneSheetDelegate;
@property(retain, nonatomic) WAReportPhoneAuthActionItem *actionItem; // @synthesize actionItem=_actionItem;
- (void).cxx_destruct;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)handleOnUseOtherPhoneButtonEvent:(id)arg1;
- (void)handleOnManagePhoneListButtonEvent:(id)arg1;
- (void)handleOnInfomationButtonReturnEvent:(id)arg1;
- (void)handleOnInfomationButtonEvent:(id)arg1;
- (void)onAllow:(id)arg1;
- (void)onReject:(id)arg1;
- (double)calTableViewHeight;
- (double)contentHeight;
- (void)layoutSubViews;
- (void)initInfomationView;
- (void)setupConstraints;
- (void)loadSubViews;
- (void)togglePhone:(id)arg1;
- (BOOL)hasMoreThanOnePhoneOption;
- (void)reloadInfo:(id)arg1;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

