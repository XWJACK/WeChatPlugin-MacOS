//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@interface PackagePreprocess : PBGeneratedMessage
{
    unsigned int hasCompress:1;
    unsigned int hasEncrypt:1;
    int compress;
    int encrypt;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetEncrypt:) int encrypt; // @synthesize encrypt;
@property(readonly, nonatomic) BOOL hasEncrypt; // @synthesize hasEncrypt;
@property(nonatomic, setter=SetCompress:) int compress; // @synthesize compress;
@property(readonly, nonatomic) BOOL hasCompress; // @synthesize hasCompress;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

