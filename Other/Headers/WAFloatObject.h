//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSString;

@interface WAFloatObject : NSObject
{
    BOOL _enterScreen;
    NSString *_content;
    double _initOffset;
    NSColor *_color;
    double _speed;
    double _textWidth;
    double _time;
    struct CGPoint _position;
}

@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) double textWidth; // @synthesize textWidth=_textWidth;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
@property(nonatomic) double initOffset; // @synthesize initOffset=_initOffset;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;

@end

