//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"

@class FavoritesDownloadCDNInfo, FavoritesItem, NSString;
@protocol FavoritesDownloaderDelegate;

@interface FavoritesDownloader : NSObject <ICdnComMgrExt>
{
    FavoritesItem *_favItem;
    id <FavoritesDownloaderDelegate> _delegate;
    int _runningState;
    FavoritesDownloadCDNInfo *_downloadingInfo;
    BOOL _isCanceled;
}

@property(nonatomic) __weak id <FavoritesDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)BroadcastDownloadFail:(int)arg1;
- (void)tryStartNextData;
- (id)getItem;
- (BOOL)stop;
- (void)run;
- (void)dealloc;
- (id)initWithFavoritesItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
