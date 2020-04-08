//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ModChatRoomMemberFlag : PBGeneratedMessage
{
    unsigned int hasChatRoomName:1;
    unsigned int hasUserName:1;
    unsigned int hasFlagSwitch:1;
    unsigned int hasValue:1;
    unsigned int value_;
    unsigned int flagSwitch;
    NSString *chatRoomName;
    NSString *userName;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetValue:) unsigned int value; // @synthesize value=value_;
@property(readonly, nonatomic) BOOL hasValue; // @synthesize hasValue;
@property(nonatomic, setter=SetFlagSwitch:) unsigned int flagSwitch; // @synthesize flagSwitch;
@property(readonly, nonatomic) BOOL hasFlagSwitch; // @synthesize hasFlagSwitch;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(retain, nonatomic, setter=SetChatRoomName:) NSString *chatRoomName; // @synthesize chatRoomName;
@property(readonly, nonatomic) BOOL hasChatRoomName; // @synthesize hasChatRoomName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

