//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VoipMonoMsg;
@protocol VoipGetRoomInfoCgiDelegate;

@interface VoipGetRoomInfoCgi : NSObject
{
    VoipMonoMsg *m_voipMonoMsg;
    id <VoipGetRoomInfoCgiDelegate> _m_delegate;
}

@property(nonatomic) __weak id <VoipGetRoomInfoCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) VoipMonoMsg *m_voipMonoMsg; // @synthesize m_voipMonoMsg;
- (void).cxx_destruct;
- (void)HandleGetRoomInfoResp:(id)arg1;
- (void)startRequest;
- (id)init;

@end

