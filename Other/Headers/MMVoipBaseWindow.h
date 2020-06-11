//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class CAGradientLayer, MMAnimateButtonWrapper, MMAnimateTextFieldWrapper, MMAvatarImageView, MMScaleToFillNSImageView, MMStringToastView, MMTextView, MMTimerLabel, MMVoipRenderView, NSButton, NSImageView, NSTextField, NSView, NSVisualEffectView, SVGButton;

@interface MMVoipBaseWindow : NSWindow
{
    BOOL _renderLayerAspectRatio;
    BOOL _renderLayerAspectRatioBeforeEnterFullScreen;
    NSView *_controlView;
    MMVoipRenderView *_renderView;
    MMAvatarImageView *_avatarView;
    MMTextView *_nameLabel;
    NSTextField *_inviteStatusLabel;
    MMTimerLabel *_callTimeLabel;
    MMStringToastView *_tipsLabel;
    unsigned long long _dotCountIncrement;
    NSView *_buttonContainer;
    MMAnimateButtonWrapper *_muteBtn;
    SVGButton *_hangUpBtn;
    MMAnimateTextFieldWrapper *_hangUpBtnTipsLabel;
    SVGButton *_answerBtn;
    MMAnimateTextFieldWrapper *_answerBtnTipsLabel;
    SVGButton *_switchToVoiceChatBtn;
    NSButton *_rotateBtn;
    MMAnimateTextFieldWrapper *_muteBtnTipsLabel;
    NSTextField *_switchToVoiceBtnTipsLabel;
    NSTextField *_rotateTipsLabel;
    CAGradientLayer *_upperGradientLayer;
    CAGradientLayer *_lowerGradientLayer;
    MMScaleToFillNSImageView *_hdAvatarImgView;
    NSImageView *_voiceModeAnimateDotView;
    NSView *_effectiveViewAboveRenderView;
    SVGButton *_stickButton;
    NSView *_visualEffectView;
    NSVisualEffectView *_toolVisualEffectView;
    SVGButton *_openCameraBtn;
    NSTextField *_openCameraTipLabel;
    SVGButton *_addMemberBtn;
    NSTextField *_addMemberTipLabel;
}

@property(nonatomic) BOOL renderLayerAspectRatioBeforeEnterFullScreen; // @synthesize renderLayerAspectRatioBeforeEnterFullScreen=_renderLayerAspectRatioBeforeEnterFullScreen;
@property(retain, nonatomic) NSTextField *addMemberTipLabel; // @synthesize addMemberTipLabel=_addMemberTipLabel;
@property(retain, nonatomic) SVGButton *addMemberBtn; // @synthesize addMemberBtn=_addMemberBtn;
@property(retain, nonatomic) NSTextField *openCameraTipLabel; // @synthesize openCameraTipLabel=_openCameraTipLabel;
@property(retain, nonatomic) SVGButton *openCameraBtn; // @synthesize openCameraBtn=_openCameraBtn;
@property(retain, nonatomic) NSVisualEffectView *toolVisualEffectView; // @synthesize toolVisualEffectView=_toolVisualEffectView;
@property(retain, nonatomic) NSView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) SVGButton *stickButton; // @synthesize stickButton=_stickButton;
@property(retain, nonatomic) NSView *effectiveViewAboveRenderView; // @synthesize effectiveViewAboveRenderView=_effectiveViewAboveRenderView;
@property(retain, nonatomic) NSImageView *voiceModeAnimateDotView; // @synthesize voiceModeAnimateDotView=_voiceModeAnimateDotView;
@property(retain, nonatomic) MMScaleToFillNSImageView *hdAvatarImgView; // @synthesize hdAvatarImgView=_hdAvatarImgView;
@property(retain, nonatomic) CAGradientLayer *lowerGradientLayer; // @synthesize lowerGradientLayer=_lowerGradientLayer;
@property(retain, nonatomic) CAGradientLayer *upperGradientLayer; // @synthesize upperGradientLayer=_upperGradientLayer;
@property(retain, nonatomic) NSTextField *rotateTipsLabel; // @synthesize rotateTipsLabel=_rotateTipsLabel;
@property(retain, nonatomic) NSTextField *switchToVoiceBtnTipsLabel; // @synthesize switchToVoiceBtnTipsLabel=_switchToVoiceBtnTipsLabel;
@property(retain, nonatomic) MMAnimateTextFieldWrapper *muteBtnTipsLabel; // @synthesize muteBtnTipsLabel=_muteBtnTipsLabel;
@property(retain, nonatomic) NSButton *rotateBtn; // @synthesize rotateBtn=_rotateBtn;
@property(retain, nonatomic) SVGButton *switchToVoiceChatBtn; // @synthesize switchToVoiceChatBtn=_switchToVoiceChatBtn;
@property(retain, nonatomic) MMAnimateTextFieldWrapper *answerBtnTipsLabel; // @synthesize answerBtnTipsLabel=_answerBtnTipsLabel;
@property(retain, nonatomic) SVGButton *answerBtn; // @synthesize answerBtn=_answerBtn;
@property(retain, nonatomic) MMAnimateTextFieldWrapper *hangUpBtnTipsLabel; // @synthesize hangUpBtnTipsLabel=_hangUpBtnTipsLabel;
@property(retain, nonatomic) SVGButton *hangUpBtn; // @synthesize hangUpBtn=_hangUpBtn;
@property(retain, nonatomic) MMAnimateButtonWrapper *muteBtn; // @synthesize muteBtn=_muteBtn;
@property(retain, nonatomic) NSView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(nonatomic) BOOL renderLayerAspectRatio; // @synthesize renderLayerAspectRatio=_renderLayerAspectRatio;
@property(nonatomic) unsigned long long dotCountIncrement; // @synthesize dotCountIncrement=_dotCountIncrement;
@property(retain, nonatomic) MMStringToastView *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) MMTimerLabel *callTimeLabel; // @synthesize callTimeLabel=_callTimeLabel;
@property(retain, nonatomic) NSTextField *inviteStatusLabel; // @synthesize inviteStatusLabel=_inviteStatusLabel;
@property(retain, nonatomic) MMTextView *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) MMVoipRenderView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) NSView *controlView; // @synthesize controlView=_controlView;
- (void).cxx_destruct;
- (void)addFadeInAnimation:(id)arg1;
- (void)excuteAnimationAtActionDid;
- (void)prepareAnimationAtActionWill;
- (void)autoChangeButtomControlsYOffset:(BOOL)arg1;
- (unsigned long long)convertSubRect:(struct CGRect)arg1 ToQuadrantInSuperRect:(struct CGRect)arg2;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)windowDidMiniaturize:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowWillExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowWillEnterFullScreen:(id)arg1;
- (void)toggleFullScreen:(id)arg1;
- (void)dealloc;
- (void)setupSubViews;

@end

