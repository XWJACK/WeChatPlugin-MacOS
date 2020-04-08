//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, SKBuiltinBuffer_t;

@interface OpPatternLockRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasCmd:1;
    unsigned int hasNowpatternhash:1;
    unsigned int hasNewpatternhash:1;
    unsigned int cmd;
    BaseRequest *baseRequest;
    SKBuiltinBuffer_t *nowpatternhash;
    SKBuiltinBuffer_t *newpatternhash;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetNewpatternhash:) SKBuiltinBuffer_t *newpatternhash; // @synthesize newpatternhash;
@property(readonly, nonatomic) BOOL hasNewpatternhash; // @synthesize hasNewpatternhash;
@property(retain, nonatomic, setter=SetNowpatternhash:) SKBuiltinBuffer_t *nowpatternhash; // @synthesize nowpatternhash;
@property(readonly, nonatomic) BOOL hasNowpatternhash; // @synthesize hasNowpatternhash;
@property(nonatomic, setter=SetCmd:) unsigned int cmd; // @synthesize cmd;
@property(readonly, nonatomic) BOOL hasCmd; // @synthesize hasCmd;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

