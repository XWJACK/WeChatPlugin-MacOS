//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class NSColor, NSString;

@interface SVGImageView : NSImageView
{
    BOOL _bFlipped;
    NSString *_imageName;
    NSColor *_imageColor;
    struct CGSize _imageSize;
}

@property(nonatomic) BOOL bFlipped; // @synthesize bFlipped=_bFlipped;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSColor *imageColor; // @synthesize imageColor=_imageColor;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (void)setup;
- (id)initWithName:(id)arg1 withSize:(struct CGSize)arg2 withColor:(id)arg3;
- (id)initWithName:(id)arg1 withSize:(struct CGSize)arg2;
- (id)initWithName:(id)arg1 withColor:(id)arg2;
- (id)initWithName:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

