//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface DynamicDataRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasKey:1;
    unsigned int hasAppid:1;
    unsigned int hasQuery:1;
    unsigned int hasScene:1;
    unsigned int hasUrl:1;
    unsigned int scene;
    BaseRequest *baseRequest;
    NSString *key;
    NSString *appid;
    NSString *query;
    NSString *url;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetUrl:) NSString *url; // @synthesize url;
@property(readonly, nonatomic) BOOL hasUrl; // @synthesize hasUrl;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetQuery:) NSString *query; // @synthesize query;
@property(readonly, nonatomic) BOOL hasQuery; // @synthesize hasQuery;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
@property(retain, nonatomic, setter=SetKey:) NSString *key; // @synthesize key;
@property(readonly, nonatomic) BOOL hasKey; // @synthesize hasKey;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

