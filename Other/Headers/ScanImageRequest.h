//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, SKBuiltinBuffer_t;

@interface ScanImageRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasClientScanId:1;
    unsigned int hasImageBuffer:1;
    unsigned int hasTotalLength:1;
    unsigned int hasOffset:1;
    unsigned int hasEndFlag:1;
    unsigned int hasImageType:1;
    unsigned int hasOpcode:1;
    unsigned int hasSessionId:1;
    unsigned int clientScanId;
    unsigned int totalLength;
    unsigned int offset;
    unsigned int endFlag;
    unsigned int imageType;
    unsigned int opcode;
    unsigned int sessionId;
    BaseRequest *baseRequest;
    SKBuiltinBuffer_t *imageBuffer;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetSessionId:) unsigned int sessionId; // @synthesize sessionId;
@property(readonly, nonatomic) BOOL hasSessionId; // @synthesize hasSessionId;
@property(nonatomic, setter=SetOpcode:) unsigned int opcode; // @synthesize opcode;
@property(readonly, nonatomic) BOOL hasOpcode; // @synthesize hasOpcode;
@property(nonatomic, setter=SetImageType:) unsigned int imageType; // @synthesize imageType;
@property(readonly, nonatomic) BOOL hasImageType; // @synthesize hasImageType;
@property(nonatomic, setter=SetEndFlag:) unsigned int endFlag; // @synthesize endFlag;
@property(readonly, nonatomic) BOOL hasEndFlag; // @synthesize hasEndFlag;
@property(nonatomic, setter=SetOffset:) unsigned int offset; // @synthesize offset;
@property(readonly, nonatomic) BOOL hasOffset; // @synthesize hasOffset;
@property(nonatomic, setter=SetTotalLength:) unsigned int totalLength; // @synthesize totalLength;
@property(readonly, nonatomic) BOOL hasTotalLength; // @synthesize hasTotalLength;
@property(retain, nonatomic, setter=SetImageBuffer:) SKBuiltinBuffer_t *imageBuffer; // @synthesize imageBuffer;
@property(readonly, nonatomic) BOOL hasImageBuffer; // @synthesize hasImageBuffer;
@property(nonatomic, setter=SetClientScanId:) unsigned int clientScanId; // @synthesize clientScanId;
@property(readonly, nonatomic) BOOL hasClientScanId; // @synthesize hasClientScanId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

