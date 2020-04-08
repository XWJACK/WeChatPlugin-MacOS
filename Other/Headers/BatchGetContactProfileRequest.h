//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

@interface BatchGetContactProfileRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasMode:1;
    unsigned int hasCount:1;
    unsigned int mode;
    unsigned int count;
    BaseRequest *baseRequest;
    NSMutableArray *mutableUserNameListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableUserNameListList; // @synthesize mutableUserNameListList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(nonatomic, setter=SetMode:) unsigned int mode; // @synthesize mode;
@property(readonly, nonatomic) BOOL hasMode; // @synthesize hasMode;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addUserNameList:(id)arg1;
- (void)addUserNameListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *userNameList; // @dynamic userNameList;
- (id)userNameListList;
- (id)init;

@end

