//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMWAWebViewController, NSMutableDictionary;

@interface MMWebViewPluginScheduler : NSObject
{
    MMWAWebViewController *_ownerWebViewController;
    NSMutableDictionary *_pluginName2InstanceDic;
}

@property(readonly, nonatomic) NSMutableDictionary *pluginName2InstanceDic; // @synthesize pluginName2InstanceDic=_pluginName2InstanceDic;
@property(readonly, nonatomic) __weak MMWAWebViewController *ownerWebViewController; // @synthesize ownerWebViewController=_ownerWebViewController;
- (void).cxx_destruct;
- (void)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)GetPluginInstanceByName:(id)arg1;
- (void)loadingInitPluginArray;
- (void)dealloc;
- (id)initWithOwnerWebViewController:(id)arg1;

@end
