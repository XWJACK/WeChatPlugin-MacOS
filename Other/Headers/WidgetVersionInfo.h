//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface WidgetVersionInfo : PBGeneratedMessage
{
    unsigned int hasAppVersion:1;
    unsigned int hasWidgetVersionMd5:1;
    unsigned int hasSearchWidgetVersionMd5:1;
    unsigned int appVersion;
    NSString *widgetVersionMd5;
    NSString *searchWidgetVersionMd5;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetSearchWidgetVersionMd5:) NSString *searchWidgetVersionMd5; // @synthesize searchWidgetVersionMd5;
@property(readonly, nonatomic) BOOL hasSearchWidgetVersionMd5; // @synthesize hasSearchWidgetVersionMd5;
@property(retain, nonatomic, setter=SetWidgetVersionMd5:) NSString *widgetVersionMd5; // @synthesize widgetVersionMd5;
@property(readonly, nonatomic) BOOL hasWidgetVersionMd5; // @synthesize hasWidgetVersionMd5;
@property(nonatomic, setter=SetAppVersion:) unsigned int appVersion; // @synthesize appVersion;
@property(readonly, nonatomic) BOOL hasAppVersion; // @synthesize hasAppVersion;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
