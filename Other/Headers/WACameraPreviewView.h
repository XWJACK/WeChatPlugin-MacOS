//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer;

@interface WACameraPreviewView : NSView
{
    CALayer *_previewLayer;
}

@property(retain, nonatomic) CALayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void).cxx_destruct;
- (void)setOutputSize:(struct CGSize)arg1;
- (void)setCameraCapture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

