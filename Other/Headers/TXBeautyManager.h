//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TXCBeautyParams;
@protocol TXBeautyManagerTraitControl, TXCBeautyParamSetter;

@interface TXBeautyManager : NSObject
{
    id <TXBeautyManagerTraitControl> _traitControl;
    long long _beautyStyle;
    id <TXCBeautyParamSetter> _preprocessor;
    TXCBeautyParams *_beautyParams;
}

@property(retain, nonatomic) TXCBeautyParams *beautyParams; // @synthesize beautyParams=_beautyParams;
@property(nonatomic) __weak id <TXCBeautyParamSetter> preprocessor; // @synthesize preprocessor=_preprocessor;
@property(readonly, nonatomic) long long beautyStyle; // @synthesize beautyStyle=_beautyStyle;
@property(nonatomic) __weak id <TXBeautyManagerTraitControl> traitControl; // @synthesize traitControl=_traitControl;
- (void).cxx_destruct;
- (void)setRuddyLevel:(float)arg1;
- (void)setWhitenessLevel:(float)arg1;
- (void)setBeautyLevel:(float)arg1;
- (void)setBeautyStyle:(long long)arg1;
- (void)_applyParamsToPreprocessor;
- (id)initWithPreprocessor:(id)arg1 traitControl:(id)arg2;
- (id)init;

@end

