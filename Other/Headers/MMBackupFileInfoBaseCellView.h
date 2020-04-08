//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class MMChatBackupRecord, NSButton, NSTextField;
@protocol MMBackupFileInfoCellViewDelegate;

@interface MMBackupFileInfoBaseCellView : NSTableCellView
{
    BOOL _isChoosen;
    id <MMBackupFileInfoCellViewDelegate> _delegate;
    NSButton *_checkbox;
    NSButton *_detailButton;
    NSButton *_deleteButton;
    NSTextField *_backupNameTextField;
    NSTextField *_firstBackupTimeTextField;
    NSTextField *_lastBackupTimeTextField;
    MMChatBackupRecord *_fileInfo;
}

+ (double)contentTextHeightWithBackupFileInfo:(id)arg1 constrainedToWidth:(double)arg2;
+ (struct CGRect)boundRectWithAttrStr:(id)arg1 constrainedToWidth:(double)arg2;
+ (id)getContentTextStringWith:(id)arg1;
+ (double)cellHeightWithBackupFileInfo:(id)arg1;
@property(retain, nonatomic) MMChatBackupRecord *fileInfo; // @synthesize fileInfo=_fileInfo;
@property(retain, nonatomic) NSTextField *lastBackupTimeTextField; // @synthesize lastBackupTimeTextField=_lastBackupTimeTextField;
@property(retain, nonatomic) NSTextField *firstBackupTimeTextField; // @synthesize firstBackupTimeTextField=_firstBackupTimeTextField;
@property(retain, nonatomic) NSTextField *backupNameTextField; // @synthesize backupNameTextField=_backupNameTextField;
@property(retain, nonatomic) NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) NSButton *detailButton; // @synthesize detailButton=_detailButton;
@property(retain, nonatomic) NSButton *checkbox; // @synthesize checkbox=_checkbox;
@property(nonatomic) __weak id <MMBackupFileInfoCellViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isChoosen; // @synthesize isChoosen=_isChoosen;
- (void).cxx_destruct;
- (void)showBackupProfile;
- (void)deleteBackup;
- (id)getBackupFileInfo;
- (void)setCheckboxIcon;
- (void)chooseToRecover;
- (void)populateWithBackupFileInfo:(id)arg1 viewMode:(int)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

