//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

@interface EmojiUploadRequest : PBGeneratedMessage
{
    unsigned int hasReqTime:1;
    unsigned int reqTime;
    NSMutableArray *mutableEmojiItemList;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetReqTime:) unsigned int reqTime; // @synthesize reqTime;
@property(readonly, nonatomic) BOOL hasReqTime; // @synthesize hasReqTime;
@property(retain, nonatomic) NSMutableArray *mutableEmojiItemList; // @synthesize mutableEmojiItemList;
- (void).cxx_destruct;
- (void)addEmojiItem:(id)arg1;
- (void)addEmojiItemFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *emojiItem; // @dynamic emojiItem;
- (id)emojiItemList;
- (id)init;

@end

