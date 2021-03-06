//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportMainFrameTaskBarActionItem : WAReportBaseItem
{
    unsigned int _openTime;
    unsigned int _appCountWhenOpen;
    unsigned int _appCountWhenClose;
    unsigned int _closeReason;
    unsigned int _scrollCount;
    unsigned int _deleteAppCount;
    unsigned int _whyDragMeCountWhenClose;
    unsigned int _starCountWhenOpen;
    unsigned int _starCountWhenClose;
    unsigned int _starScrollCount;
    unsigned int _deleteStarAppCount;
    unsigned int _moveStarToTopCount;
    NSString *_openAppIdList;
    NSString *_deleteAppIdList;
    NSString *_openStarAppIdList;
    NSString *_deleteStarAppIdList;
    NSString *_appClickPositionList;
    NSString *_starAppClickPositionList;
    NSString *_moveStarToTopAppIdList;
}

@property(copy, nonatomic) NSString *moveStarToTopAppIdList; // @synthesize moveStarToTopAppIdList=_moveStarToTopAppIdList;
@property(copy, nonatomic) NSString *starAppClickPositionList; // @synthesize starAppClickPositionList=_starAppClickPositionList;
@property(copy, nonatomic) NSString *appClickPositionList; // @synthesize appClickPositionList=_appClickPositionList;
@property(nonatomic) unsigned int moveStarToTopCount; // @synthesize moveStarToTopCount=_moveStarToTopCount;
@property(copy, nonatomic) NSString *deleteStarAppIdList; // @synthesize deleteStarAppIdList=_deleteStarAppIdList;
@property(nonatomic) unsigned int deleteStarAppCount; // @synthesize deleteStarAppCount=_deleteStarAppCount;
@property(copy, nonatomic) NSString *openStarAppIdList; // @synthesize openStarAppIdList=_openStarAppIdList;
@property(nonatomic) unsigned int starScrollCount; // @synthesize starScrollCount=_starScrollCount;
@property(nonatomic) unsigned int starCountWhenClose; // @synthesize starCountWhenClose=_starCountWhenClose;
@property(nonatomic) unsigned int starCountWhenOpen; // @synthesize starCountWhenOpen=_starCountWhenOpen;
@property(nonatomic) unsigned int whyDragMeCountWhenClose; // @synthesize whyDragMeCountWhenClose=_whyDragMeCountWhenClose;
@property(copy, nonatomic) NSString *deleteAppIdList; // @synthesize deleteAppIdList=_deleteAppIdList;
@property(nonatomic) unsigned int deleteAppCount; // @synthesize deleteAppCount=_deleteAppCount;
@property(copy, nonatomic) NSString *openAppIdList; // @synthesize openAppIdList=_openAppIdList;
@property(nonatomic) unsigned int scrollCount; // @synthesize scrollCount=_scrollCount;
@property(nonatomic) unsigned int closeReason; // @synthesize closeReason=_closeReason;
@property(nonatomic) unsigned int appCountWhenClose; // @synthesize appCountWhenClose=_appCountWhenClose;
@property(nonatomic) unsigned int appCountWhenOpen; // @synthesize appCountWhenOpen=_appCountWhenOpen;
@property(nonatomic) unsigned int openTime; // @synthesize openTime=_openTime;
- (void).cxx_destruct;
- (id)reportString;

@end

