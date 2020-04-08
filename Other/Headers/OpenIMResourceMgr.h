//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AccountServiceExt-Protocol.h"
#import "MMCGIDelegate-Protocol.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface OpenIMResourceMgr : NSObject <MMCGIDelegate, AccountServiceExt>
{
    NSMutableDictionary *_m_Resource;
    NSMutableDictionary *_m_TypeResource;
    NSMutableDictionary *_m_lastUpdateTime;
    NSRecursiveLock *_m_lock;
}

+ (id)textParagrapStyle:(id)arg1;
+ (id)sharedInstance;
+ (void)updateOpenIMResource:(id)arg1;
+ (void)fillToCContact:(id)arg1 fromChatRoomMember:(id)arg2 isSimplify:(BOOL)arg3;
+ (id)convertChatRoomMemberToCContact:(id)arg1 isSimplify:(BOOL)arg2;
+ (void)genOpenIMChatRoomMemberContact:(id)arg1 dicGroupMember:(id)arg2;
+ (void)fillToCContact:(id)arg1 fromChatRoomContact:(id)arg2;
+ (id)convertChatRoomContactToCContact:(id)arg1;
+ (id)convertToWCContact:(id)arg1;
+ (id)getWordingIDFromWCContact:(id)arg1;
+ (id)pathWithType;
+ (id)pathWithAppId:(id)arg1;
+ (id)rootPath;
@property(retain, nonatomic) NSRecursiveLock *m_lock; // @synthesize m_lock=_m_lock;
@property(retain, nonatomic) NSMutableDictionary *m_lastUpdateTime; // @synthesize m_lastUpdateTime=_m_lastUpdateTime;
@property(retain, nonatomic) NSMutableDictionary *m_TypeResource; // @synthesize m_TypeResource=_m_TypeResource;
@property(retain, nonatomic) NSMutableDictionary *m_Resource; // @synthesize m_Resource=_m_Resource;
- (void).cxx_destruct;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (BOOL)doOpenIMResourceRequest:(id)arg1 wordings:(id)arg2 isCheckTime:(BOOL)arg3;
- (BOOL)updateOpenIMResource:(id)arg1 wordings:(id)arg2;
- (BOOL)checkOpenIMResource:(id)arg1 wordings:(id)arg2 checkTime:(BOOL)arg3;
- (BOOL)isValid:(id)arg1 isCheckTime:(BOOL)arg2;
- (id)openIMCompanyAttributeString:(id)arg1 withFont:(id)arg2;
- (id)openIMCompanyAttributeString:(id)arg1;
- (id)openIMCompanyName:(id)arg1;
- (id)openIMWordingShortPY:(id)arg1 Appid:(id)arg2;
- (id)openIMWordingQuanPin:(id)arg1 Appid:(id)arg2;
- (id)openIMWording:(id)arg1 Appid:(id)arg2;
- (id)openIMContactListIconUrl:(id)arg1;
- (id)openIMContactListName:(id)arg1;
- (id)openIMCardName:(id)arg1;
- (id)openIMDescIconUrl:(id)arg1;
- (id)openIMIntroURL:(id)arg1;
- (id)openIMCustomHeader:(id)arg1;
- (id)openIMName:(id)arg1;
- (id)openIMFuncTip:(id)arg1;
- (id)openIMAcctType:(id)arg1;
- (unsigned int)openIMFuncFlag:(id)arg1;
- (id)openIMIconUrl:(id)arg1;
- (void)setOpenIMIconUrl:(id)arg1 withImage:(id)arg2;
- (void)updateOpenIMResourceFromServer:(id)arg1 response:(id)arg2;
- (void)saveOpenIMResource:(id)arg1 Appid:(id)arg2;
- (id)doLoadOpenIMResource:(id)arg1;
- (void)saveOpenIMTypeResource;
- (id)doLoadOpenIMTypeResource:(id)arg1;
- (void)onUserLogout;
- (void)dealloc;
- (void)destroy;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

