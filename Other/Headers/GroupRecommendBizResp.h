//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, RecommendGroups;

@interface GroupRecommendBizResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasGroupList:1;
    BaseResponse *baseResponse;
    RecommendGroups *groupList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetGroupList:) RecommendGroups *groupList; // @synthesize groupList;
@property(readonly, nonatomic) BOOL hasGroupList; // @synthesize hasGroupList;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

