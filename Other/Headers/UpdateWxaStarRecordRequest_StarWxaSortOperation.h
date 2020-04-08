//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class UpdateWxaStarRecordRequest_StarWxaInfo;

@interface UpdateWxaStarRecordRequest_StarWxaSortOperation : PBGeneratedMessage
{
    unsigned int hasSself:1;
    unsigned int hasPre:1;
    unsigned int hasNext:1;
    unsigned int hasScene:1;
    unsigned int hasOper:1;
    unsigned int scene;
    unsigned int oper;
    UpdateWxaStarRecordRequest_StarWxaInfo *sself;
    UpdateWxaStarRecordRequest_StarWxaInfo *pre;
    UpdateWxaStarRecordRequest_StarWxaInfo *next;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetOper:) unsigned int oper; // @synthesize oper;
@property(readonly, nonatomic) BOOL hasOper; // @synthesize hasOper;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetNext:) UpdateWxaStarRecordRequest_StarWxaInfo *next; // @synthesize next;
@property(readonly, nonatomic) BOOL hasNext; // @synthesize hasNext;
@property(retain, nonatomic, setter=SetPre:) UpdateWxaStarRecordRequest_StarWxaInfo *pre; // @synthesize pre;
@property(readonly, nonatomic) BOOL hasPre; // @synthesize hasPre;
@property(retain, nonatomic, setter=SetSself:) UpdateWxaStarRecordRequest_StarWxaInfo *sself; // @synthesize sself;
@property(readonly, nonatomic) BOOL hasSself; // @synthesize hasSself;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

