//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

@protocol IReportMiniProgramDelegate;

@interface WAJSContextPlugin_reportData : WAJSContextPluginBase
{
    id <IReportMiniProgramDelegate> _webDelegate;
    id <IReportMiniProgramDelegate> _weappDelegate;
}

@property(nonatomic) __weak id <IReportMiniProgramDelegate> weappDelegate; // @synthesize weappDelegate=_weappDelegate;
@property(nonatomic) __weak id <IReportMiniProgramDelegate> webDelegate; // @synthesize webDelegate=_webDelegate;
- (void).cxx_destruct;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)getMiniProgramReportId;
- (void)reportMiniProgramPageData:(id)arg1 pageRoute:(id)arg2 isUserReport:(BOOL)arg3;

@end

