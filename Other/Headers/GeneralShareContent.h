//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface GeneralShareContent : PBGeneratedMessage
{
    unsigned int hasContentType:1;
    unsigned int hasTitle:1;
    unsigned int hasContent:1;
    unsigned int hasDescription:1;
    unsigned int hasImageUrl:1;
    unsigned int hasLinkUrl:1;
    unsigned int hasDataUrl:1;
    unsigned int hasExtInfo:1;
    unsigned int contentType;
    NSString *title;
    NSString *content;
    NSString *description;
    NSString *imageUrl;
    NSString *linkUrl;
    NSString *dataUrl;
    NSString *extInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetExtInfo:) NSString *extInfo; // @synthesize extInfo;
@property(readonly, nonatomic) BOOL hasExtInfo; // @synthesize hasExtInfo;
@property(retain, nonatomic, setter=SetDataUrl:) NSString *dataUrl; // @synthesize dataUrl;
@property(readonly, nonatomic) BOOL hasDataUrl; // @synthesize hasDataUrl;
@property(retain, nonatomic, setter=SetLinkUrl:) NSString *linkUrl; // @synthesize linkUrl;
@property(readonly, nonatomic) BOOL hasLinkUrl; // @synthesize hasLinkUrl;
@property(retain, nonatomic, setter=SetImageUrl:) NSString *imageUrl; // @synthesize imageUrl;
@property(readonly, nonatomic) BOOL hasImageUrl; // @synthesize hasImageUrl;
@property(retain, nonatomic, setter=SetDescription:) NSString *description; // @synthesize description;
@property(readonly, nonatomic) BOOL hasDescription; // @synthesize hasDescription;
@property(retain, nonatomic, setter=SetContent:) NSString *content; // @synthesize content;
@property(readonly, nonatomic) BOOL hasContent; // @synthesize hasContent;
@property(retain, nonatomic, setter=SetTitle:) NSString *title; // @synthesize title;
@property(readonly, nonatomic) BOOL hasTitle; // @synthesize hasTitle;
@property(nonatomic, setter=SetContentType:) unsigned int contentType; // @synthesize contentType;
@property(readonly, nonatomic) BOOL hasContentType; // @synthesize hasContentType;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

