//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CaptureVideoInfo : NSObject
{
    unsigned int _video_size;
    unsigned int _video_time;
    unsigned int _video_width;
    unsigned int _video_height;
    unsigned int _m_uiVideoSource;
    NSString *_video_path;
}

@property(nonatomic) unsigned int m_uiVideoSource; // @synthesize m_uiVideoSource=_m_uiVideoSource;
@property(nonatomic) unsigned int video_height; // @synthesize video_height=_video_height;
@property(nonatomic) unsigned int video_width; // @synthesize video_width=_video_width;
@property(nonatomic) unsigned int video_time; // @synthesize video_time=_video_time;
@property(nonatomic) unsigned int video_size; // @synthesize video_size=_video_size;
@property(retain, nonatomic) NSString *video_path; // @synthesize video_path=_video_path;
- (void).cxx_destruct;

@end

