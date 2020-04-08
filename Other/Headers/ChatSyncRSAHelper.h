//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountServiceExt-Protocol.h"

@class NSString;

@interface ChatSyncRSAHelper : NSObject <AccountServiceExt>
{
    NSString *_publicKey;
    NSString *_privateKey;
}

+ (id)sharedRSAHelper;
@property(retain, nonatomic) NSString *privateKey; // @synthesize privateKey=_privateKey;
@property(retain, nonatomic) NSString *publicKey; // @synthesize publicKey=_publicKey;
- (void).cxx_destruct;
- (void)onUserLogout;
- (void)genRsaKeyPair;
- (id)getPrivateKey;
- (id)getPublicKey;
- (id)init;
- (void)destroy;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

