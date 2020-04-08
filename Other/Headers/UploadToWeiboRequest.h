//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSData, NSString;

@interface UploadToWeiboRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasClientMsgId:1;
    unsigned int hasType:1;
    unsigned int hasTotalLen:1;
    unsigned int hasStartPos:1;
    unsigned int hasDataLen:1;
    unsigned int hasData:1;
    NSData *data_;
    unsigned int hasContent:1;
    unsigned int hasFilterType:1;
    unsigned int type;
    unsigned int totalLen;
    unsigned int startPos;
    unsigned int dataLen;
    unsigned int filterType;
    BaseRequest *baseRequest;
    NSString *clientMsgId;
    NSString *content;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetFilterType:) unsigned int filterType; // @synthesize filterType;
@property(readonly, nonatomic) BOOL hasFilterType; // @synthesize hasFilterType;
@property(retain, nonatomic, setter=SetContent:) NSString *content; // @synthesize content;
@property(readonly, nonatomic) BOOL hasContent; // @synthesize hasContent;
@property(retain, nonatomic, setter=SetData:) NSData *data; // @synthesize data=data_;
@property(readonly, nonatomic) BOOL hasData; // @synthesize hasData;
@property(nonatomic, setter=SetDataLen:) unsigned int dataLen; // @synthesize dataLen;
@property(readonly, nonatomic) BOOL hasDataLen; // @synthesize hasDataLen;
@property(nonatomic, setter=SetStartPos:) unsigned int startPos; // @synthesize startPos;
@property(readonly, nonatomic) BOOL hasStartPos; // @synthesize hasStartPos;
@property(nonatomic, setter=SetTotalLen:) unsigned int totalLen; // @synthesize totalLen;
@property(readonly, nonatomic) BOOL hasTotalLen; // @synthesize hasTotalLen;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetClientMsgId:) NSString *clientMsgId; // @synthesize clientMsgId;
@property(readonly, nonatomic) BOOL hasClientMsgId; // @synthesize hasClientMsgId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
