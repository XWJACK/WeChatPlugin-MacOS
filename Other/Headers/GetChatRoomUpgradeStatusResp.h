//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface GetChatRoomUpgradeStatusResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasStatus:1;
    unsigned int hasMobileQuota:1;
    unsigned int hasCardQuota:1;
    unsigned int hasDonateQuota:1;
    unsigned int hasMaxCount:1;
    unsigned int hasResultMsg:1;
    unsigned int hasTotalQuota:1;
    unsigned int status;
    unsigned int mobileQuota;
    unsigned int cardQuota;
    unsigned int donateQuota;
    unsigned int maxCount;
    unsigned int totalQuota;
    BaseResponse *baseResponse;
    NSString *resultMsg;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetTotalQuota:) unsigned int totalQuota; // @synthesize totalQuota;
@property(readonly, nonatomic) BOOL hasTotalQuota; // @synthesize hasTotalQuota;
@property(retain, nonatomic, setter=SetResultMsg:) NSString *resultMsg; // @synthesize resultMsg;
@property(readonly, nonatomic) BOOL hasResultMsg; // @synthesize hasResultMsg;
@property(nonatomic, setter=SetMaxCount:) unsigned int maxCount; // @synthesize maxCount;
@property(readonly, nonatomic) BOOL hasMaxCount; // @synthesize hasMaxCount;
@property(nonatomic, setter=SetDonateQuota:) unsigned int donateQuota; // @synthesize donateQuota;
@property(readonly, nonatomic) BOOL hasDonateQuota; // @synthesize hasDonateQuota;
@property(nonatomic, setter=SetCardQuota:) unsigned int cardQuota; // @synthesize cardQuota;
@property(readonly, nonatomic) BOOL hasCardQuota; // @synthesize hasCardQuota;
@property(nonatomic, setter=SetMobileQuota:) unsigned int mobileQuota; // @synthesize mobileQuota;
@property(readonly, nonatomic) BOOL hasMobileQuota; // @synthesize hasMobileQuota;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

