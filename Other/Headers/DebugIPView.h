//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSTextField;

@interface DebugIPView : NSView
{
    NSArray *_m_type;
    NSTextField *_m_inputLongIP;
    NSTextField *_m_inputShortIP;
}

@property(retain, nonatomic) NSTextField *m_inputShortIP; // @synthesize m_inputShortIP=_m_inputShortIP;
@property(retain, nonatomic) NSTextField *m_inputLongIP; // @synthesize m_inputLongIP=_m_inputLongIP;
@property(retain, nonatomic) NSArray *m_type; // @synthesize m_type=_m_type;
- (void).cxx_destruct;
- (void)OnBtnTypeClick:(id)arg1;
- (void)OnBtnOKClick:(id)arg1;
- (void)configView;
- (void)configData;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
