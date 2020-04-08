//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLCalendarViewDelegate-Protocol.h"

@class MLCalendarView, NSString, RBLPopover, RBLPopoverBackgroundView;

@interface MMDatePicker : NSObject <MLCalendarViewDelegate>
{
    int _windowMinY;
    CDUnknownBlockType _didSelectDateBlock;
    MLCalendarView *_calendarView;
    RBLPopover *_rblPopover;
    RBLPopoverBackgroundView *_backgroundView;
}

+ (id)shareInstance;
@property(nonatomic) int windowMinY; // @synthesize windowMinY=_windowMinY;
@property(retain, nonatomic) RBLPopoverBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) RBLPopover *rblPopover; // @synthesize rblPopover=_rblPopover;
@property(retain, nonatomic) MLCalendarView *calendarView; // @synthesize calendarView=_calendarView;
@property(copy, nonatomic) CDUnknownBlockType didSelectDateBlock; // @synthesize didSelectDateBlock=_didSelectDateBlock;
- (void).cxx_destruct;
- (void)didSelectDate:(id)arg1;
- (void)createCalendarPopover;
- (void)closeCalendar;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)showCalendarOfView:(id)arg1 withSelectedDate:(id)arg2 withStartLimitDate:(id)arg3 withEndLimitDate:(id)arg4 withDisplayDate:(id)arg5 withWindowMinY:(int)arg6 withDidSelectDateBlock:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

