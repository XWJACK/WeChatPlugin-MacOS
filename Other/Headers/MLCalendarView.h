//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class MLCalendarCell, NSColor, NSDate, NSMutableArray, NSTextField;
@protocol MLCalendarViewDelegate;

@interface MLCalendarView : NSViewController
{
    NSColor *_backgroundColor;
    NSColor *_textColor;
    NSColor *_selectionColor;
    NSColor *_todayMarkerColor;
    NSColor *_dayMarkerColor;
    NSColor *_unselectableColor;
    id <MLCalendarViewDelegate> _delegate;
    NSDate *_date;
    NSDate *_selectedDate;
    NSDate *_startLimitDate;
    NSDate *_endLimitDate;
    MLCalendarCell *_currSelectedCell;
    MLCalendarCell *_mouseDownCell;
    NSTextField *_yearTitle;
    NSTextField *_monthTitle;
    NSMutableArray *_dayCells;
}

+ (id)dd:(id)arg1;
+ (BOOL)isSameDate:(id)arg1 date:(id)arg2;
@property(retain) NSMutableArray *dayCells; // @synthesize dayCells=_dayCells;
@property __weak NSTextField *monthTitle; // @synthesize monthTitle=_monthTitle;
@property __weak NSTextField *yearTitle; // @synthesize yearTitle=_yearTitle;
@property(nonatomic) __weak MLCalendarCell *mouseDownCell; // @synthesize mouseDownCell=_mouseDownCell;
@property(nonatomic) __weak MLCalendarCell *currSelectedCell; // @synthesize currSelectedCell=_currSelectedCell;
@property(retain, nonatomic) NSDate *endLimitDate; // @synthesize endLimitDate=_endLimitDate;
@property(retain, nonatomic) NSDate *startLimitDate; // @synthesize startLimitDate=_startLimitDate;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) __weak id <MLCalendarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSColor *unselectableColor; // @synthesize unselectableColor=_unselectableColor;
@property(copy, nonatomic) NSColor *dayMarkerColor; // @synthesize dayMarkerColor=_dayMarkerColor;
@property(copy, nonatomic) NSColor *todayMarkerColor; // @synthesize todayMarkerColor=_todayMarkerColor;
@property(copy, nonatomic) NSColor *selectionColor; // @synthesize selectionColor=_selectionColor;
@property(copy, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)nextYear:(id)arg1;
- (void)prevYear:(id)arg1;
- (void)prevMonth:(id)arg1;
- (void)nextMonth:(id)arg1;
- (void)setpYear:(long long)arg1;
- (void)stepMonth:(long long)arg1;
- (void)layoutCalendar;
- (long long)colForDay:(long long)arg1;
- (long long)lastDayOfTheMonth;
- (id)monthDay:(long long)arg1;
- (void)cellClicked:(id)arg1;
- (id)toUTC:(id)arg1;
- (id)viewByID:(id)arg1;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

