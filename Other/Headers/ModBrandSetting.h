//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ModBrandSetting : PBGeneratedMessage
{
    unsigned int hasBrandFlag:1;
    unsigned int hasUserName:1;
    unsigned int brandFlag;
    NSString *userName;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
@property(nonatomic, setter=SetBrandFlag:) unsigned int brandFlag; // @synthesize brandFlag;
@property(readonly, nonatomic) BOOL hasBrandFlag; // @synthesize hasBrandFlag;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

