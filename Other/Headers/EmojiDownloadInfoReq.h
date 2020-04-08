//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface EmojiDownloadInfoReq : PBGeneratedMessage
{
    unsigned int hasId:1;
    NSString *id_;
    unsigned int hasStartPos:1;
    unsigned int hasTotalLen:1;
    unsigned int hasMd5:1;
    int startPos;
    int totalLen;
    NSString *md5;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetMd5:) NSString *md5; // @synthesize md5;
@property(readonly, nonatomic) BOOL hasMd5; // @synthesize hasMd5;
@property(nonatomic, setter=SetTotalLen:) int totalLen; // @synthesize totalLen;
@property(readonly, nonatomic) BOOL hasTotalLen; // @synthesize hasTotalLen;
@property(nonatomic, setter=SetStartPos:) int startPos; // @synthesize startPos;
@property(readonly, nonatomic) BOOL hasStartPos; // @synthesize hasStartPos;
@property(retain, nonatomic, setter=SetId:) NSString *id; // @synthesize id=id_;
@property(readonly, nonatomic) BOOL hasId; // @synthesize hasId;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

