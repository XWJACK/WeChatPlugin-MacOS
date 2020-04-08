//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString, SKBuiltinBuffer_t, SKBuiltinString_t, SafeDeviceList;

@interface BindQQResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasImgSid:1;
    unsigned int hasImgBuf:1;
    unsigned int hasPushMailStatus:1;
    unsigned int hasPrivateMsgStatus:1;
    unsigned int hasMicroBlogName:1;
    unsigned int hasStatus:1;
    unsigned int hasQqmailSkey:1;
    unsigned int hasImgEncryptKey:1;
    unsigned int hasA2Key:1;
    unsigned int hasKsid:1;
    unsigned int hasSafeDeviceList:1;
    unsigned int hasSafeDevice:1;
    unsigned int hasWtloginRspBuff:1;
    unsigned int pushMailStatus;
    unsigned int privateMsgStatus;
    unsigned int status;
    unsigned int safeDevice;
    BaseResponse *baseResponse;
    NSString *imgSid;
    SKBuiltinBuffer_t *imgBuf;
    NSString *microBlogName;
    NSString *qqmailSkey;
    SKBuiltinString_t *imgEncryptKey;
    SKBuiltinBuffer_t *a2Key;
    SKBuiltinBuffer_t *ksid;
    SafeDeviceList *safeDeviceList;
    SKBuiltinBuffer_t *wtloginRspBuff;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetWtloginRspBuff:) SKBuiltinBuffer_t *wtloginRspBuff; // @synthesize wtloginRspBuff;
@property(readonly, nonatomic) BOOL hasWtloginRspBuff; // @synthesize hasWtloginRspBuff;
@property(nonatomic, setter=SetSafeDevice:) unsigned int safeDevice; // @synthesize safeDevice;
@property(readonly, nonatomic) BOOL hasSafeDevice; // @synthesize hasSafeDevice;
@property(retain, nonatomic, setter=SetSafeDeviceList:) SafeDeviceList *safeDeviceList; // @synthesize safeDeviceList;
@property(readonly, nonatomic) BOOL hasSafeDeviceList; // @synthesize hasSafeDeviceList;
@property(retain, nonatomic, setter=SetKsid:) SKBuiltinBuffer_t *ksid; // @synthesize ksid;
@property(readonly, nonatomic) BOOL hasKsid; // @synthesize hasKsid;
@property(retain, nonatomic, setter=SetA2Key:) SKBuiltinBuffer_t *a2Key; // @synthesize a2Key;
@property(readonly, nonatomic) BOOL hasA2Key; // @synthesize hasA2Key;
@property(retain, nonatomic, setter=SetImgEncryptKey:) SKBuiltinString_t *imgEncryptKey; // @synthesize imgEncryptKey;
@property(readonly, nonatomic) BOOL hasImgEncryptKey; // @synthesize hasImgEncryptKey;
@property(retain, nonatomic, setter=SetQqmailSkey:) NSString *qqmailSkey; // @synthesize qqmailSkey;
@property(readonly, nonatomic) BOOL hasQqmailSkey; // @synthesize hasQqmailSkey;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(retain, nonatomic, setter=SetMicroBlogName:) NSString *microBlogName; // @synthesize microBlogName;
@property(readonly, nonatomic) BOOL hasMicroBlogName; // @synthesize hasMicroBlogName;
@property(nonatomic, setter=SetPrivateMsgStatus:) unsigned int privateMsgStatus; // @synthesize privateMsgStatus;
@property(readonly, nonatomic) BOOL hasPrivateMsgStatus; // @synthesize hasPrivateMsgStatus;
@property(nonatomic, setter=SetPushMailStatus:) unsigned int pushMailStatus; // @synthesize pushMailStatus;
@property(readonly, nonatomic) BOOL hasPushMailStatus; // @synthesize hasPushMailStatus;
@property(retain, nonatomic, setter=SetImgBuf:) SKBuiltinBuffer_t *imgBuf; // @synthesize imgBuf;
@property(readonly, nonatomic) BOOL hasImgBuf; // @synthesize hasImgBuf;
@property(retain, nonatomic, setter=SetImgSid:) NSString *imgSid; // @synthesize imgSid;
@property(readonly, nonatomic) BOOL hasImgSid; // @synthesize hasImgSid;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

