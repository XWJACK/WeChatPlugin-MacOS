//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface GetOpenIMResourceReq : PBGeneratedMessage
{
    unsigned int hasLanguage:1;
    unsigned int hasAppId:1;
    NSString *language;
    NSString *appId;
    NSMutableArray *mutableWordingIdList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableWordingIdList; // @synthesize mutableWordingIdList;
@property(retain, nonatomic, setter=SetAppId:) NSString *appId; // @synthesize appId;
@property(readonly, nonatomic) BOOL hasAppId; // @synthesize hasAppId;
@property(retain, nonatomic, setter=SetLanguage:) NSString *language; // @synthesize language;
@property(readonly, nonatomic) BOOL hasLanguage; // @synthesize hasLanguage;
- (void).cxx_destruct;
- (void)addWordingIdFromArray:(id)arg1;
- (void)addWordingId:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *wordingId; // @dynamic wordingId;
- (id)wordingIdList;
- (id)init;

@end
