// rea decompile_all
// name: FUN_100006e7e
// address: 0x100006e7e
// body: available
// range: 0x100006e7e-0x10000745e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000745a to 0x10000bb51 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100006e7e(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  cfstringStruct *pcVar12;
  undefined8 uVar13;
  undefined8 local_48;
  cfstringStruct *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100012120;
  cVar2 = (*(code *)PTR__objc_msgSend_100012170)(param_1,"containsString:",&cf__);
  if (((cVar2 == '\0') &&
      (cVar2 = (*(code *)PTR__objc_msgSend_100012170)(param_1,"containsString:",&cf__),
      cVar2 == '\0')) &&
     (cVar2 = (*(code *)PTR__objc_msgSend_100012170)(param_1,"containsString:",&cf___),
     cVar2 == '\0')) {
    uVar13 = FUN_10000a951();
    puVar1 = PTR__objc_msgSend_100012170;
    IVar4 = (*(code *)PTR__objc_msgSend_100012170)(uVar13,"stringByStandardizingPath");
    uVar13 = (*(code *)puVar1)(IVar4,"stringByAppendingPathComponent:",param_1);
    uVar13 = (*(code *)puVar1)(uVar13,"stringByStandardizingPath");
    cVar2 = (*(code *)puVar1)(uVar13,"hasPrefix:",IVar4);
    if (cVar2 == '\0') {
      cVar2 = _DLShouldLog(4);
      if (cVar2 == '\0') goto LAB_100006f1b;
      pcVar12 = &cf___mustbeasubpathof__;
      uVar13 = 4;
    }
    else {
      uVar5 = (*(code *)puVar1)(uVar13,"stringByAppendingPathComponent:",&cf_Manifest_plist);
      IVar6 = NSData::dataWithContentsOfFile_
                        ((ID)&_OBJC_CLASS___NSData,"dataWithContentsOfFile:",uVar5);
      if (IVar6 == 0) {
        cVar2 = _DLShouldLog(4);
        if (cVar2 != '\0') {
          pcVar12 = &cf_Couldnotfindbackupmanifestat___;
LAB_1000070e7:
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                  ,"_dateOfBackup",4,pcVar12,uVar5);
        }
LAB_100007104:
        IVar6 = NSDate::date((ID)&_OBJC_CLASS___NSDate,"date");
      }
      else {
        IVar6 = NSPropertyListSerialization::propertyListWithData_options_format_error_
                          ((ID)&_OBJC_CLASS___NSPropertyListSerialization,
                           "propertyListWithData:options:format:error:",IVar6,0,0,0);
        IVar7 = NSDictionary::class((ID)&_OBJC_CLASS___NSDictionary,"class");
        IVar7 = NSPropertyListSerialization::isKindOfClass_(IVar6,"isKindOfClass:",IVar7);
        if ((char)IVar7 == '\0') {
          cVar2 = _DLShouldLog(4);
          if (cVar2 != '\0') {
            pcVar12 = &cf_Didnotfindbackupmanifestdatain___;
            goto LAB_1000070e7;
          }
          goto LAB_100007104;
        }
        IVar6 = NSPropertyListSerialization::valueForKey_(IVar6,"valueForKey:",&cf_Date);
        IVar7 = NSDate::class((ID)&_OBJC_CLASS___NSDate,"class");
        IVar7 = NSPropertyListSerialization::isKindOfClass_(IVar6,"isKindOfClass:",IVar7);
        if ((char)IVar7 == '\0') {
          cVar2 = _DLShouldLog(4);
          if (cVar2 != '\0') {
            pcVar12 = &cf_Didnotfindbackupdatein___;
            goto LAB_1000070e7;
          }
          goto LAB_100007104;
        }
        if (IVar6 == 0) goto LAB_100007104;
      }
      cVar2 = _DLShouldLog(6);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"_archiveBackup",6,&cf_Archivingbackup__,param_1);
      }
      IVar7 = _objc_alloc(&_OBJC_CLASS___NSDateFormatter);
      IVar7 = NSDateFormatter::init(IVar7,"init");
      uVar5 = _objc_autorelease(IVar7);
      (*(code *)puVar1)(uVar5,"setDateFormat:",&cf_yyyyMMdd_HHmmss);
      uVar5 = (*(code *)puVar1)(uVar5,"stringFromDate:",IVar6);
      IVar7 = NSString::stringWithFormat_
                        ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______,param_1,uVar5);
      uVar5 = (*(code *)puVar1)(IVar4,"stringByAppendingPathComponent:",IVar7);
      uVar13 = (*(code *)puVar1)(uVar13,"fileSystemRepresentation");
      uVar8 = (*(code *)puVar1)(uVar5,"fileSystemRepresentation");
      iVar3 = _renamex_np(uVar13,uVar8,0x10);
      if (iVar3 == 0) {
        uVar13 = (*(code *)puVar1)(uVar5,"stringByAppendingPathComponent:",&cf_Info_plist);
        IVar4 = NSDictionary::dictionaryWithContentsOfFile_
                          ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithContentsOfFile:",uVar13);
        IVar4 = NSDictionary::mutableCopy(IVar4,"mutableCopy");
        lVar10 = _objc_autorelease(IVar4);
        if (lVar10 == 0) {
          cVar2 = _DLShouldLog(4);
          if (cVar2 == '\0') goto LAB_100006f1b;
          pcVar12 = &cf_ErrorreadingInfo_plistwhilearchivingbackup__;
        }
        else {
          lVar11 = (*(code *)PTR__objc_msgSend_100012170)(lVar10,"objectForKey:",&cf_DisplayName);
          if (lVar11 == 0) {
            cVar2 = _DLShouldLog(4);
            if (cVar2 == '\0') goto LAB_100006f1b;
            pcVar12 = &cf_Nodisplaynamefoundwhilearchivingbackup__;
          }
          else {
            IVar4 = _objc_alloc(&_OBJC_CLASS___NSDateFormatter);
            IVar4 = NSDateFormatter::init(IVar4,"init");
            uVar5 = _objc_autorelease(IVar4);
            (*(code *)puVar1)(uVar5,"setDateStyle:",2);
            (*(code *)puVar1)(uVar5,"setTimeStyle:",1);
            uVar5 = (*(code *)puVar1)(uVar5,"stringFromDate:",IVar6);
            IVar4 = NSString::stringWithFormat_
                              ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______,lVar11,
                               uVar5);
            (*(code *)puVar1)(lVar10,"setObject:forKey:",IVar4,&cf_DisplayName);
            cVar2 = (*(code *)puVar1)(lVar10,"writeToFile:atomically:",uVar13,1);
            if ((cVar2 != '\0') || (cVar2 = _DLShouldLog(4), cVar2 == '\0')) goto LAB_100006f1b;
            pcVar12 = &cf_ErrorwritingInfo_plistwhilearchivingbackup__;
          }
        }
        uVar13 = 4;
        goto LAB_100006f11;
      }
      piVar9 = ___error();
      iVar3 = *piVar9;
      uVar13 = *(undefined8 *)PTR__NSPOSIXErrorDomain_100012028;
      local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_100012020;
      local_40 = &cf_Cannotmovearchivedbackup;
      IVar4 = NSDictionary::dictionaryWithObjects_forKeys_count_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                         &local_40,&local_48,1);
      IVar4 = NSError::errorWithDomain_code_userInfo_
                        ((ID)&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",uVar13,
                         (long)iVar3,IVar4);
      cVar2 = _DLShouldLog(3);
      if (cVar2 == '\0') goto LAB_100006f1b;
      pcVar12 = &cf_Errorarchivingbackup_____;
      uVar13 = 3;
    }
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_archiveBackup",uVar13,pcVar12,param_1,IVar4);
  }
  else {
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') goto LAB_100006f1b;
    pcVar12 = &cf_Invalidtarget__;
    uVar13 = 3;
LAB_100006f11:
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_archiveBackup",uVar13,pcVar12,param_1);
  }
LAB_100006f1b:
  if (*(long *)PTR____stack_chk_guard_100012120 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

