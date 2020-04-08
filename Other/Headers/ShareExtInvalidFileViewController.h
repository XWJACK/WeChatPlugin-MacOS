//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "MMTableViewDelegate-Protocol.h"
#import "NSPopoverDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSString;

@interface ShareExtInvalidFileViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, MMTableViewDelegate, NSPopoverDelegate>
{
    NSMutableArray *m_fileNames;
    NSMutableArray *m_fileSizes;
    NSMutableArray *m_tableData;
    MMTableView *_tableView;
}

@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setupTableData;
- (void)viewDidLoad;
- (id)initWithFileNames:(id)arg1 fileSizes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
