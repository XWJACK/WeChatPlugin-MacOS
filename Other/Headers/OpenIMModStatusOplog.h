//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface OpenIMModStatusOplog : PBGeneratedMessage
{
    unsigned int hasFunctionType:1;
    unsigned int hasSwitchFlag:1;
    unsigned int functionType;
    unsigned int switchFlag;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetSwitchFlag:) unsigned int switchFlag; // @synthesize switchFlag;
@property(readonly, nonatomic) BOOL hasSwitchFlag; // @synthesize hasSwitchFlag;
@property(nonatomic, setter=SetFunctionType:) unsigned int functionType; // @synthesize functionType;
@property(readonly, nonatomic) BOOL hasFunctionType; // @synthesize hasFunctionType;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

