//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface BackupSessionInfoList : PBGeneratedMessage
{
    unsigned int hasFmessageUnreadCount:1;
    unsigned int fmessageUnreadCount;
    NSMutableArray *mutableSessionInfoListList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetFmessageUnreadCount:) unsigned int fmessageUnreadCount; // @synthesize fmessageUnreadCount;
@property(readonly, nonatomic) BOOL hasFmessageUnreadCount; // @synthesize hasFmessageUnreadCount;
@property(retain, nonatomic) NSMutableArray *mutableSessionInfoListList; // @synthesize mutableSessionInfoListList;
- (void).cxx_destruct;
- (void)addSessionInfoList:(id)arg1;
- (void)addSessionInfoListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *sessionInfoList; // @dynamic sessionInfoList;
- (id)sessionInfoListList;
- (id)init;

@end

