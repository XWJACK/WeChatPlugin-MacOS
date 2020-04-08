//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchTableCellView.h"

@class NSTextField;
@protocol MMSearchTableSectionAllViewDelegate;

@interface MMSearchTableSectionAllView : MMSearchTableCellView
{
    BOOL _isExpanded;
    id <MMSearchTableSectionAllViewDelegate> _delegate;
    unsigned long long _resultType;
    unsigned long long _itemCount;
    NSTextField *_titleField;
}

@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) unsigned long long resultType; // @synthesize resultType=_resultType;
@property(nonatomic) BOOL isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) __weak id <MMSearchTableSectionAllViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)populateWithSearchResultItem:(id)arg1 keyword:(id)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
