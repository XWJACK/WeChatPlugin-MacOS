//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface RevokeOpenIMChatRoomQRCodeReq : PBGeneratedMessage
{
    unsigned int hasRoomName:1;
    unsigned int hasQrcode:1;
    NSString *roomName;
    NSString *qrcode;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetQrcode:) NSString *qrcode; // @synthesize qrcode;
@property(readonly, nonatomic) BOOL hasQrcode; // @synthesize hasQrcode;
@property(retain, nonatomic, setter=SetRoomName:) NSString *roomName; // @synthesize roomName;
@property(readonly, nonatomic) BOOL hasRoomName; // @synthesize hasRoomName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

