//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface KVReportReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasDeviceModel:1;
    unsigned int hasDeviceBrand:1;
    unsigned int hasOsName:1;
    unsigned int hasOsVersion:1;
    unsigned int hasLanguageVer:1;
    unsigned int hasKvcnt:1;
    unsigned int hasRandomEncryKey:1;
    unsigned int kvcnt;
    BaseRequest *baseRequest;
    NSString *deviceModel;
    NSString *deviceBrand;
    NSString *osName;
    NSString *osVersion;
    NSString *languageVer;
    NSMutableArray *mutableListList;
    SKBuiltinBuffer_t *randomEncryKey;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetRandomEncryKey:) SKBuiltinBuffer_t *randomEncryKey; // @synthesize randomEncryKey;
@property(readonly, nonatomic) BOOL hasRandomEncryKey; // @synthesize hasRandomEncryKey;
@property(retain, nonatomic) NSMutableArray *mutableListList; // @synthesize mutableListList;
@property(nonatomic, setter=SetKvcnt:) unsigned int kvcnt; // @synthesize kvcnt;
@property(readonly, nonatomic) BOOL hasKvcnt; // @synthesize hasKvcnt;
@property(retain, nonatomic, setter=SetLanguageVer:) NSString *languageVer; // @synthesize languageVer;
@property(readonly, nonatomic) BOOL hasLanguageVer; // @synthesize hasLanguageVer;
@property(retain, nonatomic, setter=SetOsVersion:) NSString *osVersion; // @synthesize osVersion;
@property(readonly, nonatomic) BOOL hasOsVersion; // @synthesize hasOsVersion;
@property(retain, nonatomic, setter=SetOsName:) NSString *osName; // @synthesize osName;
@property(readonly, nonatomic) BOOL hasOsName; // @synthesize hasOsName;
@property(retain, nonatomic, setter=SetDeviceBrand:) NSString *deviceBrand; // @synthesize deviceBrand;
@property(readonly, nonatomic) BOOL hasDeviceBrand; // @synthesize hasDeviceBrand;
@property(retain, nonatomic, setter=SetDeviceModel:) NSString *deviceModel; // @synthesize deviceModel;
@property(readonly, nonatomic) BOOL hasDeviceModel; // @synthesize hasDeviceModel;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addList:(id)arg1;
- (void)addListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *list; // @dynamic list;
- (id)listList;
- (id)init;

@end

