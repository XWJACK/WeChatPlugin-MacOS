//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMView.h"

#import "CAAnimationDelegate-Protocol.h"

@class CALayer, MMAvatarImageView, MMTextField, MessageData, NSButton, NSString;

@interface MMYoMessageView : MMView <CAAnimationDelegate>
{
    MMView *_containerView;
    CALayer *_waveLayer1;
    CALayer *_waveLayer2;
    CALayer *_waveLayer3;
    MMAvatarImageView *_avatarImgView;
    MMTextField *_nameLabel;
    MMTextField *_descriptionLabel;
    NSButton *_confirmButton;
    MessageData *_message;
    CDUnknownBlockType _didConfirmBlock;
    CDUnknownBlockType _didCancelBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didCancelBlock; // @synthesize didCancelBlock=_didCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType didConfirmBlock; // @synthesize didConfirmBlock=_didConfirmBlock;
@property(retain, nonatomic) MessageData *message; // @synthesize message=_message;
@property(retain, nonatomic) NSButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) MMTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) MMTextField *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMAvatarImageView *avatarImgView; // @synthesize avatarImgView=_avatarImgView;
@property(retain, nonatomic) CALayer *waveLayer3; // @synthesize waveLayer3=_waveLayer3;
@property(retain, nonatomic) CALayer *waveLayer2; // @synthesize waveLayer2=_waveLayer2;
@property(retain, nonatomic) CALayer *waveLayer1; // @synthesize waveLayer1=_waveLayer1;
@property(retain, nonatomic) MMView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)eventIsInsideContainerView:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)addWaveAnimationToLayer:(id)arg1 forKey:(id)arg2;
- (id)makeWaveLayer;
- (void)addWaveAnimations;
- (id)initWithFrame:(struct CGRect)arg1 message:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

