//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface KVReportItem : PBGeneratedMessage
{
    unsigned int hasLogId:1;
    unsigned int hasValue:1;
    NSString *value_;
    unsigned int hasStartTime:1;
    unsigned int hasEndTime:1;
    unsigned int hasCount:1;
    unsigned int logId;
    unsigned int startTime;
    unsigned int endTime;
    unsigned int count;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(nonatomic, setter=SetEndTime:) unsigned int endTime; // @synthesize endTime;
@property(readonly, nonatomic) BOOL hasEndTime; // @synthesize hasEndTime;
@property(nonatomic, setter=SetStartTime:) unsigned int startTime; // @synthesize startTime;
@property(readonly, nonatomic) BOOL hasStartTime; // @synthesize hasStartTime;
@property(retain, nonatomic, setter=SetValue:) NSString *value; // @synthesize value=value_;
@property(readonly, nonatomic) BOOL hasValue; // @synthesize hasValue;
@property(nonatomic, setter=SetLogId:) unsigned int logId; // @synthesize logId;
@property(readonly, nonatomic) BOOL hasLogId; // @synthesize hasLogId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
