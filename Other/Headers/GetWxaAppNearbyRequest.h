//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString;

@interface GetWxaAppNearbyRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasLocationX:1;
    unsigned int hasLocationY:1;
    unsigned int hasNearbyListId:1;
    unsigned int hasNeedSetNearbyState:1;
    unsigned int needSetNearbyState_:1;
    BaseRequest *baseRequest;
    double locationX;
    double locationY;
    NSString *nearbyListId;
}

+ (id)parseFromData:(id)arg1;
@property(readonly, nonatomic) BOOL hasNeedSetNearbyState; // @synthesize hasNeedSetNearbyState;
@property(retain, nonatomic, setter=SetNearbyListId:) NSString *nearbyListId; // @synthesize nearbyListId;
@property(readonly, nonatomic) BOOL hasNearbyListId; // @synthesize hasNearbyListId;
@property(nonatomic, setter=SetLocationY:) double locationY; // @synthesize locationY;
@property(readonly, nonatomic) BOOL hasLocationY; // @synthesize hasLocationY;
@property(nonatomic, setter=SetLocationX:) double locationX; // @synthesize locationX;
@property(readonly, nonatomic) BOOL hasLocationX; // @synthesize hasLocationX;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(nonatomic, setter=SetNeedSetNearbyState:) BOOL needSetNearbyState; // @synthesize needSetNearbyState=needSetNearbyState_;
- (id)init;

@end

