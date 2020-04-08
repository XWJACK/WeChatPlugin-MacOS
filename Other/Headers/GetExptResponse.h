//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface GetExptResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasCurrSvrSecond:1;
    unsigned int hasIntervalSecond:1;
    unsigned int hasExptFlag:1;
    unsigned int currSvrSecond;
    unsigned int intervalSecond;
    unsigned int exptFlag;
    BaseResponse *baseResponse;
    NSMutableArray *mutableDeleteExptListList;
    NSMutableArray *mutableReplaceExptListList;
    NSMutableArray *mutableItemsList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableItemsList; // @synthesize mutableItemsList;
@property(nonatomic, setter=SetExptFlag:) unsigned int exptFlag; // @synthesize exptFlag;
@property(readonly, nonatomic) BOOL hasExptFlag; // @synthesize hasExptFlag;
@property(retain, nonatomic) NSMutableArray *mutableReplaceExptListList; // @synthesize mutableReplaceExptListList;
@property(retain, nonatomic) NSMutableArray *mutableDeleteExptListList; // @synthesize mutableDeleteExptListList;
@property(nonatomic, setter=SetIntervalSecond:) unsigned int intervalSecond; // @synthesize intervalSecond;
@property(readonly, nonatomic) BOOL hasIntervalSecond; // @synthesize hasIntervalSecond;
@property(nonatomic, setter=SetCurrSvrSecond:) unsigned int currSvrSecond; // @synthesize currSvrSecond;
@property(readonly, nonatomic) BOOL hasCurrSvrSecond; // @synthesize hasCurrSvrSecond;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addItems:(id)arg1;
- (void)addItemsFromArray:(id)arg1;
- (void)addReplaceExptList:(id)arg1;
- (void)addReplaceExptListFromArray:(id)arg1;
- (void)addDeleteExptListFromArray:(id)arg1;
- (void)addDeleteExptList:(unsigned int)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
- (id)itemsList;
@property(retain, nonatomic) NSMutableArray *replaceExptList; // @dynamic replaceExptList;
- (id)replaceExptListList;
@property(retain, nonatomic) NSMutableArray *deleteExptList; // @dynamic deleteExptList;
- (id)deleteExptListList;
- (id)init;

@end

