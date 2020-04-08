//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface GeneralSetRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasSetType:1;
    unsigned int hasSetValue:1;
    int setType;
    BaseRequest *baseRequest;
    NSString *setValue;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetSetValue:) NSString *setValue; // @synthesize setValue;
@property(readonly, nonatomic) BOOL hasSetValue; // @synthesize hasSetValue;
@property(nonatomic, setter=SetSetType:) int setType; // @synthesize setType;
@property(readonly, nonatomic) BOOL hasSetType; // @synthesize hasSetType;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

