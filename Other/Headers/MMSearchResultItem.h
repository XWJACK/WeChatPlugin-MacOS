//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMBasicSearchResult, NSString;

@interface MMSearchResultItem : NSObject
{
    unsigned long long _type;
    MMBasicSearchResult *_result;
}

@property(retain, nonatomic) MMBasicSearchResult *result; // @synthesize result=_result;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithSearchResult:(id)arg1 type:(unsigned long long)arg2;

@end

