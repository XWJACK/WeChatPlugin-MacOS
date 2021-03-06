//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMCGIRequester, MMTimer, NSString;

@interface MMVoiceTranscribeCGI : NSObject
{
    unsigned int _totalLen;
    unsigned int _startPos;
    unsigned int _dataLen;
    unsigned int _getResultSeq;
    NSString *_voiceID;
    NSString *_voiceFilePath;
    CDUnknownBlockType _didUploadVoiceDataBlock;
    MMTimer *_timeChecker;
    NSString *_msgUniqueID;
    double _timerInterval;
    CDUnknownBlockType _didGetTranscribeResultBlock;
    MMCGIRequester *_requester;
}

@property(retain, nonatomic) MMCGIRequester *requester; // @synthesize requester=_requester;
@property(copy, nonatomic) CDUnknownBlockType didGetTranscribeResultBlock; // @synthesize didGetTranscribeResultBlock=_didGetTranscribeResultBlock;
@property(nonatomic) unsigned int getResultSeq; // @synthesize getResultSeq=_getResultSeq;
@property(nonatomic) double timerInterval; // @synthesize timerInterval=_timerInterval;
@property(retain, nonatomic) NSString *msgUniqueID; // @synthesize msgUniqueID=_msgUniqueID;
@property(retain, nonatomic) MMTimer *timeChecker; // @synthesize timeChecker=_timeChecker;
@property(copy, nonatomic) CDUnknownBlockType didUploadVoiceDataBlock; // @synthesize didUploadVoiceDataBlock=_didUploadVoiceDataBlock;
@property(nonatomic) unsigned int dataLen; // @synthesize dataLen=_dataLen;
@property(nonatomic) unsigned int startPos; // @synthesize startPos=_startPos;
@property(nonatomic) unsigned int totalLen; // @synthesize totalLen=_totalLen;
@property(retain, nonatomic) NSString *voiceFilePath; // @synthesize voiceFilePath=_voiceFilePath;
@property(retain, nonatomic) NSString *voiceID; // @synthesize voiceID=_voiceID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getVoiceTranscribeResultRecursively;
- (void)getTranscribeResultWithMsgUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uploadVoiceDataRecursivelyWithMessage:(id)arg1;
- (void)uploadVoiceMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)voiceAttrWithMessage:(id)arg1;
- (unsigned int)voiceFileLengthWithFile:(id)arg1;
- (id)voiceFilePathWithMessage:(id)arg1;
- (id)voiceIDWithMessage:(id)arg1;
- (void)stopTranscribe;
- (void)transcribeVoiceMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

