//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSData, NSString;

@interface UxLifeEventCommentReq : PBGeneratedMessage
{
    unsigned int hasEventid:1;
    unsigned int hasCommenttype:1;
    unsigned int hasClientid:1;
    unsigned int hasContent:1;
    unsigned int hasCommentid:1;
    unsigned int commenttype;
    unsigned int commentid;
    NSString *eventid;
    NSString *clientid;
    NSData *content;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetCommentid:) unsigned int commentid; // @synthesize commentid;
@property(readonly, nonatomic) BOOL hasCommentid; // @synthesize hasCommentid;
@property(retain, nonatomic, setter=SetContent:) NSData *content; // @synthesize content;
@property(readonly, nonatomic) BOOL hasContent; // @synthesize hasContent;
@property(retain, nonatomic, setter=SetClientid:) NSString *clientid; // @synthesize clientid;
@property(readonly, nonatomic) BOOL hasClientid; // @synthesize hasClientid;
@property(nonatomic, setter=SetCommenttype:) unsigned int commenttype; // @synthesize commenttype;
@property(readonly, nonatomic) BOOL hasCommenttype; // @synthesize hasCommenttype;
@property(retain, nonatomic, setter=SetEventid:) NSString *eventid; // @synthesize eventid;
@property(readonly, nonatomic) BOOL hasEventid; // @synthesize hasEventid;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

