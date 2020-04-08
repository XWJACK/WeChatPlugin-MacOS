//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface BizAuthRequest : PBGeneratedMessage
{
    unsigned int hasQquin:1;
    unsigned int hasPwd:1;
    unsigned int hasPwd2:1;
    unsigned int hasImgSid:1;
    unsigned int hasImgCode:1;
    unsigned int qquin;
    NSString *pwd;
    NSString *pwd2;
    NSString *imgSid;
    NSString *imgCode;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetImgCode:) NSString *imgCode; // @synthesize imgCode;
@property(readonly, nonatomic) BOOL hasImgCode; // @synthesize hasImgCode;
@property(retain, nonatomic, setter=SetImgSid:) NSString *imgSid; // @synthesize imgSid;
@property(readonly, nonatomic) BOOL hasImgSid; // @synthesize hasImgSid;
@property(retain, nonatomic, setter=SetPwd2:) NSString *pwd2; // @synthesize pwd2;
@property(readonly, nonatomic) BOOL hasPwd2; // @synthesize hasPwd2;
@property(retain, nonatomic, setter=SetPwd:) NSString *pwd; // @synthesize pwd;
@property(readonly, nonatomic) BOOL hasPwd; // @synthesize hasPwd;
@property(nonatomic, setter=SetQquin:) unsigned int qquin; // @synthesize qquin;
@property(readonly, nonatomic) BOOL hasQquin; // @synthesize hasQquin;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

