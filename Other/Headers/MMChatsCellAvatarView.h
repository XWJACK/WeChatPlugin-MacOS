//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMImageView.h"

@interface MMChatsCellAvatarView : MMImageView
{
    BOOL _selected;
    double _borderWidth;
}

@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

