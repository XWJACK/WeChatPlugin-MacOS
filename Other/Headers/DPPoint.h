//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface DPPoint : PBGeneratedMessage
{
    unsigned int hasX:1;
    unsigned int hasY:1;
    int x;
    int y;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetY:) int y; // @synthesize y;
@property(readonly, nonatomic) BOOL hasY; // @synthesize hasY;
@property(nonatomic, setter=SetX:) int x; // @synthesize x;
@property(readonly, nonatomic) BOOL hasX; // @synthesize hasX;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

