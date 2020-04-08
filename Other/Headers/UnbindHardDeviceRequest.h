//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, HardDevice;

@interface UnbindHardDeviceRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasHardDevice:1;
    unsigned int hasFlag:1;
    unsigned int flag;
    BaseRequest *baseRequest;
    HardDevice *hardDevice;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetFlag:) unsigned int flag; // @synthesize flag;
@property(readonly, nonatomic) BOOL hasFlag; // @synthesize hasFlag;
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

