//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface ScanBarcodeRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasType:1;
    unsigned int hasBarcode:1;
    unsigned int hasScene:1;
    unsigned int type;
    unsigned int scene;
    BaseRequest *baseRequest;
    NSString *barcode;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetBarcode:) NSString *barcode; // @synthesize barcode;
@property(readonly, nonatomic) BOOL hasBarcode; // @synthesize hasBarcode;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

