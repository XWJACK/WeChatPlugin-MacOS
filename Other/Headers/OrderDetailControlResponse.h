//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSString;

@interface OrderDetailControlResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRetCode:1;
    unsigned int hasRetMsg:1;
    int retCode;
    BaseResponse *baseResponse;
    NSString *retMsg;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetRetMsg:) NSString *retMsg; // @synthesize retMsg;
@property(readonly, nonatomic) BOOL hasRetMsg; // @synthesize hasRetMsg;
@property(nonatomic, setter=SetRetCode:) int retCode; // @synthesize retCode;
@property(readonly, nonatomic) BOOL hasRetCode; // @synthesize hasRetCode;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

