//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ModFavObject : PBGeneratedMessage
{
    unsigned int hasTagName:1;
    unsigned int hasAttrName:1;
    unsigned int hasValue:1;
    NSString *value_;
    unsigned int hasType:1;
    unsigned int type;
    NSString *tagName;
    NSString *attrName;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetValue:) NSString *value; // @synthesize value=value_;
@property(readonly, nonatomic) BOOL hasValue; // @synthesize hasValue;
@property(retain, nonatomic, setter=SetAttrName:) NSString *attrName; // @synthesize attrName;
@property(readonly, nonatomic) BOOL hasAttrName; // @synthesize hasAttrName;
@property(retain, nonatomic, setter=SetTagName:) NSString *tagName; // @synthesize tagName;
@property(readonly, nonatomic) BOOL hasTagName; // @synthesize hasTagName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

