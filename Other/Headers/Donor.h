//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface Donor : PBGeneratedMessage
{
    unsigned int hasTime:1;
    unsigned int hasUserName:1;
    unsigned int hasNickName:1;
    unsigned int hasDonateTitle:1;
    unsigned int hasDonateUrl:1;
    unsigned int time;
    NSString *userName;
    NSString *nickName;
    NSString *donateTitle;
    NSString *donateUrl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetDonateUrl:) NSString *donateUrl; // @synthesize donateUrl;
@property(readonly, nonatomic) BOOL hasDonateUrl; // @synthesize hasDonateUrl;
@property(retain, nonatomic, setter=SetDonateTitle:) NSString *donateTitle; // @synthesize donateTitle;
@property(readonly, nonatomic) BOOL hasDonateTitle; // @synthesize hasDonateTitle;
@property(retain, nonatomic, setter=SetNickName:) NSString *nickName; // @synthesize nickName;
@property(readonly, nonatomic) BOOL hasNickName; // @synthesize hasNickName;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(nonatomic, setter=SetTime:) unsigned int time; // @synthesize time;
@property(readonly, nonatomic) BOOL hasTime; // @synthesize hasTime;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

