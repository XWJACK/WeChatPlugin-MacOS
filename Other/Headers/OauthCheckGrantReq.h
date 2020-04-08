//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest;

@interface OauthCheckGrantReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUseruin:1;
    unsigned int hasBizuin:1;
    unsigned int useruin;
    unsigned int bizuin;
    BaseRequest *baseRequest;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetBizuin:) unsigned int bizuin; // @synthesize bizuin;
@property(readonly, nonatomic) BOOL hasBizuin; // @synthesize hasBizuin;
@property(nonatomic, setter=SetUseruin:) unsigned int useruin; // @synthesize useruin;
@property(readonly, nonatomic) BOOL hasUseruin; // @synthesize hasUseruin;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

