//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray, NSString;

@interface PreSubmitOrderResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasExpressCount:1;
    unsigned int hasLockId:1;
    unsigned int hasRetCode:1;
    unsigned int hasRetMsg:1;
    unsigned int hasActionAttrCount:1;
    unsigned int expressCount;
    int retCode;
    unsigned int actionAttrCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableExpressList;
    NSString *lockId;
    NSString *retMsg;
    NSMutableArray *mutableActionAttrsList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetActionAttrCount:) unsigned int actionAttrCount; // @synthesize actionAttrCount;
@property(readonly, nonatomic) BOOL hasActionAttrCount; // @synthesize hasActionAttrCount;
@property(retain, nonatomic) NSMutableArray *mutableActionAttrsList; // @synthesize mutableActionAttrsList;
@property(retain, nonatomic, setter=SetRetMsg:) NSString *retMsg; // @synthesize retMsg;
@property(readonly, nonatomic) BOOL hasRetMsg; // @synthesize hasRetMsg;
@property(nonatomic, setter=SetRetCode:) int retCode; // @synthesize retCode;
@property(readonly, nonatomic) BOOL hasRetCode; // @synthesize hasRetCode;
@property(retain, nonatomic, setter=SetLockId:) NSString *lockId; // @synthesize lockId;
@property(readonly, nonatomic) BOOL hasLockId; // @synthesize hasLockId;
@property(retain, nonatomic) NSMutableArray *mutableExpressList; // @synthesize mutableExpressList;
@property(nonatomic, setter=SetExpressCount:) unsigned int expressCount; // @synthesize expressCount;
@property(readonly, nonatomic) BOOL hasExpressCount; // @synthesize hasExpressCount;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addActionAttrs:(id)arg1;
- (void)addActionAttrsFromArray:(id)arg1;
- (void)addExpress:(id)arg1;
- (void)addExpressFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *actionAttrs; // @dynamic actionAttrs;
- (id)actionAttrsList;
@property(retain, nonatomic) NSMutableArray *express; // @dynamic express;
- (id)expressList;
- (id)init;

@end

