//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableArray, NSString;

@interface MMChatMangerSearchReportMgr : MMService <MMService>
{
    int _searchScene;
    NSString *_localSearchId;
    unsigned long long _startSearchTime;
    NSMutableArray *_contactSearchResults;
    NSMutableArray *_brandContactSearchResults;
    NSMutableArray *_groupContactSearchResults;
    NSMutableArray *_chatLogSearchResults;
}

@property(retain, nonatomic) NSMutableArray *chatLogSearchResults; // @synthesize chatLogSearchResults=_chatLogSearchResults;
@property(retain, nonatomic) NSMutableArray *groupContactSearchResults; // @synthesize groupContactSearchResults=_groupContactSearchResults;
@property(retain, nonatomic) NSMutableArray *brandContactSearchResults; // @synthesize brandContactSearchResults=_brandContactSearchResults;
@property(retain, nonatomic) NSMutableArray *contactSearchResults; // @synthesize contactSearchResults=_contactSearchResults;
@property(nonatomic) unsigned long long startSearchTime; // @synthesize startSearchTime=_startSearchTime;
@property(readonly, nonatomic) NSString *localSearchId; // @synthesize localSearchId=_localSearchId;
@property(readonly, nonatomic) int searchScene; // @synthesize searchScene=_searchScene;
- (void).cxx_destruct;
- (unsigned long long)getWholeUserCostTime;
- (unsigned long long)getQueryMatchTypeWithQueryText:(id)arg1 searchResult:(id)arg2;
- (unsigned long long)convertGroupLogType:(unsigned long long)arg1 matchSubType:(unsigned long long)arg2;
- (unsigned long long)convertContactLogType:(unsigned long long)arg1 matchSubType:(unsigned long long)arg2;
- (unsigned long long)getContactMatchTypeWithSearchResult:(id)arg1;
- (id)addDefaultParamsWith:(id)arg1;
- (void)logBeginSearch:(int)arg1;
- (void)addMainSearchFTSLog:(id)arg1;
- (void)onServiceClearData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

