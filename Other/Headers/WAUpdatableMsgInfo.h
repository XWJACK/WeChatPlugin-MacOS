//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface WAUpdatableMsgInfo : NSObject <WCTTableCoding>
{
    BOOL _shouldUseUpdatableMsg;
    BOOL _isSystemPushFinished;
    int _updatableContentUpdateInterval;
    unsigned int _lastUpdateTime;
    NSString *_shareKey;
    NSString *_appId;
    unsigned long long _subscriptionEntryState;
    NSString *_subscriptionEntryContent;
    NSString *_subscriptionEntryButtonWording;
    NSString *_subscriptionConfirmedContent;
    NSString *_updatableContentText;
    NSString *_updatableContentColor;
}

+ (id)infoFromResp:(id)arg1;
+ (const struct WCTProperty *)lastUpdateTime;
+ (const struct WCTProperty *)updatableContentUpdateInterval;
+ (const struct WCTProperty *)updatableContentColor;
+ (const struct WCTProperty *)updatableContentText;
+ (const struct WCTProperty *)subscriptionConfirmedContent;
+ (const struct WCTProperty *)subscriptionEntryButtonWording;
+ (const struct WCTProperty *)subscriptionEntryContent;
+ (const struct WCTProperty *)isSystemPushFinished;
+ (const struct WCTProperty *)subscriptionEntryState;
+ (const struct WCTProperty *)appId;
+ (const struct WCTProperty *)shouldUseUpdatableMsg;
+ (const struct WCTProperty *)shareKey;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) unsigned int lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) int updatableContentUpdateInterval; // @synthesize updatableContentUpdateInterval=_updatableContentUpdateInterval;
@property(retain, nonatomic) NSString *updatableContentColor; // @synthesize updatableContentColor=_updatableContentColor;
@property(retain, nonatomic) NSString *updatableContentText; // @synthesize updatableContentText=_updatableContentText;
@property(retain, nonatomic) NSString *subscriptionConfirmedContent; // @synthesize subscriptionConfirmedContent=_subscriptionConfirmedContent;
@property(retain, nonatomic) NSString *subscriptionEntryButtonWording; // @synthesize subscriptionEntryButtonWording=_subscriptionEntryButtonWording;
@property(retain, nonatomic) NSString *subscriptionEntryContent; // @synthesize subscriptionEntryContent=_subscriptionEntryContent;
@property(nonatomic) BOOL isSystemPushFinished; // @synthesize isSystemPushFinished=_isSystemPushFinished;
@property(nonatomic) unsigned long long subscriptionEntryState; // @synthesize subscriptionEntryState=_subscriptionEntryState;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) BOOL shouldUseUpdatableMsg; // @synthesize shouldUseUpdatableMsg=_shouldUseUpdatableMsg;
@property(retain, nonatomic) NSString *shareKey; // @synthesize shareKey=_shareKey;
- (void).cxx_destruct;
- (unsigned int)nextTimeToUpdate;
- (BOOL)isUpdateAllowed;
- (BOOL)shouldUpdateNow;
- (id)toXML;
- (BOOL)fromXML:(struct XmlReaderNode_t *)arg1;
- (id)description;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

