//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMCDNTask;

@interface MMCDNDownloadParaData : NSObject
{
    MMCDNTask *_task;
    struct C2CDownloadRequest _para;
}

+ (id)paraDataWithPara:(struct C2CDownloadRequest)arg1 task:(id)arg2;
@property(retain, nonatomic) MMCDNTask *task; // @synthesize task=_task;
@property(nonatomic) struct C2CDownloadRequest para; // @synthesize para=_para;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

