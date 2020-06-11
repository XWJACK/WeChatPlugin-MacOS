//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSWindowDelegate-Protocol.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface GSPreferences : NSObject <NSWindowDelegate>
{
    NSMutableDictionary *_prefsDict;
    NSNumber *yesNumber;
    NSNumber *noNumber;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *prefsDict; // @synthesize prefsDict=_prefsDict;
- (void).cxx_destruct;
- (void)windowWillClose:(id)arg1;
- (int)modeForBattery;
- (int)modeForACAdapter;
- (BOOL)shouldUseSmartMenuBarIcons;
- (BOOL)shouldUseImageIcons;
- (BOOL)shouldUsePowerSourceBasedSwitching;
- (BOOL)shouldDisplayNotifications;
- (BOOL)shouldStartAtLogin;
- (BOOL)shouldCheckForUpdatesOnStartup;
- (BOOL)boolForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)savePreferences;
- (void)setDefaults;
- (void)setUpPreferences;
- (id)init;
- (id)_getPrefsPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

