//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface CustomizedInfoNew : PBGeneratedMessage
{
    unsigned int hasBrandFlag:1;
    unsigned int hasExternalInfo:1;
    unsigned int hasBrandInfo:1;
    unsigned int hasBrandIconUrl:1;
    unsigned int brandFlag;
    NSString *externalInfo;
    NSString *brandInfo;
    NSString *brandIconUrl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetBrandIconUrl:) NSString *brandIconUrl; // @synthesize brandIconUrl;
@property(readonly, nonatomic) BOOL hasBrandIconUrl; // @synthesize hasBrandIconUrl;
@property(retain, nonatomic, setter=SetBrandInfo:) NSString *brandInfo; // @synthesize brandInfo;
@property(readonly, nonatomic) BOOL hasBrandInfo; // @synthesize hasBrandInfo;
@property(retain, nonatomic, setter=SetExternalInfo:) NSString *externalInfo; // @synthesize externalInfo;
@property(readonly, nonatomic) BOOL hasExternalInfo; // @synthesize hasExternalInfo;
@property(nonatomic, setter=SetBrandFlag:) unsigned int brandFlag; // @synthesize brandFlag;
@property(readonly, nonatomic) BOOL hasBrandFlag; // @synthesize hasBrandFlag;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

