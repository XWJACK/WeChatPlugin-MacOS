//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle;

@interface AudioFile : NSObject
{
    NSFileHandle *m_fhFile;
    unsigned int m_uiDataWrited;
}

- (void).cxx_destruct;
- (BOOL)writeBytes:(unsigned int)arg1 len:(unsigned int)arg2 buffer:(void *)arg3;
- (BOOL)readBytes:(unsigned int)arg1 len:(unsigned int *)arg2 buffer:(void *)arg3;
- (unsigned int)getLength;
- (unsigned int)seekToEnd;
- (void)close;
- (BOOL)read:(id)arg1;
- (BOOL)open:(id)arg1;
- (BOOL)create:(id)arg1;
- (void)dealloc;
- (id)init;

@end
