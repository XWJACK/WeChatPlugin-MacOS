//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface OpenIMContactClassifyInfo : NSObject <NSCopying>
{
    NSString *_openIMWordingId;
    NSString *_openIMAppid;
    NSString *_openIMDesc;
    NSString *_openimDescQuanPin;
}

@property(retain, nonatomic) NSString *openimDescQuanPin; // @synthesize openimDescQuanPin=_openimDescQuanPin;
@property(retain, nonatomic) NSString *openIMDesc; // @synthesize openIMDesc=_openIMDesc;
@property(retain, nonatomic) NSString *openIMAppid; // @synthesize openIMAppid=_openIMAppid;
@property(retain, nonatomic) NSString *openIMWordingId; // @synthesize openIMWordingId=_openIMWordingId;
- (void).cxx_destruct;
- (BOOL)isEqualContactClassify:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithOpenIMDescId:(id)arg1 andOpenIMAppid:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

