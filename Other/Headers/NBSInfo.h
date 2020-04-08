//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface NBSInfo : PBGeneratedMessage
{
    unsigned int hasNbsid:1;
    unsigned int hasSummary:1;
    unsigned int hasCardFlag:1;
    unsigned int hasDistance:1;
    unsigned int hasCategory:1;
    unsigned int hasRank:1;
    unsigned int hasStatus:1;
    unsigned int nbsid;
    unsigned int cardFlag;
    float distance;
    unsigned int rank;
    unsigned int status;
    NSString *summary;
    NSString *category;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetStatus:) unsigned int status; // @synthesize status;
@property(readonly, nonatomic) BOOL hasStatus; // @synthesize hasStatus;
@property(nonatomic, setter=SetRank:) unsigned int rank; // @synthesize rank;
@property(readonly, nonatomic) BOOL hasRank; // @synthesize hasRank;
@property(retain, nonatomic, setter=SetCategory:) NSString *category; // @synthesize category;
@property(readonly, nonatomic) BOOL hasCategory; // @synthesize hasCategory;
@property(nonatomic, setter=SetDistance:) float distance; // @synthesize distance;
@property(readonly, nonatomic) BOOL hasDistance; // @synthesize hasDistance;
@property(nonatomic, setter=SetCardFlag:) unsigned int cardFlag; // @synthesize cardFlag;
@property(readonly, nonatomic) BOOL hasCardFlag; // @synthesize hasCardFlag;
@property(retain, nonatomic, setter=SetSummary:) NSString *summary; // @synthesize summary;
@property(readonly, nonatomic) BOOL hasSummary; // @synthesize hasSummary;
@property(nonatomic, setter=SetNbsid:) unsigned int nbsid; // @synthesize nbsid;
@property(readonly, nonatomic) BOOL hasNbsid; // @synthesize hasNbsid;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

