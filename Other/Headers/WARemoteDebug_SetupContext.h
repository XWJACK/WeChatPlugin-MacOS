//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, WARemoteDebug_DeviceInfo, WARemoteDebug_RegisterInterface;

@interface WARemoteDebug_SetupContext : PBGeneratedMessage
{
    unsigned int hasRegisterInterface:1;
    unsigned int hasDeviceInfo:1;
    unsigned int hasConfigureJs:1;
    unsigned int hasPublicJsMd5:1;
    unsigned int hasThreeJsMd5:1;
    unsigned int hasSupportCompressAlgo:1;
    unsigned int supportCompressAlgo;
    WARemoteDebug_RegisterInterface *registerInterface;
    WARemoteDebug_DeviceInfo *deviceInfo;
    NSString *configureJs;
    NSString *publicJsMd5;
    NSString *threeJsMd5;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetSupportCompressAlgo:) unsigned int supportCompressAlgo; // @synthesize supportCompressAlgo;
@property(readonly, nonatomic) BOOL hasSupportCompressAlgo; // @synthesize hasSupportCompressAlgo;
@property(retain, nonatomic, setter=SetThreeJsMd5:) NSString *threeJsMd5; // @synthesize threeJsMd5;
@property(readonly, nonatomic) BOOL hasThreeJsMd5; // @synthesize hasThreeJsMd5;
@property(retain, nonatomic, setter=SetPublicJsMd5:) NSString *publicJsMd5; // @synthesize publicJsMd5;
@property(readonly, nonatomic) BOOL hasPublicJsMd5; // @synthesize hasPublicJsMd5;
@property(retain, nonatomic, setter=SetConfigureJs:) NSString *configureJs; // @synthesize configureJs;
@property(readonly, nonatomic) BOOL hasConfigureJs; // @synthesize hasConfigureJs;
@property(retain, nonatomic, setter=SetDeviceInfo:) WARemoteDebug_DeviceInfo *deviceInfo; // @synthesize deviceInfo;
@property(readonly, nonatomic) BOOL hasDeviceInfo; // @synthesize hasDeviceInfo;
@property(retain, nonatomic, setter=SetRegisterInterface:) WARemoteDebug_RegisterInterface *registerInterface; // @synthesize registerInterface;
@property(readonly, nonatomic) BOOL hasRegisterInterface; // @synthesize hasRegisterInterface;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
