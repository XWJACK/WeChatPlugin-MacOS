//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@interface WAReportInstallOrUpdateItem : WAReportBaseItem
{
    BOOL _isUseModule;
    unsigned int _eventID;
    unsigned int _eventResult;
    unsigned int _eventPercent;
    unsigned int _eventTime;
    long long _costTime;
}

@property(nonatomic) BOOL isUseModule; // @synthesize isUseModule=_isUseModule;
@property(nonatomic) unsigned int eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) long long costTime; // @synthesize costTime=_costTime;
@property(nonatomic) unsigned int eventPercent; // @synthesize eventPercent=_eventPercent;
@property(nonatomic) unsigned int eventResult; // @synthesize eventResult=_eventResult;
@property(nonatomic) unsigned int eventID; // @synthesize eventID=_eventID;
- (id)reportString;

@end

