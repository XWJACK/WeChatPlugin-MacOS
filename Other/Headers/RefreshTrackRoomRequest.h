//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseRequest, NSString, TrackPOIItem, UserPositionItem;

@interface RefreshTrackRoomRequest : PBGeneratedMessage
{
    unsigned int hasBaseRequest:1;
    unsigned int hasTrackRoomId:1;
    unsigned int hasType:1;
    unsigned int hasUserPosition:1;
    unsigned int hasTimeStamp:1;
    unsigned int hasUserPoi:1;
    int type;
    unsigned int timeStamp;
    BaseRequest *baseRequest;
    NSString *trackRoomId;
    UserPositionItem *userPosition;
    TrackPOIItem *userPoi;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetUserPoi:) TrackPOIItem *userPoi; // @synthesize userPoi;
@property(readonly, nonatomic) BOOL hasUserPoi; // @synthesize hasUserPoi;
@property(nonatomic, setter=SetTimeStamp:) unsigned int timeStamp; // @synthesize timeStamp;
@property(readonly, nonatomic) BOOL hasTimeStamp; // @synthesize hasTimeStamp;
@property(retain, nonatomic, setter=SetUserPosition:) UserPositionItem *userPosition; // @synthesize userPosition;
@property(readonly, nonatomic) BOOL hasUserPosition; // @synthesize hasUserPosition;
@property(nonatomic, setter=SetType:) int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetTrackRoomId:) NSString *trackRoomId; // @synthesize trackRoomId;
@property(readonly, nonatomic) BOOL hasTrackRoomId; // @synthesize hasTrackRoomId;
@property(retain, nonatomic, setter=SetBaseRequest:) BaseRequest *baseRequest; // @synthesize baseRequest;
@property(readonly, nonatomic) BOOL hasBaseRequest; // @synthesize hasBaseRequest;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
