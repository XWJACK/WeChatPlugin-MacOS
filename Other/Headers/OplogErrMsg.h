//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface OplogErrMsg : PBGeneratedMessage
{
    unsigned int hasContent:1;
    unsigned int hasTitle:1;
    NSString *content;
    NSString *title;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetTitle:) NSString *title; // @synthesize title;
@property(readonly, nonatomic) BOOL hasTitle; // @synthesize hasTitle;
@property(retain, nonatomic, setter=SetContent:) NSString *content; // @synthesize content;
@property(readonly, nonatomic) BOOL hasContent; // @synthesize hasContent;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

