//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "MultiTalkContactCellExt-Protocol.h"

@class AnimateAvatarView, CALayer, MMTimer, MMVoipDotAnimateView, NSImageView, NSString, NSTextField, VoiceIconView, WCContactData, WXCGroupMember;

@interface MMVoipMemberRenderView : NSView <MultiTalkContactCellExt, CAAnimationDelegate>
{
    BOOL _isVideoVisiable;
    BOOL _m_renderDisplay;
    BOOL _m_highlighted;
    BOOL _isMute;
    BOOL _isAnimating;
    unsigned int _m_videoSizeW;
    unsigned int _m_FpsCount;
    float _degress;
    CALayer *_oppsiteRenderLayer;
    CALayer *_renderLayer;
    AnimateAvatarView *_avatarThumbImage;
    NSImageView *_netQualityImageView;
    NSTextField *_statusLabel;
    MMVoipDotAnimateView *_dotLoadingView;
    NSView *_maskImageView;
    WXCGroupMember *_oMember;
    WCContactData *_oContact;
    VoiceIconView *_voiceIconView;
    CDUnknownBlockType _onAnimationStopBlock;
    NSTextField *_m_videoFpsLabel;
    NSTextField *_m_videoSizeLabel;
    MMTimer *_m_fpsTimer;
}

@property(nonatomic) float degress; // @synthesize degress=_degress;
@property(nonatomic) unsigned int m_FpsCount; // @synthesize m_FpsCount=_m_FpsCount;
@property(nonatomic) unsigned int m_videoSizeW; // @synthesize m_videoSizeW=_m_videoSizeW;
@property(retain, nonatomic) MMTimer *m_fpsTimer; // @synthesize m_fpsTimer=_m_fpsTimer;
@property(retain, nonatomic) NSTextField *m_videoSizeLabel; // @synthesize m_videoSizeLabel=_m_videoSizeLabel;
@property(retain, nonatomic) NSTextField *m_videoFpsLabel; // @synthesize m_videoFpsLabel=_m_videoFpsLabel;
@property(copy, nonatomic) CDUnknownBlockType onAnimationStopBlock; // @synthesize onAnimationStopBlock=_onAnimationStopBlock;
@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) BOOL isMute; // @synthesize isMute=_isMute;
@property(retain, nonatomic) VoiceIconView *voiceIconView; // @synthesize voiceIconView=_voiceIconView;
@property(retain, nonatomic) WCContactData *oContact; // @synthesize oContact=_oContact;
@property(nonatomic) BOOL m_highlighted; // @synthesize m_highlighted=_m_highlighted;
@property(nonatomic) BOOL m_renderDisplay; // @synthesize m_renderDisplay=_m_renderDisplay;
@property(retain, nonatomic) WXCGroupMember *oMember; // @synthesize oMember=_oMember;
@property(nonatomic) BOOL isVideoVisiable; // @synthesize isVideoVisiable=_isVideoVisiable;
@property(retain, nonatomic) NSView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) MMVoipDotAnimateView *dotLoadingView; // @synthesize dotLoadingView=_dotLoadingView;
@property(retain, nonatomic) NSTextField *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) NSImageView *netQualityImageView; // @synthesize netQualityImageView=_netQualityImageView;
@property(retain, nonatomic) AnimateAvatarView *avatarThumbImage; // @synthesize avatarThumbImage=_avatarThumbImage;
@property(retain, nonatomic) CALayer *renderLayer; // @synthesize renderLayer=_renderLayer;
@property(retain, nonatomic) CALayer *oppsiteRenderLayer; // @synthesize oppsiteRenderLayer=_oppsiteRenderLayer;
- (void).cxx_destruct;
- (void)onMultiTalkContactCellTalking;
- (void)onMultiTalkContactCellSilent;
- (void)onMultiTalkContactCellQualityChange:(unsigned int)arg1;
- (void)fpsTimerCheck;
- (void)updateRenderDescInfo:(unsigned int)arg1;
- (void)updateMuteIconStatus:(BOOL)arg1;
- (void)updateRenderDisplayStatus:(BOOL)arg1;
- (void)internalHighlightStautsUpdate;
- (void)statusHighlighted:(BOOL)arg1;
- (void)loadContent;
- (void)updateContent:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)didFadeOutAnimationCompletion:(CDUnknownBlockType)arg1;
- (void)setupRenderContent:(id)arg1 withDegress:(float)arg2;
- (void)animatedSelfRenderContentIfNeeded;
- (void)initUI;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

