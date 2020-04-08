//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSMutableArray;

@interface CollectChatRoomReq : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasGroupCardCount:1;
    unsigned int groupCardCount;
    BaseRequest *baseRequest;
    NSMutableArray *mutableGroupCardListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableGroupCardListList; // @synthesize mutableGroupCardListList;
@property(nonatomic, setter=SetGroupCardCount:) unsigned int groupCardCount; // @synthesize groupCardCount;
@property(readonly, nonatomic) BOOL hasGroupCardCount; // @synthesize hasGroupCardCount;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (void)addGroupCardList:(id)arg1;
- (void)addGroupCardListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *groupCardList; // @dynamic groupCardList;
- (id)groupCardListList;
- (id)init;

@end
