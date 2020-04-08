//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface WeAppWidgetAlarmReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasAppid:1;
    unsigned int hasId:1;
    unsigned int id_;
    unsigned int hasQuery:1;
    unsigned int hasUsername:1;
    BaseRequest *baseRequest;
    NSString *appid;
    NSMutableArray *mutableKeysList;
    NSString *query;
    NSString *username;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetUsername:) NSString *username; // @synthesize username;
@property(readonly, nonatomic) BOOL hasUsername; // @synthesize hasUsername;
@property(retain, nonatomic, setter=SetQuery:) NSString *query; // @synthesize query;
@property(readonly, nonatomic) BOOL hasQuery; // @synthesize hasQuery;
@property(retain, nonatomic) NSMutableArray *mutableKeysList; // @synthesize mutableKeysList;
@property(nonatomic, setter=SetId:) unsigned int id; // @synthesize id=id_;
@property(readonly, nonatomic) BOOL hasId; // @synthesize hasId;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addKeysFromArray:(id)arg1;
- (void)addKeys:(unsigned int)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *keys; // @dynamic keys;
- (id)keysList;
- (id)init;

@end

