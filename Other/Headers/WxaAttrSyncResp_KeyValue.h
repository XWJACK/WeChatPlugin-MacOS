//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WxaAttrSyncResp_KeyValue : PBGeneratedMessage
{
    unsigned int hasKey:1;
    unsigned int hasValue:1;
    NSString *value_;
    NSString *key;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetValue:) NSString *value; // @synthesize value=value_;
@property(readonly, nonatomic) BOOL hasValue; // @synthesize hasValue;
@property(retain, nonatomic, setter=SetKey:) NSString *key; // @synthesize key;
@property(readonly, nonatomic) BOOL hasKey; // @synthesize hasKey;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

