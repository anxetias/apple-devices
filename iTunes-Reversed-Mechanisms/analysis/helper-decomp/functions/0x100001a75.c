// rea decompile_all
// name: FUN_100001a75
// address: 0x100001a75
// body: available
// range: 0x100001a75-0x10000220b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_100001a75(undefined8 param_1)

{
  FILE *pFVar1;
  char cVar2;
  ID self;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  size_t sVar9;
  long lVar10;
  undefined8 *puVar11;
  cfstringStruct *pcVar12;
  size_t sVar13;
  
  self = NSAutoreleasePool::new((ID)&_OBJC_CLASS___NSAutoreleasePool,"new");
  cVar2 = _DLShouldLog(7);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_messageCallback",7,&cf_Childhandlingrequest___,param_1);
  }
  IVar3 = NSAutoreleasePool::new((ID)&_OBJC_CLASS___NSAutoreleasePool,"new");
  IVar4 = NSRunLoop::currentRunLoop((ID)&_OBJC_CLASS___NSRunLoop,"currentRunLoop");
  uVar5 = (*(code *)PTR__objc_msgSend_100012170)
                    (0,&_OBJC_CLASS___NSDate,"dateWithTimeIntervalSinceNow:");
  NSRunLoop::runUntilDate_(IVar4,"runUntilDate:",uVar5);
  lVar6 = _CFDictionaryGetValue(param_1,&cf_AMSRequestKey);
  if (lVar6 == 0) {
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      IVar4 = 0;
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_handleMessage",6,&cf_Nonameinmessage___,param_1);
      goto LAB_10000214b;
    }
