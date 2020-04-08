//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface NewDelMsg : PBGeneratedMessage
{
    unsigned int hasFromUserName:1;
    unsigned int hasToUserName:1;
    unsigned int hasMsgId:1;
    unsigned int hasMsgType:1;
    unsigned int hasNewMsgId:1;
    int msgId;
    unsigned int msgType;
    NSString *fromUserName;
    NSString *toUserName;
    long long newMsgId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetNewMsgId:) long long newMsgId; // @synthesize newMsgId;
@property(readonly, nonatomic) BOOL hasNewMsgId; // @synthesize hasNewMsgId;
@property(nonatomic, setter=SetMsgType:) unsigned int msgType; // @synthesize msgType;
@property(readonly, nonatomic) BOOL hasMsgType; // @synthesize hasMsgType;
@property(nonatomic, setter=SetMsgId:) int msgId; // @synthesize msgId;
@property(readonly, nonatomic) BOOL hasMsgId; // @synthesize hasMsgId;
@property(retain, nonatomic, setter=SetToUserName:) NSString *toUserName; // @synthesize toUserName;
@property(readonly, nonatomic) BOOL hasToUserName; // @synthesize hasToUserName;
@property(retain, nonatomic, setter=SetFromUserName:) NSString *fromUserName; // @synthesize fromUserName;
@property(readonly, nonatomic) BOOL hasFromUserName; // @synthesize hasFromUserName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

