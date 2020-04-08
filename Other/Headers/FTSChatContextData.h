//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FTSChatContextData : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement;
    unsigned int chatContextID;
    unsigned int lastMesLocalId;
    NSString *chatName;
    long long lastInsertedRowID;
}

+ (const struct WCTProperty *)lastMesLocalId;
+ (const struct WCTProperty *)chatName;
+ (const struct WCTProperty *)chatContextID;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;
@property unsigned int lastMesLocalId; // @synthesize lastMesLocalId;
@property(nonatomic) unsigned int chatContextID; // @synthesize chatContextID;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
