//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString, WxaAppBaseResponse;

@interface CheckDemoInfoResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasWxaappBaseresponse:1;
    unsigned int hasHasNewDemo:1;
    unsigned int hasNewDemo_:1;
    unsigned int hasNewDemoDownloadUrl:1;
    unsigned int hasNewDemoMd5:1;
    unsigned int hasHasNewDemoPage:1;
    unsigned int hasNewDemoPage_:1;
    unsigned int hasNewDemoPageDownloadUrl:1;
    unsigned int hasNewDemoPageMd5:1;
    unsigned int hasNewDemoCodeExtJsonInfo:1;
    BaseResponse *baseResponse;
    WxaAppBaseResponse *wxaappBaseresponse;
    NSString *newDemoDownloadUrl;
    NSString *newDemoMd5;
    NSString *newDemoPageDownloadUrl;
    NSString *newDemoPageMd5;
    NSString *newDemoCodeExtJsonInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetNewDemoCodeExtJsonInfo:) NSString *newDemoCodeExtJsonInfo; // @synthesize newDemoCodeExtJsonInfo;
@property(readonly, nonatomic) BOOL hasNewDemoCodeExtJsonInfo; // @synthesize hasNewDemoCodeExtJsonInfo;
@property(retain, nonatomic, setter=SetNewDemoPageMd5:) NSString *newDemoPageMd5; // @synthesize newDemoPageMd5;
@property(readonly, nonatomic) BOOL hasNewDemoPageMd5; // @synthesize hasNewDemoPageMd5;
@property(retain, nonatomic, setter=SetNewDemoPageDownloadUrl:) NSString *newDemoPageDownloadUrl; // @synthesize newDemoPageDownloadUrl;
@property(readonly, nonatomic) BOOL hasNewDemoPageDownloadUrl; // @synthesize hasNewDemoPageDownloadUrl;
@property(readonly, nonatomic) BOOL hasHasNewDemoPage; // @synthesize hasHasNewDemoPage;
@property(retain, nonatomic, setter=SetNewDemoMd5:) NSString *newDemoMd5; // @synthesize newDemoMd5;
@property(readonly, nonatomic) BOOL hasNewDemoMd5; // @synthesize hasNewDemoMd5;
@property(retain, nonatomic, setter=SetNewDemoDownloadUrl:) NSString *newDemoDownloadUrl; // @synthesize newDemoDownloadUrl;
@property(readonly, nonatomic) BOOL hasNewDemoDownloadUrl; // @synthesize hasNewDemoDownloadUrl;
@property(readonly, nonatomic) BOOL hasHasNewDemo; // @synthesize hasHasNewDemo;
@property(retain, nonatomic, setter=SetWxaappBaseresponse:) WxaAppBaseResponse *wxaappBaseresponse; // @synthesize wxaappBaseresponse;
@property(readonly, nonatomic) BOOL hasWxaappBaseresponse; // @synthesize hasWxaappBaseresponse;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(nonatomic, setter=SetHasNewDemoPage:) BOOL hasNewDemoPage; // @synthesize hasNewDemoPage=hasNewDemoPage_;
@property(nonatomic, setter=SetHasNewDemo:) BOOL hasNewDemo; // @synthesize hasNewDemo=hasNewDemo_;
- (id)init;

@end
