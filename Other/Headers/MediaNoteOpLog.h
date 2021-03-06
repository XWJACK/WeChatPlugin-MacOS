//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface MediaNoteOpLog : PBGeneratedMessage
{
    unsigned int hasWriteCount:1;
    unsigned int hasNoteType:1;
    unsigned int writeCount;
    int noteType;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetNoteType:) int noteType; // @synthesize noteType;
@property(readonly, nonatomic) BOOL hasNoteType; // @synthesize hasNoteType;
@property(nonatomic, setter=SetWriteCount:) unsigned int writeCount; // @synthesize writeCount;
@property(readonly, nonatomic) BOOL hasWriteCount; // @synthesize hasWriteCount;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

