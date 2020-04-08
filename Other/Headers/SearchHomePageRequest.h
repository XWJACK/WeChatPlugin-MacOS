//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class LbsLocationNew, NSMutableArray, NSString;

@interface SearchHomePageRequest : PBGeneratedMessage
{
    unsigned int hasBusinessType:1;
    unsigned int hasKeyWord:1;
    unsigned int hasLocation:1;
    unsigned int hasRequestSrc:1;
    unsigned int requestSrc;
    unsigned long long businessType;
    NSString *keyWord;
    LbsLocationNew *location;
    NSMutableArray *mutableMatchUserListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableMatchUserListList; // @synthesize mutableMatchUserListList;
@property(nonatomic, setter=SetRequestSrc:) unsigned int requestSrc; // @synthesize requestSrc;
@property(readonly, nonatomic) BOOL hasRequestSrc; // @synthesize hasRequestSrc;
@property(retain, nonatomic, setter=SetLocation:) LbsLocationNew *location; // @synthesize location;
@property(readonly, nonatomic) BOOL hasLocation; // @synthesize hasLocation;
@property(retain, nonatomic, setter=SetKeyWord:) NSString *keyWord; // @synthesize keyWord;
@property(readonly, nonatomic) BOOL hasKeyWord; // @synthesize hasKeyWord;
@property(nonatomic, setter=SetBusinessType:) unsigned long long businessType; // @synthesize businessType;
@property(readonly, nonatomic) BOOL hasBusinessType; // @synthesize hasBusinessType;
- (void).cxx_destruct;
- (void)addMatchUserList:(id)arg1;
- (void)addMatchUserListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *matchUserList; // @dynamic matchUserList;
- (id)matchUserListList;
- (id)init;

@end
