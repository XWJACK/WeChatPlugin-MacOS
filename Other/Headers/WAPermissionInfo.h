//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString, WAPermissionActionSheetInfo, WAPermissionLaunchAction, WAPermissionWeAppBindInfo, WAPublicResInfo, WAStatePermissionBytes;

@interface WAPermissionInfo : NSObject <WCTTableCoding>
{
    WAPublicResInfo *pubResInfo;
    NSString *_appID;
    NSData *_permissionBytes;
    WAPermissionWeAppBindInfo *_weAppBindInfo;
    WAPermissionLaunchAction *_launchAction;
    WAPermissionActionSheetInfo *_actionSheetInfo;
    WAStatePermissionBytes *_statePermissionBytes;
    NSString *_permissionJsonStr;
}

+ (const struct WCTProperty *)permissionJsonStr;
+ (const struct WCTProperty *)statePermissionBytes;
+ (const struct WCTProperty *)actionSheetInfo;
+ (const struct WCTProperty *)launchAction;
+ (const struct WCTProperty *)weAppBindInfo;
+ (const struct WCTProperty *)permissionBytes;
+ (const struct WCTProperty *)appID;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *permissionJsonStr; // @synthesize permissionJsonStr=_permissionJsonStr;
@property(retain, nonatomic) WAStatePermissionBytes *statePermissionBytes; // @synthesize statePermissionBytes=_statePermissionBytes;
@property(retain, nonatomic) WAPermissionActionSheetInfo *actionSheetInfo; // @synthesize actionSheetInfo=_actionSheetInfo;
@property(retain, nonatomic) WAPermissionLaunchAction *launchAction; // @synthesize launchAction=_launchAction;
@property(retain, nonatomic) WAPermissionWeAppBindInfo *weAppBindInfo; // @synthesize weAppBindInfo=_weAppBindInfo;
@property(retain, nonatomic) NSData *permissionBytes; // @synthesize permissionBytes=_permissionBytes;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) WAPublicResInfo *pubResInfo; // @synthesize pubResInfo;
- (void).cxx_destruct;
- (id)description;

// Remaining properties
@property(nonatomic) BOOL isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

