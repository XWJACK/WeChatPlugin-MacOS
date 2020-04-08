//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WCContactData;

@interface MMContactSearchUtilResult : NSObject
{
    int _matchScore;
    int _matchType;
    WCContactData *_contact;
}

+ (id)resultNotMatch;
+ (id)resultWithContact:(id)arg1 matchScore:(int)arg2 matchType:(int)arg3;
@property(nonatomic) int matchType; // @synthesize matchType=_matchType;
@property(nonatomic) int matchScore; // @synthesize matchScore=_matchScore;
@property(retain, nonatomic) WCContactData *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)addMatchScore:(int)arg1;
- (id)description;
- (BOOL)isResultNotMatch;

@end

