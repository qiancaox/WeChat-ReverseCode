//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCDumpReporterMgrExt-Protocol.h"
#import "MMPickerViewDelegate-Protocol.h"

@class MMPickerView, MMProgressView, MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UIScrollView, UISwitch, UITextField, UIView;

@interface MMCheckDumpViewController : MMUIViewController <IWCDumpReporterMgrExt, MMPickerViewDelegate>
{
    UITextField *m_textFiled;
    unsigned long long m_nTimeInterval;
    NSMutableArray *m_arrDates;
    long long m_selectedRow;
    UIView *roundView;
    UILabel *m_tipLabel;
    UILabel *m_checklabel;
    UISwitch *m_checkSitchView;
    UIButton *m_btnDate;
    MMUILabel *m_rightLab;
    UIButton *m_btndump;
    UILabel *m_warningLabel;
    UIImageView *m_imgvRecover;
    MMPickerView *m_pickerView;
    UIButton *m_btnTestDBCorrupt;
    UIButton *m_btnTestFrameDrop;
    UIScrollView *m_mainScrollView;
    MMProgressView *m_progressView;
    UIButton *m_btnFinish;
    _Bool m_isUploading;
    _Bool m_isFinish;
    unsigned long long m_status;
}

- (void).cxx_destruct;
- (void)onDumpReporterUploadProgress:(double)arg1;
- (void)onDumpReporterUploadResult:(_Bool)arg1;
- (void)MMPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)testFrameDropDump;
- (void)testDBCorruptDump;
- (void)OnClickBackBarButton:(id)arg1;
- (void)onFinish;
- (void)onChoseDate;
- (void)onUploadDump;
- (void)onSwitchValueChange:(id)arg1;
- (void)initData;
- (void)makeFinishBtn;
- (void)makeProgressView;
- (void)makeTipLabelWithText:(id)arg1;
- (void)makeIconView:(id)arg1;
- (void)makeScrollView;
- (void)makeUploadSuccessView;
- (void)makeFinishState;
- (void)makeUploadingView;
- (void)makeInitView;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

