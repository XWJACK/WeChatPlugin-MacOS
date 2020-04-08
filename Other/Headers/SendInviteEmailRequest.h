//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

@interface SendInviteEmailRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasUinCount:1;
    int uinListMemoizedSerializedSize;
    unsigned int uinCount;
    BaseRequest *baseRequest;
    NSMutableArray *mutableUinListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableUinListList; // @synthesize mutableUinListList;
@property(nonatomic, setter=SetUinCount:) unsigned int uinCount; // @synthesize uinCount;
@property(readonly, nonatomic) BOOL hasUinCount; // @synthesize hasUinCount;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addUinListFromArray:(id)arg1;
- (void)addUinList:(unsigned int)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *uinList; // @dynamic uinList;
- (id)uinListList;
- (id)init;

@end

