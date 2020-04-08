//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface DelayInfo : PBGeneratedMessage
{
    unsigned int hasLayerid:1;
    unsigned int hasExpid:1;
    unsigned int hasInfo:1;
    unsigned int layerid;
    unsigned int expid;
    NSString *info;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetInfo:) NSString *info; // @synthesize info;
@property(readonly, nonatomic) BOOL hasInfo; // @synthesize hasInfo;
@property(nonatomic, setter=SetExpid:) unsigned int expid; // @synthesize expid;
@property(readonly, nonatomic) BOOL hasExpid; // @synthesize hasExpid;
@property(nonatomic, setter=SetLayerid:) unsigned int layerid; // @synthesize layerid;
@property(readonly, nonatomic) BOOL hasLayerid; // @synthesize hasLayerid;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

