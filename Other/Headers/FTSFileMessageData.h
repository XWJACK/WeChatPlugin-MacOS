//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FTSFileMessageData : NSObject <WCTTableCoding>
{
    unsigned int _contextID;
    unsigned int _mesLocalID;
    unsigned int _msgCreateTime;
    unsigned int _updateTime;
    unsigned int _fileSize;
    unsigned int _reservedInt;
    NSString *_chatName;
    NSString *_realChatName;
    NSString *_fileExt;
    NSString *_ftsMsgContent;
    NSString *_reservedText;
}

+ (const struct WCTProperty *)reservedText;
+ (const struct WCTProperty *)reservedInt;
+ (const struct WCTProperty *)fileSize;
+ (const struct WCTProperty *)ftsMsgContent;
+ (const struct WCTProperty *)updateTime;
+ (const struct WCTProperty *)fileExt;
+ (const struct WCTProperty *)realChatName;
+ (const struct WCTProperty *)msgCreateTime;
+ (const struct WCTProperty *)mesLocalID;
+ (const struct WCTProperty *)chatName;
+ (const struct WCTProperty *)contextID;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *reservedText; // @synthesize reservedText=_reservedText;
@property(nonatomic) unsigned int reservedInt; // @synthesize reservedInt=_reservedInt;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *ftsMsgContent; // @synthesize ftsMsgContent=_ftsMsgContent;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *fileExt; // @synthesize fileExt=_fileExt;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName=_realChatName;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime=_msgCreateTime;
@property(nonatomic) unsigned int mesLocalID; // @synthesize mesLocalID=_mesLocalID;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) unsigned int contextID; // @synthesize contextID=_contextID;
- (void).cxx_destruct;
- (long long)compareFTSFileMessageUpdateDescending:(id)arg1;
- (long long)compareFTSFileMessageDescending:(id)arg1;
- (id)description;
- (id)init;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

