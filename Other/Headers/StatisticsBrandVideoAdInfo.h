//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface StatisticsBrandVideoAdInfo : PBGeneratedMessage
{
    unsigned int hasJsReportArgs:1;
    NSString *jsReportArgs;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetJsReportArgs:) NSString *jsReportArgs; // @synthesize jsReportArgs;
@property(readonly, nonatomic) BOOL hasJsReportArgs; // @synthesize hasJsReportArgs;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
