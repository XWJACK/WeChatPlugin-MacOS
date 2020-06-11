//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMCGIDelegate-Protocol.h"
#import "MMNetExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSDate, NSString;

@interface CdnComMgr : MMService <MMNetExt, MMCGIDelegate, MMService>
{
    struct CdnCallback *m_pCallback;
    unsigned int m_uiGetCdnDnsInfoEventID;
    unsigned int m_uiGetCdnCount;
    NSDate *m_tGetCdn;
    NSString *m_nsCdnIpList;
    BOOL m_hasClearData;
    BOOL m_bHasGetCdnDns;
    BOOL m_bUseSafeCdn;
    BOOL m_bInitCdnCom;
}

+ (struct Config)GetWxConfig;
+ (id)GetCdnRootPath;
@property(retain, nonatomic) NSDate *m_tGetCdn; // @synthesize m_tGetCdn;
- (void).cxx_destruct;
- (void)setUseSafeCdn:(BOOL)arg1;
- (BOOL)useSafeCdn;
- (void)onServiceClearData;
- (void)onServiceInit;
- (id)genarateResAesKey;
- (unsigned int)calcFileCrc32WithFilePath:(id)arg1;
- (id)calcFileMd5WithFilePath:(id)arg1;
- (int)startDownloadTpDataFile:(struct C2CDownloadRequest)arg1 andTpUrl:(id)arg2 andAuthkey:(id)arg3 andDownloadMode:(int)arg4;
- (BOOL)StartDownloadTpDataFile:(struct C2CDownloadRequest)arg1 andTpUrl:(id)arg2 andAuthkey:(id)arg3;
- (void)StopUploadRecordMedia:(id)arg1;
- (BOOL)StartUploadRecordMedia:(id)arg1 enableHitCheck:(BOOL)arg2;
- (BOOL)CheckAppAttachExist:(id)arg1 IsLargeFile:(BOOL)arg2;
- (void)CheckCdnInfo;
- (void)OnResponseCGI:(BOOL)arg1 sessionId:(unsigned int)arg2 cgiWrap:(id)arg3;
- (id)GetCdnIpList;
- (void)GetCdnDnsInfo;
- (BOOL)shouldGetCdnDnsInfo;
- (void)onNetStatusChange:(int)arg1;
- (void)SetCdnDnsInfo:(id)arg1;
- (void)OnDownloadEnd:(id)arg1;
- (void)CallDownloadExtendsion:(id)arg1;
- (void)OnUploadEnd:(id)arg1;
- (void)CallUploadExtendsion:(id)arg1;
- (void)OnDownloadProgress:(id)arg1;
- (void)CallDownloadProgressExtendsion:(id)arg1;
- (void)OnUploadProgress:(id)arg1;
- (void)CallUploadProgressExtendsion:(id)arg1;
- (void)StopDownloadFavMedia:(id)arg1;
- (BOOL)StrartDownloadFavMedia:(id)arg1;
- (void)StopUploadFavMedia:(id)arg1;
- (BOOL)StartUploadFavMedia:(id)arg1 error:(int *)arg2;
- (void)StopDownloadComMedia:(id)arg1;
- (BOOL)StartDownloadComMedia:(id)arg1;
- (id)GetDownloadProgressInfo:(id)arg1;
- (void)StopDownloadMedia:(id)arg1;
- (BOOL)StartDownloadMedia:(struct C2CDownloadRequest *)arg1;
- (BOOL)StartDownloadMedia:(struct C2CDownloadRequest *)arg1 message:(id)arg2 type:(int)arg3;
- (void)StopUploadComMedia:(id)arg1;
- (BOOL)StartUploadComMedia:(id)arg1;
- (BOOL)StopDownloadComMedia:(id)arg1 CdnDownloadTaskInfo:(id)arg2;
- (void)InitCdn;
- (BOOL)IsCdnAvaible;
- (void)UnInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

