//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface TranslateOrgMsg : PBGeneratedMessage
{
    unsigned int hasClientMsgId:1;
    unsigned int hasTextMsg:1;
    unsigned int hasChatRoomId:1;
    unsigned int hasScene:1;
    unsigned int clientMsgId;
    unsigned int scene;
    NSString *textMsg;
    NSString *chatRoomId;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetScene:) unsigned int scene; // @synthesize scene;
@property(readonly, nonatomic) BOOL hasScene; // @synthesize hasScene;
@property(retain, nonatomic, setter=SetChatRoomId:) NSString *chatRoomId; // @synthesize chatRoomId;
@property(readonly, nonatomic) BOOL hasChatRoomId; // @synthesize hasChatRoomId;
@property(retain, nonatomic, setter=SetTextMsg:) NSString *textMsg; // @synthesize textMsg;
@property(readonly, nonatomic) BOOL hasTextMsg; // @synthesize hasTextMsg;
@property(nonatomic, setter=SetClientMsgId:) unsigned int clientMsgId; // @synthesize clientMsgId;
@property(readonly, nonatomic) BOOL hasClientMsgId; // @synthesize hasClientMsgId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
