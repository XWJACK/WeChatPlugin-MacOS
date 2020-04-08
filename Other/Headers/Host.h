//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface Host : PBGeneratedMessage
{
    unsigned int hasOrigin:1;
    unsigned int hasSubstitute:1;
    unsigned int hasPriority:1;
    int priority;
    NSString *origin;
    NSString *substitute;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetPriority:) int priority; // @synthesize priority;
@property(readonly, nonatomic) BOOL hasPriority; // @synthesize hasPriority;
@property(retain, nonatomic, setter=SetSubstitute:) NSString *substitute; // @synthesize substitute;
@property(readonly, nonatomic) BOOL hasSubstitute; // @synthesize hasSubstitute;
@property(retain, nonatomic, setter=SetOrigin:) NSString *origin; // @synthesize origin;
@property(readonly, nonatomic) BOOL hasOrigin; // @synthesize hasOrigin;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

