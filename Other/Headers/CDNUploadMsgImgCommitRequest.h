//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface CDNUploadMsgImgCommitRequest : PBGeneratedMessage
{
    unsigned int hasTicket:1;
    unsigned int hasImgUrl:1;
    unsigned int hasAeskey:1;
    unsigned int hasEncryVer:1;
    unsigned int hasMidSize:1;
    unsigned int hasThumbSize:1;
    unsigned int hasBigSize:1;
    unsigned int hasMd5Sum:1;
    unsigned int hasSafeProto:1;
    unsigned int hasHit:1;
    unsigned int hasFileInfo:1;
    int encryVer;
    int midSize;
    int thumbSize;
    int bigSize;
    int safeProto;
    int hit;
    NSString *ticket;
    NSString *imgUrl;
    NSString *aeskey;
    NSString *md5Sum;
    NSString *fileInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetFileInfo:) NSString *fileInfo; // @synthesize fileInfo;
@property(readonly, nonatomic) BOOL hasFileInfo; // @synthesize hasFileInfo;
@property(nonatomic, setter=SetHit:) int hit; // @synthesize hit;
@property(readonly, nonatomic) BOOL hasHit; // @synthesize hasHit;
@property(nonatomic, setter=SetSafeProto:) int safeProto; // @synthesize safeProto;
@property(readonly, nonatomic) BOOL hasSafeProto; // @synthesize hasSafeProto;
@property(retain, nonatomic, setter=SetMd5Sum:) NSString *md5Sum; // @synthesize md5Sum;
@property(readonly, nonatomic) BOOL hasMd5Sum; // @synthesize hasMd5Sum;
@property(nonatomic, setter=SetBigSize:) int bigSize; // @synthesize bigSize;
@property(readonly, nonatomic) BOOL hasBigSize; // @synthesize hasBigSize;
@property(nonatomic, setter=SetThumbSize:) int thumbSize; // @synthesize thumbSize;
@property(readonly, nonatomic) BOOL hasThumbSize; // @synthesize hasThumbSize;
@property(nonatomic, setter=SetMidSize:) int midSize; // @synthesize midSize;
@property(readonly, nonatomic) BOOL hasMidSize; // @synthesize hasMidSize;
@property(nonatomic, setter=SetEncryVer:) int encryVer; // @synthesize encryVer;
@property(readonly, nonatomic) BOOL hasEncryVer; // @synthesize hasEncryVer;
@property(retain, nonatomic, setter=SetAeskey:) NSString *aeskey; // @synthesize aeskey;
@property(readonly, nonatomic) BOOL hasAeskey; // @synthesize hasAeskey;
@property(retain, nonatomic, setter=SetImgUrl:) NSString *imgUrl; // @synthesize imgUrl;
@property(readonly, nonatomic) BOOL hasImgUrl; // @synthesize hasImgUrl;
@property(retain, nonatomic, setter=SetTicket:) NSString *ticket; // @synthesize ticket;
@property(readonly, nonatomic) BOOL hasTicket; // @synthesize hasTicket;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

