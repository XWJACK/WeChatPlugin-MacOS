//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ExtensionSwizzleMethod : NSObject
{
    unsigned long long totalCount;
    unsigned long long totalDeleteCount;
}

+ (id)sharedInstance;
+ (void)load;
- (id)description;
- (void)report;
- (void)reportDeleteCount;
- (void)reportTotalCount;
- (void)dealloc;
- (id)init;

@end

