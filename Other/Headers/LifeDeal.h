//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface LifeDeal : PBGeneratedMessage
{
    unsigned int hasId:1;
    NSString *id_;
    unsigned int hasTitle:1;
    unsigned int hasUrl:1;
    unsigned int hasListPrice:1;
    unsigned int hasCurrentPrice:1;
    unsigned int hasPhotoUrl:1;
    float listPrice;
    float currentPrice;
    NSString *title;
    NSString *url;
    NSString *photoUrl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetPhotoUrl:) NSString *photoUrl; // @synthesize photoUrl;
@property(readonly, nonatomic) BOOL hasPhotoUrl; // @synthesize hasPhotoUrl;
@property(nonatomic, setter=SetCurrentPrice:) float currentPrice; // @synthesize currentPrice;
@property(readonly, nonatomic) BOOL hasCurrentPrice; // @synthesize hasCurrentPrice;
@property(nonatomic, setter=SetListPrice:) float listPrice; // @synthesize listPrice;
@property(readonly, nonatomic) BOOL hasListPrice; // @synthesize hasListPrice;
@property(retain, nonatomic, setter=SetUrl:) NSString *url; // @synthesize url;
@property(readonly, nonatomic) BOOL hasUrl; // @synthesize hasUrl;
@property(retain, nonatomic, setter=SetTitle:) NSString *title; // @synthesize title;
@property(readonly, nonatomic) BOOL hasTitle; // @synthesize hasTitle;
@property(retain, nonatomic, setter=SetId:) NSString *id; // @synthesize id=id_;
@property(readonly, nonatomic) BOOL hasId; // @synthesize hasId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

