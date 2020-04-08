//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class EmotionPrice, NSString;

@interface AskForRewardRequest : PBGeneratedMessage
{
    unsigned int hasProductId:1;
    unsigned int hasPrice:1;
    NSString *productId;
    EmotionPrice *price;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetPrice:) EmotionPrice *price; // @synthesize price;
@property(readonly, nonatomic) BOOL hasPrice; // @synthesize hasPrice;
@property(retain, nonatomic, setter=SetProductId:) NSString *productId; // @synthesize productId;
@property(readonly, nonatomic) BOOL hasProductId; // @synthesize hasProductId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

