//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface MMComplexContactSearchTask : NSObject
{
    BOOL _isCancelled;
    NSDate *_createDate;
}

@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
- (void).cxx_destruct;
- (BOOL)_isValidContact:(id)arg1;
- (void)doComplexContactSearch:(id)arg1 allSessionInfo:(id)arg2 allContacts:(id)arg3 allGroups:(id)arg4 searchScene:(unsigned long long)arg5 complete:(CDUnknownBlockType)arg6;
- (void)cancel;
- (id)init;

@end

