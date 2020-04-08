//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface ReportRecommendWxaRequest_ClientInfo : PBGeneratedMessage
{
    unsigned int hasNetType:1;
    unsigned int hasLongitude:1;
    unsigned int hasLatitude:1;
    NSString *netType;
    double longitude;
    double latitude;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetLatitude:) double latitude; // @synthesize latitude;
@property(readonly, nonatomic) BOOL hasLatitude; // @synthesize hasLatitude;
@property(nonatomic, setter=SetLongitude:) double longitude; // @synthesize longitude;
@property(readonly, nonatomic) BOOL hasLongitude; // @synthesize hasLongitude;
@property(retain, nonatomic, setter=SetNetType:) NSString *netType; // @synthesize netType;
@property(readonly, nonatomic) BOOL hasNetType; // @synthesize hasNetType;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

