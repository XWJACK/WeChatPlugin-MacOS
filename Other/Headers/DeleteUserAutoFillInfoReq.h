//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface DeleteUserAutoFillInfoReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasAppid:1;
    unsigned int hasGroupKey:1;
    unsigned int hasGroupId:1;
    unsigned int hasSource:1;
    unsigned int groupId;
    unsigned int source;
    BaseRequest *baseRequest;
    NSString *appid;
    NSString *groupKey;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetSource:) unsigned int source; // @synthesize source;
@property(readonly, nonatomic) BOOL hasSource; // @synthesize hasSource;
@property(nonatomic, setter=SetGroupId:) unsigned int groupId; // @synthesize groupId;
@property(readonly, nonatomic) BOOL hasGroupId; // @synthesize hasGroupId;
@property(retain, nonatomic, setter=SetGroupKey:) NSString *groupKey; // @synthesize groupKey;
@property(readonly, nonatomic) BOOL hasGroupKey; // @synthesize hasGroupKey;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

