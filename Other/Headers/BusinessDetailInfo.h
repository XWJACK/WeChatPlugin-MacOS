//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface BusinessDetailInfo : PBGeneratedMessage
{
    unsigned int hasIconUrl:1;
    unsigned int hasDescrption:1;
    unsigned int hasDescFormat:1;
    NSString *iconUrl;
    NSString *descrption;
    NSString *descFormat;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetDescFormat:) NSString *descFormat; // @synthesize descFormat;
@property(readonly, nonatomic) BOOL hasDescFormat; // @synthesize hasDescFormat;
@property(retain, nonatomic, setter=SetDescrption:) NSString *descrption; // @synthesize descrption;
@property(readonly, nonatomic) BOOL hasDescrption; // @synthesize hasDescrption;
@property(retain, nonatomic, setter=SetIconUrl:) NSString *iconUrl; // @synthesize iconUrl;
@property(readonly, nonatomic) BOOL hasIconUrl; // @synthesize hasIconUrl;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
