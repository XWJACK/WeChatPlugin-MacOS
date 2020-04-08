//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface SendCardRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUserName:1;
    unsigned int hasContent:1;
    unsigned int hasSendCardBitFlag:1;
    unsigned int hasStyle:1;
    unsigned int hasContentEx:1;
    unsigned int sendCardBitFlag;
    unsigned int style;
    BaseRequest *baseRequest;
    NSString *userName;
    NSString *content;
    NSString *contentEx;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetContentEx:) NSString *contentEx; // @synthesize contentEx;
@property(readonly, nonatomic) BOOL hasContentEx; // @synthesize hasContentEx;
@property(nonatomic, setter=SetStyle:) unsigned int style; // @synthesize style;
@property(readonly, nonatomic) BOOL hasStyle; // @synthesize hasStyle;
@property(nonatomic, setter=SetSendCardBitFlag:) unsigned int sendCardBitFlag; // @synthesize sendCardBitFlag;
@property(readonly, nonatomic) BOOL hasSendCardBitFlag; // @synthesize hasSendCardBitFlag;
@property(retain, nonatomic, setter=SetContent:) NSString *content; // @synthesize content;
@property(readonly, nonatomic) BOOL hasContent; // @synthesize hasContent;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