LAB_100001f9f:
    IVar4 = 0;
  }
  else {
    if (DAT_100016670 == 0) {
      lVar7 = _CFDictionaryCreateMutable(0,0,PTR__kCFTypeDictionaryKeyCallBacks_100012150,0);
      DAT_100016670 = lVar7;
      _CFDictionarySetValue(lVar7,&cf_AMSIsSyncEnabledRequest,FUN_10000745f);
      _CFDictionarySetValue(lVar7,&cf_AMSEnableSyncRequest,FUN_100002298);
      _CFDictionarySetValue(lVar7,&cf_AMSGetSupportedDataClassNamesRequest,FUN_1000075b5);
      _CFDictionarySetValue(lVar7,&cf_AMSGetLastSyncDateForDataClassRequest,FUN_1000023b1);
      _CFDictionarySetValue
                (lVar7,&cf_AMSRegisterClientWithTargetIdentifierAndDisplayNameRequest,FUN_100002609)
      ;
      _CFDictionarySetValue(lVar7,&cf_AMSUnregisterTargetRequest,FUN_100003340);
      _CFDictionarySetValue
                (lVar7,&cf_AMSGetClientIdentifierAndDisplayNameForTargetRequest,FUN_10000347d);
      _CFDictionarySetValue(lVar7,&cf_AMSGetDataClassInfoForTargetRequest,FUN_1000035de);
      _CFDictionarySetValue(lVar7,&cf_AMSSetDataClassInfoForTargetRequest,FUN_100003c60);
      _CFDictionarySetValue(lVar7,&cf_AMSSetRefreshForAllDataClassesForTargetRequest,FUN_10000435a);
      _CFDictionarySetValue(lVar7,&cf_AMSGetCalendarDayLimitRequest,FUN_100004464);
      _CFDictionarySetValue(lVar7,&cf_AMSSetCalendarDayLimitRequest,FUN_100004535);
      _CFDictionarySetValue(lVar7,&cf_AMSGetNewRecordCalendarNameRequest,FUN_100004750);
      _CFDictionarySetValue(lVar7,&cf_AMSSetNewRecordCalendarNameRequest,FUN_1000047b4);
      _CFDictionarySetValue(lVar7,&cf_AMSGetNewRecordGroupNameRequest,FUN_1000047ea);
      _CFDictionarySetValue(lVar7,&cf_AMSSetNewRecordGroupNameRequest,FUN_100004843);
      _CFDictionarySetValue(lVar7,&cf_AMSGetCollectionsForDataClassNameRequest,FUN_100004879);
      _CFDictionarySetValue
                (lVar7,&cf_AMSSetFilteredCollectionNamesForDataClassNameRequest,FUN_100005de1);
      _CFDictionarySetValue(lVar7,&cf_AMSBeginSyncRequest,FUN_10000613c);
      _CFDictionarySetValue(lVar7,&cf_AMSResetSyncDataRequest,FUN_1000082fc);
      _CFDictionarySetValue(lVar7,&cf_AMSGetSourcesForRestoreRequest,FUN_100006663);
      _CFDictionarySetValue(lVar7,&cf_AMSGetCompatibleSourcesForRestoreRequest,FUN_1000066a7);
      _CFDictionarySetValue(lVar7,&cf_AMSGetBackupApplications,FUN_100006bb8);
      _CFDictionarySetValue(lVar7,&cf_AMSGetBackupInfo,FUN_100006df8);
      _CFDictionarySetValue(lVar7,&cf_AMBArchiveBackupRequest,FUN_100006e7e);
    }
    pcVar8 = (code *)_CFDictionaryGetValue(DAT_100016670,lVar6);
    if (pcVar8 == (code *)0x0) {
      cVar2 = _DLShouldLog(6);
      if (cVar2 == '\0') goto LAB_100001f9f;
      pcVar12 = &cf_Nofunctionfor__inmessage___;
    }
    else {
      lVar7 = _CFDictionaryGetValue(param_1,&cf_AMSMessageSignatureKey);
      if (lVar7 != 0) {
        sVar9 = _CFArrayGetCount(lVar7);
        if (sVar9 == 0) {
          IVar4 = (*pcVar8)();
        }
        else {
          if (sVar9 == 3) {
            lVar10 = _CFStringCompare(lVar6,&cf_AMSBeginSyncRequest,0);
            sVar9 = 3;
            if (lVar10 == 0) {
              cVar2 = _DLShouldLog(5);
              if (cVar2 != '\0') {
                __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                        ,"_handleMessage",5,
                        &
                        cf_ParentwitholdAPIfor__calledfunctionwith3args_settingcountto5andpassingnilfordataclassnamesandreset
                        ,&cf_AMSBeginSyncRequest);
              }
              uVar5 = (*(code *)PTR__objc_msgSend_100012170)(lVar7,"mutableCopy");
              lVar7 = _objc_autorelease(uVar5);
              (*(code *)PTR__objc_msgSend_100012170)(lVar7,"addObject:",&cf_AMSDataClassNamesKey);
              sVar9 = 5;
              (*(code *)PTR__objc_msgSend_100012170)(lVar7,"addObject:",&cf_AMSResetDataClassesKey);
            }
          }
          else if (sVar9 == 2) {
            lVar10 = _CFStringCompare(lVar6,&
                                            cf_AMSRegisterClientWithTargetIdentifierAndDisplayNameRequest
                                      ,0);
            sVar9 = 2;
            if (lVar10 == 0) {
              cVar2 = _DLShouldLog(5);
              if (cVar2 != '\0') {
                __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                        ,"_handleMessage",5,
                        &
                        cf_ParentwitholdAPIfor__calledfunctionwith2args_settingcountto3andpassingnilforalerttoolpath
                        ,&cf_AMSRegisterClientWithTargetIdentifierAndDisplayNameRequest);
              }
              uVar5 = (*(code *)PTR__objc_msgSend_100012170)(lVar7,"mutableCopy");
              lVar7 = _objc_autorelease(uVar5);
              sVar9 = 3;
              (*(code *)PTR__objc_msgSend_100012170)(lVar7,"addObject:",&cf_AMSSyncToolPathKey);
            }
          }
          puVar11 = _calloc(8,sVar9);
          sVar13 = 0;
          do {
            uVar5 = _CFArrayGetValueAtIndex(lVar7,sVar13);
            uVar5 = _CFDictionaryGetValue(param_1,uVar5);
            puVar11[sVar13] = uVar5;
            sVar13 = sVar13 + 1;
          } while (sVar9 != sVar13);
          switch(sVar9) {
          case 1:
            IVar4 = (*pcVar8)(*puVar11);
            break;
          case 2:
            IVar4 = (*pcVar8)(*puVar11,puVar11[1]);
            break;
          case 3:
            IVar4 = (*pcVar8)(*puVar11,puVar11[1],puVar11[2]);
            break;
          case 4:
            IVar4 = (*pcVar8)(*puVar11,puVar11[1],puVar11[2],puVar11[3]);
            break;
          case 5:
            IVar4 = (*pcVar8)(*puVar11,puVar11[1],puVar11[2],puVar11[3],puVar11[4]);
            break;
          case 6:
            IVar4 = (*pcVar8)(*puVar11,puVar11[1],puVar11[2],puVar11[3],puVar11[4],puVar11[5]);
            break;
          default:
            pFVar1 = *(FILE **)PTR____stderrp_100012128;
            uVar5 = _CFStringGetCStringPtr(lVar6,0);
            IVar4 = 0;
            _fprintf(pFVar1,"Too many args: %lu, message name %s\n",sVar9,uVar5);
          }
          _free(puVar11);
        }
        goto LAB_10000214b;
      }
      cVar2 = _DLShouldLog(6);
      if (cVar2 == '\0') goto LAB_100001f9f;
      pcVar12 = &cf_Nosignaturefor__inmessage___;
    }
    IVar4 = 0;
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_handleMessage",6,pcVar12,lVar6,param_1);
  }
LAB_10000214b:
  NSAutoreleasePool::drain(IVar3,"drain");
  if (IVar4 == 0) {
    IVar3 = _objc_alloc(&_OBJC_CLASS___NSDictionary);
    IVar4 = NSDictionary::init(IVar3,"init");
  }
  cVar2 = _DLShouldLog(7);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_messageCallback",7,&cf_Childsendingresponse___,IVar4);
  }
  NSAutoreleasePool::drain(self,"drain");
  return IVar4;
}

