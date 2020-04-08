//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMView.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString, SVGImageView;

@interface MMHandoffButton : MMView <CAAnimationDelegate>
{
    int _status;
    CDUnknownBlockType _mouseDownInsideBlock;
    SVGImageView *_imgView;
}

@property(retain, nonatomic) SVGImageView *imgView; // @synthesize imgView=_imgView;
@property(copy, nonatomic) CDUnknownBlockType mouseDownInsideBlock; // @synthesize mouseDownInsideBlock=_mouseDownInsideBlock;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (void)stopAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)startAnimation;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

