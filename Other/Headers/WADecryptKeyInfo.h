//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WADecryptKeyInfo : MMObject <WCTTableCoding>
{
    unsigned int _appVersion;
    unsigned int _encryptType;
    unsigned int _reportId;
    NSString *_appId;
    NSString *_userName;
    NSString *_decryptKey;
    NSString *_md5;
}

+ (const struct WCTProperty *)reportId;
+ (const struct WCTProperty *)md5;
+ (const struct WCTProperty *)encryptType;
+ (const struct WCTProperty *)decryptKey;
+ (const struct WCTProperty *)appVersion;
+ (const struct WCTProperty *)userName;
+ (const struct WCTProperty *)appId;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned int reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int encryptType; // @synthesize encryptType=_encryptType;
@property(retain, nonatomic) NSString *decryptKey; // @synthesize decryptKey=_decryptKey;
@property(nonatomic) unsigned int appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

