//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface LangDesc : PBGeneratedMessage
{
    unsigned int hasLang:1;
    unsigned int hasDesc:1;
    NSString *lang;
    NSString *desc;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetDesc:) NSString *desc; // @synthesize desc;
@property(readonly, nonatomic) BOOL hasDesc; // @synthesize hasDesc;
@property(retain, nonatomic, setter=SetLang:) NSString *lang; // @synthesize lang;
@property(readonly, nonatomic) BOOL hasLang; // @synthesize hasLang;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

