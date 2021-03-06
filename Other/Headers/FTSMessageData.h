//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FTSMessageData : NSObject <WCTTableCoding>
{
    unsigned int chatContextID;
    unsigned int mesLocalID;
    unsigned int msgType;
    unsigned int msgCreateTime;
    unsigned int _reservedInt;
    NSString *chatName;
    NSString *realChatName;
    NSString *ftsMsgContent;
    NSString *_reservedText;
}

+ (const struct WCTProperty *)reservedText;
+ (const struct WCTProperty *)reservedInt;
+ (const struct WCTProperty *)ftsMsgContent;
+ (const struct WCTProperty *)realChatName;
+ (const struct WCTProperty *)msgCreateTime;
+ (const struct WCTProperty *)msgType;
+ (const struct WCTProperty *)mesLocalID;
+ (const struct WCTProperty *)chatName;
+ (const struct WCTProperty *)chatContextID;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *reservedText; // @synthesize reservedText=_reservedText;
@property(nonatomic) unsigned int reservedInt; // @synthesize reservedInt=_reservedInt;
@property(retain, nonatomic) NSString *ftsMsgContent; // @synthesize ftsMsgContent;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime;
@property(nonatomic) unsigned int msgType; // @synthesize msgType;
@property(nonatomic) unsigned int mesLocalID; // @synthesize mesLocalID;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName;
@property(nonatomic) unsigned int chatContextID; // @synthesize chatContextID;
- (void).cxx_destruct;
- (id)description;
- (long long)compareMsgItemAscending:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

