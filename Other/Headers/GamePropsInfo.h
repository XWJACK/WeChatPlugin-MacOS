//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface GamePropsInfo : PBGeneratedMessage
{
    unsigned int hasPropsId:1;
    unsigned int hasIconUrl:1;
    unsigned int hasName:1;
    unsigned int hasDesc:1;
    unsigned int hasType:1;
    unsigned int propsId;
    unsigned int type;
    NSString *iconUrl;
    NSString *name;
    NSString *desc;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetDesc:) NSString *desc; // @synthesize desc;
@property(readonly, nonatomic) BOOL hasDesc; // @synthesize hasDesc;
@property(retain, nonatomic, setter=SetName:) NSString *name; // @synthesize name;
@property(readonly, nonatomic) BOOL hasName; // @synthesize hasName;
@property(retain, nonatomic, setter=SetIconUrl:) NSString *iconUrl; // @synthesize iconUrl;
@property(readonly, nonatomic) BOOL hasIconUrl; // @synthesize hasIconUrl;
@property(nonatomic, setter=SetPropsId:) unsigned int propsId; // @synthesize propsId;
@property(readonly, nonatomic) BOOL hasPropsId; // @synthesize hasPropsId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

