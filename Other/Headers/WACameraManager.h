//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WACameraManager : NSObject
{
}

- (id)error:(id)arg1 code:(long long)arg2;
- (id)setTorch:(id)arg1 model:(long long)arg2;
- (id)changeTorch:(id)arg1 model:(long long)arg2;
- (long long)torchMode:(id)arg1;
- (id)setFlash:(id)arg1 mode:(long long)arg2;
- (id)changeFlash:(id)arg1 mode:(long long)arg2;
- (long long)flashMode:(id)arg1;
- (id)resetFocusAndExposure:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)expose:(id)arg1 point:(struct CGPoint)arg2;
- (id)focus:(id)arg1 point:(struct CGPoint)arg2;
- (id)zoom:(id)arg1 factor:(double)arg2;
- (id)switchCamera:(id)arg1 old:(id)arg2 new:(id)arg3;

@end

