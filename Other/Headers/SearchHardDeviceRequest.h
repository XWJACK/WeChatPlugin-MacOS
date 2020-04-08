//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface SearchHardDeviceRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasHardDeviceQrcode:1;
    BaseRequest *baseRequest;
    NSString *hardDeviceQrcode;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetHardDeviceQrcode:) NSString *hardDeviceQrcode; // @synthesize hardDeviceQrcode;
@property(readonly, nonatomic) BOOL hasHardDeviceQrcode; // @synthesize hasHardDeviceQrcode;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

