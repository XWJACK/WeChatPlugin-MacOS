//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface GetWidgetAppVersionInfoResp_AppInfo : PBGeneratedMessage
{
    unsigned int hasAppid:1;
    unsigned int hasAppVersion:1;
    unsigned int hasSearchwidgetversionmd5:1;
    unsigned int hasDownloadurl:1;
    unsigned int appVersion;
    NSString *appid;
    NSString *searchwidgetversionmd5;
    NSString *downloadurl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetDownloadurl:) NSString *downloadurl; // @synthesize downloadurl;
@property(readonly, nonatomic) BOOL hasDownloadurl; // @synthesize hasDownloadurl;
@property(retain, nonatomic, setter=SetSearchwidgetversionmd5:) NSString *searchwidgetversionmd5; // @synthesize searchwidgetversionmd5;
@property(readonly, nonatomic) BOOL hasSearchwidgetversionmd5; // @synthesize hasSearchwidgetversionmd5;
@property(nonatomic, setter=SetAppVersion:) unsigned int appVersion; // @synthesize appVersion;
@property(readonly, nonatomic) BOOL hasAppVersion; // @synthesize hasAppVersion;
@property(retain, nonatomic, setter=SetAppid:) NSString *appid; // @synthesize appid;
@property(readonly, nonatomic) BOOL hasAppid; // @synthesize hasAppid;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

