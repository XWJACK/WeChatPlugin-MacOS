//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Quartz/IKImageView.h>

@interface MMPreviewIKImageView : IKImageView
{
    CDUnknownBlockType _previewScrollWheelEventBlock;
    CDUnknownBlockType _previewMouseDownEventBlock;
    CDUnknownBlockType _previewMouseUpEventBlock;
    CDUnknownBlockType _previewMagnifyEventBlock;
    CDUnknownBlockType _previewTouchesMovedEventBlock;
    CDUnknownBlockType _zoomFactorActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType zoomFactorActionBlock; // @synthesize zoomFactorActionBlock=_zoomFactorActionBlock;
@property(copy, nonatomic) CDUnknownBlockType previewTouchesMovedEventBlock; // @synthesize previewTouchesMovedEventBlock=_previewTouchesMovedEventBlock;
@property(copy, nonatomic) CDUnknownBlockType previewMagnifyEventBlock; // @synthesize previewMagnifyEventBlock=_previewMagnifyEventBlock;
@property(copy, nonatomic) CDUnknownBlockType previewMouseUpEventBlock; // @synthesize previewMouseUpEventBlock=_previewMouseUpEventBlock;
@property(copy, nonatomic) CDUnknownBlockType previewMouseDownEventBlock; // @synthesize previewMouseDownEventBlock=_previewMouseDownEventBlock;
@property(copy, nonatomic) CDUnknownBlockType previewScrollWheelEventBlock; // @synthesize previewScrollWheelEventBlock=_previewScrollWheelEventBlock;
- (void).cxx_destruct;
- (void)setZoomFactor:(double)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

