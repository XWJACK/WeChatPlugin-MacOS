//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class MMTranslateResult, NSString;

@interface MessageDataPackedInfo : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL bForward;
    unsigned int m_uiSendTime;
    unsigned int m_uiDownloadStatus;
    unsigned int m_uiFileUploadStatus;
    unsigned int m_uiVoiceToTextStatus;
    unsigned int m_uiTranslateStatus;
    unsigned int m_uiOriginalImgHeight;
    unsigned int m_uiOriginalImgWidth;
    NSString *fromUsrName;
    NSString *toUsrName;
    NSString *msgRealChatUsr;
    NSString *msgPushContent;
    MMTranslateResult *m_nsTranslationResult;
    NSString *m_nsFilePath;
    NSString *m_nsVideoPath;
    NSString *m_nsVideoThumbPath;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
+ (void)_initPBTableOfMessageDataPackedInfo;
@property(nonatomic) unsigned int m_uiOriginalImgWidth; // @synthesize m_uiOriginalImgWidth;
@property(nonatomic) unsigned int m_uiOriginalImgHeight; // @synthesize m_uiOriginalImgHeight;
@property(retain, nonatomic) NSString *m_nsVideoThumbPath; // @synthesize m_nsVideoThumbPath;
@property(retain, nonatomic) NSString *m_nsVideoPath; // @synthesize m_nsVideoPath;
@property(nonatomic) unsigned int m_uiTranslateStatus; // @synthesize m_uiTranslateStatus;
@property(nonatomic) unsigned int m_uiVoiceToTextStatus; // @synthesize m_uiVoiceToTextStatus;
@property(nonatomic) unsigned int m_uiFileUploadStatus; // @synthesize m_uiFileUploadStatus;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) MMTranslateResult *m_nsTranslationResult; // @synthesize m_nsTranslationResult;
@property(nonatomic) unsigned int m_uiDownloadStatus; // @synthesize m_uiDownloadStatus;
@property(nonatomic) unsigned int m_uiSendTime; // @synthesize m_uiSendTime;
@property(retain, nonatomic) NSString *msgPushContent; // @synthesize msgPushContent;
@property(retain, nonatomic) NSString *msgRealChatUsr; // @synthesize msgRealChatUsr;
@property(nonatomic) BOOL bForward; // @synthesize bForward;
@property(retain, nonatomic) NSString *toUsrName; // @synthesize toUsrName;
@property(retain, nonatomic) NSString *fromUsrName; // @synthesize fromUsrName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)archivedWCTValue;
- (const map_24f1cf24 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
