//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString, WCPushContactData;

@interface MMFriendRequestData : NSObject <PBCoding>
{
    BOOL hasReadRequest;
    unsigned int scene;
    unsigned int opCode;
    NSString *userName;
    NSString *nickName;
    NSMutableArray *requestContents;
    NSString *region;
    NSString *userSignature;
    WCPushContactData *contact;
    NSString *encryptuserName;
    NSString *ticket;
    NSString *appId;
}

+ (void)initialize;
+ (void)_initPBTableOfMMFriendRequestData;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(nonatomic) unsigned int opCode; // @synthesize opCode;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket;
@property(retain, nonatomic) NSString *encryptuserName; // @synthesize encryptuserName;
@property(retain, nonatomic) WCPushContactData *contact; // @synthesize contact;
@property(nonatomic) BOOL hasReadRequest; // @synthesize hasReadRequest;
@property(retain, nonatomic) NSString *userSignature; // @synthesize userSignature;
@property(retain, nonatomic) NSString *region; // @synthesize region;
@property(retain, nonatomic) NSMutableArray *requestContents; // @synthesize requestContents;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (BOOL)shouldShowAcceptButton;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

