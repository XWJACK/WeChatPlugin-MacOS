//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WARemoteDebug_EvaluateJavascript : PBGeneratedMessage
{
    unsigned int hasScript:1;
    unsigned int hasEvaluateId:1;
    unsigned int evaluateId;
    NSString *script;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetEvaluateId:) unsigned int evaluateId; // @synthesize evaluateId;
@property(readonly, nonatomic) BOOL hasEvaluateId; // @synthesize hasEvaluateId;
@property(retain, nonatomic, setter=SetScript:) NSString *script; // @synthesize script;
@property(readonly, nonatomic) BOOL hasScript; // @synthesize hasScript;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

