//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, WCContactData;

@interface MMComplexGroupContactSearchLogic : NSObject
{
    BOOL _ignorePinYin;
    WCContactData *_groupContact;
    NSString *_keyword;
    NSMutableArray *_memberContacts;
    NSArray *_keywords;
    CDUnknownBlockType _progress;
}

@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSMutableArray *memberContacts; // @synthesize memberContacts=_memberContacts;
@property(nonatomic) BOOL ignorePinYin; // @synthesize ignorePinYin=_ignorePinYin;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) WCContactData *groupContact; // @synthesize groupContact=_groupContact;
- (void).cxx_destruct;
- (BOOL)_isMemberInFinalMatchResultArray:(id)arg1 finalMatchResultArray:(id)arg2;
- (id)_searchGroupMembers;
- (id)searchGroupMembers;
- (id)searchGroupName;
- (id)search;
- (id)initWithGroupContact:(id)arg1 keyword:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (id)initWithGroupContact:(id)arg1 keyword:(id)arg2;

@end

