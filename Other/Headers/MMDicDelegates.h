//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMDicDelegates : NSObject
{
    id m_ownerId;
    BOOL m_ownerShouldBeNotify;
    NSMutableDictionary *m_dicDelegates;
}

- (void).cxx_destruct;
- (BOOL)clearOneDelegateInDic:(id)arg1;
- (BOOL)setDelegateToDic:(id)arg1;
- (id)getDelegateFromDic:(id)arg1 withProtocols:(id)arg2;
- (void)setOwnerId:(id)arg1;
- (void)dealloc;
- (id)init;

@end

