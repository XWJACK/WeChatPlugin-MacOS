//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXCAudioDevicesUtil : NSObject
{
}

+ (id)defaultAudioDeviceInfo:(BOOL)arg1;
+ (id)defaultAudioOutputDeviceInfo;
+ (id)defaultAudioInputDeviceInfo;
+ (id)outputAudioDeviceInfoById:(unsigned int)arg1;
+ (id)inputAudioDeviceInfoById:(unsigned int)arg1;
+ (id)getAudioDeviceList:(BOOL)arg1;
+ (id)getAudioOutputList;
+ (id)getAudioInputList;
+ (id)audioDevicesList;

@end
