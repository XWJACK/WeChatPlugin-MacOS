//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface GetUserAutoFillInfoReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasAppid:1;
    unsigned int hasGetAllInfo:1;
    unsigned int getAllInfo_:1;
    unsigned int hasSource:1;
    unsigned int source;
    BaseRequest *baseRequest;
    NSString *appid;
    NSMutableArray *mutableUserInfoListList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetSource:) unsigned int source; // @synthesize source;
@property(readonly, nonatomic) BOOL hasSource; // @synthesize hasSource;
@property(retain, nonatomic) NSMutableArray *mutableUserInfoListList; // @synthesize mutableUserInfoListList;
@property(readonly, nonatomic) BOOL hasGetAllInfo; // @synthesize hasGetAllInfo;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addUserInfoListFromArray:(id)arg1;
- (void)addUserInfoList:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *userInfoList; // @dynamic userInfoList;
- (id)userInfoListList;
@property(nonatomic, setter=SetGetAllInfo:) BOOL getAllInfo; // @synthesize getAllInfo=getAllInfo_;
- (id)init;

@end
