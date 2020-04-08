//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WARemoteDebug_RoomInfo : PBGeneratedMessage
{
    unsigned int hasJoinRoom:1;
    unsigned int joinRoom_:1;
    unsigned int hasRoomId:1;
    unsigned int hasOriginalMd5:1;
    unsigned int hasRoomStatus:1;
    unsigned int hasWxConnStatus:1;
    unsigned int hasDevConnStatus:1;
    unsigned int roomStatus;
    unsigned int wxConnStatus;
    unsigned int devConnStatus;
    NSString *roomId;
    NSString *originalMd5;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetDevConnStatus:) unsigned int devConnStatus; // @synthesize devConnStatus;
@property(readonly, nonatomic) BOOL hasDevConnStatus; // @synthesize hasDevConnStatus;
@property(nonatomic, setter=SetWxConnStatus:) unsigned int wxConnStatus; // @synthesize wxConnStatus;
@property(readonly, nonatomic) BOOL hasWxConnStatus; // @synthesize hasWxConnStatus;
@property(nonatomic, setter=SetRoomStatus:) unsigned int roomStatus; // @synthesize roomStatus;
@property(readonly, nonatomic) BOOL hasRoomStatus; // @synthesize hasRoomStatus;
@property(retain, nonatomic, setter=SetOriginalMd5:) NSString *originalMd5; // @synthesize originalMd5;
@property(readonly, nonatomic) BOOL hasOriginalMd5; // @synthesize hasOriginalMd5;
@property(retain, nonatomic, setter=SetRoomId:) NSString *roomId; // @synthesize roomId;
@property(readonly, nonatomic) BOOL hasRoomId; // @synthesize hasRoomId;
@property(readonly, nonatomic) BOOL hasJoinRoom; // @synthesize hasJoinRoom;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(nonatomic, setter=SetJoinRoom:) BOOL joinRoom; // @synthesize joinRoom=joinRoom_;
- (id)init;

@end
