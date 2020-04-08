//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, HardDevice, SKBuiltinBuffer_t;

@interface HardDeviceAuthRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasHardDevice:1;
    unsigned int hasAuthVer:1;
    unsigned int hasAuthBuffer:1;
    unsigned int authVer;
    BaseRequest *baseRequest;
    HardDevice *hardDevice;
    SKBuiltinBuffer_t *authBuffer;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetAuthBuffer:) SKBuiltinBuffer_t *authBuffer; // @synthesize authBuffer;
@property(readonly, nonatomic) BOOL hasAuthBuffer; // @synthesize hasAuthBuffer;
@property(nonatomic, setter=SetAuthVer:) unsigned int authVer; // @synthesize authVer;
@property(readonly, nonatomic) BOOL hasAuthVer; // @synthesize hasAuthVer;
@property(retain, nonatomic, setter=SetHardDevice:) HardDevice *hardDevice; // @synthesize hardDevice;
@property(readonly, nonatomic) BOOL hasHardDevice; // @synthesize hasHardDevice;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

