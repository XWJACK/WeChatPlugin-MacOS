//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class MessageDeletionPackedInfo;

@interface MessageDeletion : NSObject <WCTTableCoding>
{
    unsigned int mesAutoID;
    long long mesSvrID;
    unsigned int msgCreateTime;
    unsigned int msgSeq;
    unsigned int deletionType;
    BOOL isAutoIncrement;
    long long lastInsertedRowID;
    MessageDeletionPackedInfo *_m_packedInfo;
}

+ (const struct WCTProperty *)m_packedInfo;
+ (const struct WCTProperty *)deletionType;
+ (const struct WCTProperty *)msgSeq;
+ (const struct WCTProperty *)msgCreateTime;
+ (const struct WCTProperty *)mesSvrID;
+ (const struct WCTProperty *)mesAutoID;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) MessageDeletionPackedInfo *m_packedInfo; // @synthesize m_packedInfo=_m_packedInfo;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) unsigned int deletionType; // @synthesize deletionType;
@property(nonatomic) unsigned int msgSeq; // @synthesize msgSeq;
@property(nonatomic) unsigned int msgCreateTime; // @synthesize msgCreateTime;
@property(nonatomic) long long mesSvrID; // @synthesize mesSvrID;
@property(nonatomic) unsigned int mesAutoID; // @synthesize mesAutoID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDeletionType:(unsigned int)arg1 msgData:(id)arg2;

@end

