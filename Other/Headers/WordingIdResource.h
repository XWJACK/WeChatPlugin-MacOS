//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WordingIdResource : PBGeneratedMessage
{
    unsigned int hasWordingId:1;
    unsigned int hasWording:1;
    unsigned int hasPinyin:1;
    unsigned int hasQuanpin:1;
    NSString *wordingId;
    NSString *wording;
    NSString *pinyin;
    NSString *quanpin;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetQuanpin:) NSString *quanpin; // @synthesize quanpin;
@property(readonly, nonatomic) BOOL hasQuanpin; // @synthesize hasQuanpin;
@property(retain, nonatomic, setter=SetPinyin:) NSString *pinyin; // @synthesize pinyin;
@property(readonly, nonatomic) BOOL hasPinyin; // @synthesize hasPinyin;
@property(retain, nonatomic, setter=SetWording:) NSString *wording; // @synthesize wording;
@property(readonly, nonatomic) BOOL hasWording; // @synthesize hasWording;
@property(retain, nonatomic, setter=SetWordingId:) NSString *wordingId; // @synthesize wordingId;
@property(readonly, nonatomic) BOOL hasWordingId; // @synthesize hasWordingId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

