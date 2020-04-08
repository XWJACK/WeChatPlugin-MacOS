//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WAMainFrameTaskItem : NSObject <WCTTableCoding>
{
    unsigned int _debugMode;
    unsigned int _updateTime;
    NSString *_userName;
}

+ (const struct WCTProperty *)updateTime;
+ (const struct WCTProperty *)debugMode;
+ (const struct WCTProperty *)userName;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;
- (id)description;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

