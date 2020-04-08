//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData;

@interface KvDataItem : PBGeneratedMessage
{
    unsigned int hasLogid:1;
    unsigned int hasValue:1;
    NSData *value_;
    unsigned int hasStarttime:1;
    unsigned int hasEndtime:1;
    unsigned int hasCount:1;
    unsigned int hasType:1;
    unsigned int logid;
    unsigned int starttime;
    unsigned int endtime;
    unsigned int count;
    unsigned int type;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(nonatomic, setter=SetEndtime:) unsigned int endtime; // @synthesize endtime;
@property(readonly, nonatomic) BOOL hasEndtime; // @synthesize hasEndtime;
@property(nonatomic, setter=SetStarttime:) unsigned int starttime; // @synthesize starttime;
@property(readonly, nonatomic) BOOL hasStarttime; // @synthesize hasStarttime;
@property(retain, nonatomic, setter=SetValue:) NSData *value; // @synthesize value=value_;
@property(readonly, nonatomic) BOOL hasValue; // @synthesize hasValue;
@property(nonatomic, setter=SetLogid:) unsigned int logid; // @synthesize logid;
@property(readonly, nonatomic) BOOL hasLogid; // @synthesize hasLogid;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

