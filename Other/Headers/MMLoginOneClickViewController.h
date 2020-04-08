//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMViewController.h"

@class MMAvatarImageView, MMButton, MMTextField, NSString;

@interface MMLoginOneClickViewController : MMViewController
{
    MMAvatarImageView *_avatarView;
    MMButton *_loginButton;
    MMButton *_unlinkButton;
    MMTextField *_descriptionLabel;
    MMButton *_unlinkChevronButton;
    CDUnknownBlockType _didClickLoginButtonBlock;
    CDUnknownBlockType _didClickUnlinkButtonBlock;
    NSString *_avatarUrl;
    NSString *_avatarUserName;
}

@property(retain, nonatomic) NSString *avatarUserName; // @synthesize avatarUserName=_avatarUserName;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) CDUnknownBlockType didClickUnlinkButtonBlock; // @synthesize didClickUnlinkButtonBlock=_didClickUnlinkButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickLoginButtonBlock; // @synthesize didClickLoginButtonBlock=_didClickLoginButtonBlock;
@property(nonatomic) __weak MMButton *unlinkChevronButton; // @synthesize unlinkChevronButton=_unlinkChevronButton;
@property(nonatomic) __weak MMTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak MMButton *unlinkButton; // @synthesize unlinkButton=_unlinkButton;
@property(nonatomic) __weak MMButton *loginButton; // @synthesize loginButton=_loginButton;
@property(nonatomic) __weak MMAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)setupAvatarWithUserName;
- (void)setupAvatarWithUrl;
- (void)setupAvatar;
- (void)onLoginButtonClicked:(id)arg1;
- (void)setupDescriptionLabel;
- (void)setupUnlinkButton;
- (void)setupLoginButton;
- (void)dealloc;
- (void)viewDidAppear;
- (void)resetOneClickView;
- (void)viewDidLoad;

@end

