//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMButton, NSAttributedString, NSString;

@interface WANavigationItem : NSObject
{
    NSString *_title;
    NSAttributedString *_attributedTitle;
    MMButton *_leftBarButton;
    MMButton *_rightBarButton;
}

@property(retain, nonatomic) MMButton *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
@property(retain, nonatomic) MMButton *leftBarButton; // @synthesize leftBarButton=_leftBarButton;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

@end

