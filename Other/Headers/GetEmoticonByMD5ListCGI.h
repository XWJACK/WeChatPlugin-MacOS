//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EmoticonMsgInfo, NSString;
@protocol GetEmoticonByMD5ListCGIDelegate;

@interface GetEmoticonByMD5ListCGI : NSObject
{
    EmoticonMsgInfo *m_msgInfo;
    NSString *m_emoticonPath;
    id <GetEmoticonByMD5ListCGIDelegate> _delegate;
}

@property(nonatomic) __weak id <GetEmoticonByMD5ListCGIDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startRequestWithMd5List:(id)arg1;
- (void)startRequestWithMsgInfo:(id)arg1;
- (id)init;

@end

