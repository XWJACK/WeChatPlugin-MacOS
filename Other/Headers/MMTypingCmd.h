//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMTypingCmd : NSObject
{
    NSString *_userName;
}

@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;
- (BOOL)sendStatus:(int)arg1 withUserName:(id)arg2;
- (BOOL)stopVoiceTypingStatus;
- (BOOL)sendVoiceTypingStatus;
- (BOOL)stopTextTypingStatus;
- (BOOL)sendTextTypingStatus;

@end

