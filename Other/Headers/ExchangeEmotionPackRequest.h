//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface ExchangeEmotionPackRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasProductId:1;
    unsigned int hasSeriesId:1;
    unsigned int hasIsAutomatic:1;
    unsigned int hasScene:1;
    unsigned int isAutomatic;
    unsigned int scene;
    BaseRequest *baseRequest;
    NSString *productId;
    NSString *seriesId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(nonatomic, setter=SetIsAutomatic:) unsigned int isAutomatic; // @synthesize isAutomatic;
@property(readonly, nonatomic) BOOL hasIsAutomatic; // @synthesize hasIsAutomatic;
@property(retain, nonatomic, setter=SetSeriesId:) NSString *seriesId; // @synthesize seriesId;
@property(readonly, nonatomic) BOOL hasSeriesId; // @synthesize hasSeriesId;
@property(retain, nonatomic, setter=SetProductId:) NSString *productId; // @synthesize productId;
@property(readonly, nonatomic) BOOL hasProductId; // @synthesize hasProductId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
