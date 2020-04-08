//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, Package;

@interface DownLoadPackageRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasPackage:1;
    unsigned int hasOffset:1;
    unsigned int hasLen:1;
    unsigned int hasType:1;
    unsigned int offset;
    unsigned int len;
    unsigned int type;
    BaseRequest *baseRequest;
    Package *package;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(nonatomic, setter=SetLen:) unsigned int len; // @synthesize len;
@property(readonly, nonatomic) BOOL hasLen; // @synthesize hasLen;
@property(nonatomic, setter=SetOffset:) unsigned int offset; // @synthesize offset;
@property(readonly, nonatomic) BOOL hasOffset; // @synthesize hasOffset;
@property(retain, nonatomic, setter=SetPackage:) Package *package; // @synthesize package;
@property(readonly, nonatomic) BOOL hasPackage; // @synthesize hasPackage;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

