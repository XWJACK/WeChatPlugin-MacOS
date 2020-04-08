//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class KVLogHead, NSMutableArray;

@interface JsLogRequest : PBGeneratedMessage
{
    unsigned int hasLogHead:1;
    KVLogHead *logHead;
    NSMutableArray *mutableLogListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableLogListList; // @synthesize mutableLogListList;
@property(retain, nonatomic, setter=SetLogHead:) KVLogHead *logHead; // @synthesize logHead;
@property(readonly, nonatomic) BOOL hasLogHead; // @synthesize hasLogHead;
- (void).cxx_destruct;
- (void)addLogList:(id)arg1;
- (void)addLogListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *logList; // @dynamic logList;
- (id)logListList;
- (id)init;

@end

