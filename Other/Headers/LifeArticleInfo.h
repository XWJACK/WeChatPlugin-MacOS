//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface LifeArticleInfo : PBGeneratedMessage
{
    unsigned int hasThumbUrl:1;
    unsigned int hasTitle:1;
    unsigned int hasDesc:1;
    unsigned int hasLink:1;
    NSString *thumbUrl;
    NSString *title;
    NSString *desc;
    NSString *link;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetLink:) NSString *link; // @synthesize link;
@property(readonly, nonatomic) BOOL hasLink; // @synthesize hasLink;
@property(retain, nonatomic, setter=SetDesc:) NSString *desc; // @synthesize desc;
@property(readonly, nonatomic) BOOL hasDesc; // @synthesize hasDesc;
@property(retain, nonatomic, setter=SetTitle:) NSString *title; // @synthesize title;
@property(readonly, nonatomic) BOOL hasTitle; // @synthesize hasTitle;
@property(retain, nonatomic, setter=SetThumbUrl:) NSString *thumbUrl; // @synthesize thumbUrl;
@property(readonly, nonatomic) BOOL hasThumbUrl; // @synthesize hasThumbUrl;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

