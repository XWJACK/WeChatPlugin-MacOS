//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WARemoteDebug_DomOp : PBGeneratedMessage
{
    unsigned int hasParams:1;
    unsigned int hasWebviewId:1;
    unsigned int webviewId;
    NSString *params;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetWebviewId:) unsigned int webviewId; // @synthesize webviewId;
@property(readonly, nonatomic) BOOL hasWebviewId; // @synthesize hasWebviewId;
@property(retain, nonatomic, setter=SetParams:) NSString *params; // @synthesize params;
@property(readonly, nonatomic) BOOL hasParams; // @synthesize hasParams;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
