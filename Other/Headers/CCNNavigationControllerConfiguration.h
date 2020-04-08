//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, NSColor;

@interface CCNNavigationControllerConfiguration : NSObject
{
    NSColor *_backgroundColor;
    unsigned long long _transition;
    unsigned long long _transitionStyle;
    double _transitionDuration;
    CAMediaTimingFunction *_mediaTimingFunction;
}

+ (id)defaultConfiguration;
@property(nonatomic) CAMediaTimingFunction *mediaTimingFunction; // @synthesize mediaTimingFunction=_mediaTimingFunction;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) unsigned long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(nonatomic) unsigned long long transition; // @synthesize transition=_transition;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)init;

@end

