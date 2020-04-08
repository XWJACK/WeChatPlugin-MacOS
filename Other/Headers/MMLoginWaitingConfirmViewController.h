//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

@class MMButton, NSImageView, NSString, NSTextField;

@interface MMLoginWaitingConfirmViewController : MMViewController
{
    NSString *_avatarURL;
    NSString *_avatarUserName;
    MMButton *_unlinkButton;
    MMButton *_unlinkChevronButton;
    NSTextField *_titleLabel;
    NSTextField *_descriptionLabel;
    NSImageView *_avatarView;
    CDUnknownBlockType _didClickCancelButtonBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didClickCancelButtonBlock; // @synthesize didClickCancelButtonBlock=_didClickCancelButtonBlock;
@property(nonatomic) __weak NSImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) __weak NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MMButton *unlinkChevronButton; // @synthesize unlinkChevronButton=_unlinkChevronButton;
@property(nonatomic) __weak MMButton *unlinkButton; // @synthesize unlinkButton=_unlinkButton;
@property(retain, nonatomic) NSString *avatarUserName; // @synthesize avatarUserName=_avatarUserName;
@property(retain, nonatomic) NSString *avatarURL; // @synthesize avatarURL=_avatarURL;
- (void).cxx_destruct;
- (void)setInitProgress:(unsigned int)arg1;
- (void)setDescriptionString:(id)arg1;
- (void)setTitleLabelString:(id)arg1;
- (void)updateAvatarImageByUserName;
- (void)updateAvatarImageByUrl;
- (void)setupUnlinkButton;
- (void)setupDescriptionLabel;
- (void)setupTitleLabel;
- (void)setupAvatarView;
- (void)viewDidAppear;
- (void)viewDidLoad;

@end
