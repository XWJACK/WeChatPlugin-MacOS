//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMessageDataExt-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"

@class MessageData, NSString;

@interface CExtendInfoOfEmoticon : NSObject <IMessageDataExt, IMsgExtendOperation, NSCopying>
{
    unsigned int _m_uiEmoticonType;
    unsigned int _m_uiGameType;
    unsigned int _m_uiGameContent;
    unsigned int _m_uiUploadStatus;
    MessageData *m_refMessageData;
    NSString *_m_nsEmoticonMD5;
    NSString *_m_nsEmoticonBelongToProductID;
    NSString *_m_tpUrlString;
    NSString *_m_authKey;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@property(copy, nonatomic) NSString *m_authKey; // @synthesize m_authKey=_m_authKey;
@property(copy, nonatomic) NSString *m_tpUrlString; // @synthesize m_tpUrlString=_m_tpUrlString;
@property(copy, nonatomic) NSString *m_nsEmoticonBelongToProductID; // @synthesize m_nsEmoticonBelongToProductID=_m_nsEmoticonBelongToProductID;
@property(nonatomic) unsigned int m_uiUploadStatus; // @synthesize m_uiUploadStatus=_m_uiUploadStatus;
@property(nonatomic) unsigned int m_uiGameContent; // @synthesize m_uiGameContent=_m_uiGameContent;
@property(nonatomic) unsigned int m_uiGameType; // @synthesize m_uiGameType=_m_uiGameType;
@property(nonatomic) unsigned int m_uiEmoticonType; // @synthesize m_uiEmoticonType=_m_uiEmoticonType;
@property(copy, nonatomic) NSString *m_nsEmoticonMD5; // @synthesize m_nsEmoticonMD5=_m_nsEmoticonMD5;
@property(nonatomic) __weak MessageData *m_refMessageData; // @synthesize m_refMessageData;
- (void).cxx_destruct;
- (BOOL)isEmotionExist;
- (id)filePath;
@property(readonly, copy) NSString *description;
- (void)UpdateGameInfo:(id)arg1;
- (id)GetGameStatReportString;
- (void)encodeMsgFieldToXML:(id)arg1;
- (id)getContent;
- (void)parseMsgFieldFromXML;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

