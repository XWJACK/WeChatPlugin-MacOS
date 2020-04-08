//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface RepeatUrlOperRequest : PBGeneratedMessage
{
    unsigned int hasOpertype:1;
    unsigned int hasDocid:1;
    unsigned int hasObjectid:1;
    unsigned int hasShareusername:1;
    unsigned int hasExposuretimes:1;
    unsigned int hasLikenum:1;
    unsigned int hasCommentnum:1;
    unsigned int hasHaswords:1;
    unsigned int hasIsshowmenu:1;
    unsigned int opertype;
    unsigned int exposuretimes;
    unsigned int likenum;
    unsigned int commentnum;
    unsigned int haswords;
    unsigned int isshowmenu;
    NSString *docid;
    unsigned long long objectid;
    NSString *shareusername;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetIsshowmenu:) unsigned int isshowmenu; // @synthesize isshowmenu;
@property(readonly, nonatomic) BOOL hasIsshowmenu; // @synthesize hasIsshowmenu;
@property(nonatomic, setter=SetHaswords:) unsigned int haswords; // @synthesize haswords;
@property(readonly, nonatomic) BOOL hasHaswords; // @synthesize hasHaswords;
@property(nonatomic, setter=SetCommentnum:) unsigned int commentnum; // @synthesize commentnum;
@property(readonly, nonatomic) BOOL hasCommentnum; // @synthesize hasCommentnum;
@property(nonatomic, setter=SetLikenum:) unsigned int likenum; // @synthesize likenum;
@property(readonly, nonatomic) BOOL hasLikenum; // @synthesize hasLikenum;
@property(nonatomic, setter=SetExposuretimes:) unsigned int exposuretimes; // @synthesize exposuretimes;
@property(readonly, nonatomic) BOOL hasExposuretimes; // @synthesize hasExposuretimes;
@property(retain, nonatomic, setter=SetShareusername:) NSString *shareusername; // @synthesize shareusername;
@property(readonly, nonatomic) BOOL hasShareusername; // @synthesize hasShareusername;
@property(nonatomic, setter=SetObjectid:) unsigned long long objectid; // @synthesize objectid;
@property(readonly, nonatomic) BOOL hasObjectid; // @synthesize hasObjectid;
@property(retain, nonatomic, setter=SetDocid:) NSString *docid; // @synthesize docid;
@property(readonly, nonatomic) BOOL hasDocid; // @synthesize hasDocid;
@property(nonatomic, setter=SetOpertype:) unsigned int opertype; // @synthesize opertype;
@property(readonly, nonatomic) BOOL hasOpertype; // @synthesize hasOpertype;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

