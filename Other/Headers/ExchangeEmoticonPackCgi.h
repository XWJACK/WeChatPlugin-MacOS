//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMEmoticonStoreItem;
@protocol ExchangeEmoticonPackCgiDelegate;

@interface ExchangeEmoticonPackCgi : NSObject
{
    MMEmoticonStoreItem *_storeItem;
    id <ExchangeEmoticonPackCgiDelegate> _delegate;
}

@property(nonatomic) __weak id <ExchangeEmoticonPackCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startRequestWithProductId:(id)arg1 reqScene:(int)arg2;
- (id)init;

@end

