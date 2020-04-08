//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMNetExt-Protocol.h"

@class MMTimer, NSData, NSString;

@interface QRCodeLoginCGI : NSObject <MMNetExt>
{
    unsigned int _qrCheckTime;
    NSString *_qrUUID;
    NSData *_qrNotifyDecodeKey;
    MMTimer *_checkQRCodeTimer;
    MMTimer *_qrCodeExpireTimer;
    CDUnknownBlockType _didScannedQRCodeLoginCGIBlock;
    CDUnknownBlockType _didConfirmedQRCodeLoginCGIBlock;
    CDUnknownBlockType _didCancelQRCodeLoginCGIBlock;
    CDUnknownBlockType _didExpiredQRCodeLoginCGIBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didExpiredQRCodeLoginCGIBlock; // @synthesize didExpiredQRCodeLoginCGIBlock=_didExpiredQRCodeLoginCGIBlock;
@property(copy, nonatomic) CDUnknownBlockType didCancelQRCodeLoginCGIBlock; // @synthesize didCancelQRCodeLoginCGIBlock=_didCancelQRCodeLoginCGIBlock;
@property(copy, nonatomic) CDUnknownBlockType didConfirmedQRCodeLoginCGIBlock; // @synthesize didConfirmedQRCodeLoginCGIBlock=_didConfirmedQRCodeLoginCGIBlock;
@property(copy, nonatomic) CDUnknownBlockType didScannedQRCodeLoginCGIBlock; // @synthesize didScannedQRCodeLoginCGIBlock=_didScannedQRCodeLoginCGIBlock;
@property(retain, nonatomic) MMTimer *qrCodeExpireTimer; // @synthesize qrCodeExpireTimer=_qrCodeExpireTimer;
@property(retain, nonatomic) MMTimer *checkQRCodeTimer; // @synthesize checkQRCodeTimer=_checkQRCodeTimer;
@property(retain, nonatomic) NSData *qrNotifyDecodeKey; // @synthesize qrNotifyDecodeKey=_qrNotifyDecodeKey;
@property(nonatomic) unsigned int qrCheckTime; // @synthesize qrCheckTime=_qrCheckTime;
@property(retain, nonatomic) NSString *qrUUID; // @synthesize qrUUID=_qrUUID;
- (void).cxx_destruct;
- (void)onServerNotify:(int)arg1 cmdID:(int)arg2 notifyData:(id)arg3;
- (BOOL)handleNotify:(id)arg1 withOpcode:(unsigned int)arg2;
- (void)checkLoginQRCode;
- (void)expireTimeCheckDidFire;
- (void)clearLoginCheckWithOpCode:(unsigned int)arg1;
- (void)stopCGI;
- (void)getQRCodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopQRCodeExpireTimer;
- (void)stopCheckQRCodeTimer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

