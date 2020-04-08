//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface BackupStartGeneralInfo : PBGeneratedMessage
{
    unsigned int hasDeviceId:1;
    unsigned int hasDeviceName:1;
    unsigned int hasModel:1;
    unsigned int hasSystemName:1;
    unsigned int hasSystemVersion:1;
    unsigned int hasWechatVersion:1;
    unsigned int hasDeviceFreeSpace:1;
    unsigned int wechatVersion;
    NSString *deviceId;
    NSString *deviceName;
    NSString *model;
    NSString *systemName;
    NSString *systemVersion;
    unsigned long long deviceFreeSpace;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetDeviceFreeSpace:) unsigned long long deviceFreeSpace; // @synthesize deviceFreeSpace;
@property(readonly, nonatomic) BOOL hasDeviceFreeSpace; // @synthesize hasDeviceFreeSpace;
@property(nonatomic, setter=SetWechatVersion:) unsigned int wechatVersion; // @synthesize wechatVersion;
@property(readonly, nonatomic) BOOL hasWechatVersion; // @synthesize hasWechatVersion;
@property(retain, nonatomic, setter=SetSystemVersion:) NSString *systemVersion; // @synthesize systemVersion;
@property(readonly, nonatomic) BOOL hasSystemVersion; // @synthesize hasSystemVersion;
@property(retain, nonatomic, setter=SetSystemName:) NSString *systemName; // @synthesize systemName;
@property(readonly, nonatomic) BOOL hasSystemName; // @synthesize hasSystemName;
@property(retain, nonatomic, setter=SetModel:) NSString *model; // @synthesize model;
@property(readonly, nonatomic) BOOL hasModel; // @synthesize hasModel;
@property(retain, nonatomic, setter=SetDeviceName:) NSString *deviceName; // @synthesize deviceName;
@property(readonly, nonatomic) BOOL hasDeviceName; // @synthesize hasDeviceName;
@property(retain, nonatomic, setter=SetDeviceId:) NSString *deviceId; // @synthesize deviceId;
@property(readonly, nonatomic) BOOL hasDeviceId; // @synthesize hasDeviceId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
