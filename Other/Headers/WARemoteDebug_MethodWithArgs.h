//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface WARemoteDebug_MethodWithArgs : PBGeneratedMessage
{
    unsigned int hasMethodName:1;
    NSString *methodName;
    NSMutableArray *mutableMethodArgListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableMethodArgListList; // @synthesize mutableMethodArgListList;
@property(retain, nonatomic, setter=SetMethodName:) NSString *methodName; // @synthesize methodName;
@property(readonly, nonatomic) BOOL hasMethodName; // @synthesize hasMethodName;
- (void).cxx_destruct;
- (void)addMethodArgListFromArray:(id)arg1;
- (void)addMethodArgList:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *methodArgList; // @dynamic methodArgList;
- (id)methodArgListList;
- (id)init;

@end

