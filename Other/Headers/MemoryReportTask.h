//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface MemoryReportTask : NSObject
{
    BOOL generateFail;
    BOOL reportSuccess;
    int reportType;
    int retryCount;
    unsigned long long recordID;
    NSData *_reportData;
}

+ (void)initialize;
+ (void)_initPBTableOfMemoryReportTask;
@property(retain, nonatomic) NSData *reportData; // @synthesize reportData=_reportData;
@property(nonatomic) int retryCount; // @synthesize retryCount;
@property(nonatomic) int reportType; // @synthesize reportType;
@property(nonatomic) BOOL reportSuccess; // @synthesize reportSuccess;
@property(nonatomic) BOOL generateFail; // @synthesize generateFail;
@property(nonatomic) unsigned long long recordID; // @synthesize recordID;
- (void).cxx_destruct;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end
