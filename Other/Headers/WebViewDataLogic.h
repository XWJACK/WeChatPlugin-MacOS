//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WebViewDataLogic : NSObject
{
    NSMutableDictionary *_dictUrl2TitleList;
}

@property(retain, nonatomic) NSMutableDictionary *dictUrl2TitleList; // @synthesize dictUrl2TitleList=_dictUrl2TitleList;
- (void).cxx_destruct;
- (id)titleForNavigationUrl:(id)arg1;
- (void)setNavigationUrl:(id)arg1 title:(id)arg2;
- (id)init;

@end

