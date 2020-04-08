//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface RecommendWxa : PBGeneratedMessage
{
    unsigned int hasAppid:1;
    unsigned int hasUsername:1;
    unsigned int hasNickname:1;
    unsigned int hasLogo:1;
    unsigned int hasSessionId:1;
    unsigned int hasDescInfo:1;
    unsigned int hasEvaluateScore:1;
    unsigned int hasWords:1;
    NSString *appid;
    NSString *username;
    NSString *nickname;
    NSString *logo;
    unsigned long long sessionId;
    NSString *descInfo;
    double evaluateScore;
    NSMutableArray *mutableCateListList;
    NSString *words;
    NSMutableArray *mutableRichInfoList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableRichInfoList; // @synthesize mutableRichInfoList;
@property(retain, nonatomic, setter=SetWords:) NSString *words; // @synthesize words;
@property(readonly, nonatomic) BOOL hasWords; // @synthesize hasWords;
@property(retain, nonatomic) NSMutableArray *mutableCateListList; // @synthesize mutableCateListList;
@property(nonatomic, setter=SetEvaluateScore:) double evaluateScore; // @synthesize evaluateScore;
@property(readonly, nonatomic) BOOL hasEvaluateScore; // @synthesize hasEvaluateScore;
@property(retain, nonatomic, setter=SetDescInfo:) NSString *descInfo; // @synthesize descInfo;
@property(readonly, nonatomic) BOOL hasDescInfo; // @synthesize hasDescInfo;
@property(nonatomic, setter=SetSessionId:) unsigned long long sessionId; // @synthesize sessionId;
@property(readonly, nonatomic) BOOL hasSessionId; // @synthesize hasSessionId;
@property(retain, nonatomic, setter=SetLogo:) NSString *logo; // @synthesize logo;
@property(readonly, nonatomic) BOOL hasLogo; // @synthesize hasLogo;
@property(retain, nonatomic, setter=SetNickname:) NSString *nickname; // @synthesize nickname;
@property(readonly, nonatomic) BOOL hasNickname; // @synthesize hasNickname;
@property(retain, nonatomic, setter=SetUsername:) NSString *username; // @synthesize username;
@property(readonly, nonatomic) BOOL hasUsername; // @synthesize hasUsername;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
- (void).cxx_destruct;
- (void)addRichInfo:(id)arg1;
- (void)addRichInfoFromArray:(id)arg1;
- (void)addCateList:(id)arg1;
- (void)addCateListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *richInfo; // @dynamic richInfo;
- (id)richInfoList;
@property(retain, nonatomic) NSMutableArray *cateList; // @dynamic cateList;
- (id)cateListList;
- (id)init;

@end

