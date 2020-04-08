//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface VOIPRecentConnect : NSObject
{
    NSMutableArray *m_videoRecentConnectUserName;
    NSMutableArray *m_voiceRecentConnectUserName;
}

+ (id)loadFromFile;
+ (id)getSavePath;
+ (id)getSaveRootDir;
@property(retain, nonatomic) NSMutableArray *m_voiceRecentConnectUserName; // @synthesize m_voiceRecentConnectUserName;
@property(retain, nonatomic) NSMutableArray *m_videoRecentConnectUserName; // @synthesize m_videoRecentConnectUserName;
- (void).cxx_destruct;
- (void)saveToCache;
- (void)dealloc;
- (void)addRecentVoiceConnect:(id)arg1;
- (void)addRecentVideoConnect:(id)arg1;
- (id)getRecentVoiceContact;
- (id)getRecentVideoConnect;
- (id)init;

@end

