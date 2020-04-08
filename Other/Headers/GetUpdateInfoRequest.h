//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest;

@interface GetUpdateInfoRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUpdateType:1;
    unsigned int hasChannel:1;
    unsigned int updateType;
    unsigned int channel;
    BaseRequest *baseRequest;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetChannel:) unsigned int channel; // @synthesize channel;
@property(readonly, nonatomic) BOOL hasChannel; // @synthesize hasChannel;
@property(nonatomic, setter=SetUpdateType:) unsigned int updateType; // @synthesize updateType;
@property(readonly, nonatomic) BOOL hasUpdateType; // @synthesize hasUpdateType;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

