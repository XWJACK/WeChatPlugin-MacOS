//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IJSVGUnitLength : NSObject
{
    BOOL inherit;
    double value;
    long long type;
}

+ (id)unitWithString:(id)arg1;
+ (id)unitWithPercentageString:(id)arg1;
+ (id)unitWithPercentageFloat:(double)arg1;
+ (id)unitWithFloat:(double)arg1 type:(long long)arg2;
+ (id)unitWithFloat:(double)arg1;
@property(nonatomic) BOOL inherit; // @synthesize inherit;
@property(nonatomic) long long type; // @synthesize type;
@property(nonatomic) double value; // @synthesize value;
- (id)description;
- (id)stringValue;
- (double)valueAsPercentage;
- (double)computeValue:(double)arg1;

@end

