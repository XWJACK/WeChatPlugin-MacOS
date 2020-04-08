//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface GetServiceNotifyOptionsResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasGlobalSwitch:1;
    unsigned int globalSwitch_:1;
    unsigned int hasCustomSessionGlobalSwitch:1;
    unsigned int customSessionGlobalSwitch_:1;
    BaseResponse *baseResponse;
    NSMutableArray *mutableWxaOptionsList;
    NSMutableArray *mutableCustomSessionWxaOptionsList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableCustomSessionWxaOptionsList; // @synthesize mutableCustomSessionWxaOptionsList;
@property(readonly, nonatomic) BOOL hasCustomSessionGlobalSwitch; // @synthesize hasCustomSessionGlobalSwitch;
@property(retain, nonatomic) NSMutableArray *mutableWxaOptionsList; // @synthesize mutableWxaOptionsList;
@property(readonly, nonatomic) BOOL hasGlobalSwitch; // @synthesize hasGlobalSwitch;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addCustomSessionWxaOptions:(id)arg1;
- (void)addCustomSessionWxaOptionsFromArray:(id)arg1;
- (void)addWxaOptions:(id)arg1;
- (void)addWxaOptionsFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *customSessionWxaOptions; // @dynamic customSessionWxaOptions;
- (id)customSessionWxaOptionsList;
@property(nonatomic, setter=SetCustomSessionGlobalSwitch:) BOOL customSessionGlobalSwitch; // @synthesize customSessionGlobalSwitch=customSessionGlobalSwitch_;
@property(retain, nonatomic) NSMutableArray *wxaOptions; // @dynamic wxaOptions;
- (id)wxaOptionsList;
@property(nonatomic, setter=SetGlobalSwitch:) BOOL globalSwitch; // @synthesize globalSwitch=globalSwitch_;
- (id)init;

@end

