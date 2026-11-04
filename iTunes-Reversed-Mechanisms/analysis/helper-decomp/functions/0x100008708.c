// rea decompile_all
// name: FUN_100008708
// address: 0x100008708
// body: available
// range: 0x100008708-0x100008a9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100008a45 to 0x10000bbb1 _objc_autorelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100008708(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR__objc_msgSend_100012170;
  IVar3 = MSFileManager::defaultManager((ID)&objc::class_t::MSFileManager,"defaultManager");
  IVar4 = FUN_10000a9d3(param_1);
  IVar5 = MSFileManager::fileAttributesAtPath_traverseLink_
                    (IVar3,"fileAttributesAtPath:traverseLink:",IVar4,'\0');
  uVar7 = *(undefined8 *)PTR__NSFileType_100012008;
  uVar6 = (*(code *)puVar1)(IVar5,"objectForKey:",uVar7);
  cVar2 = (*(code *)puVar1)(uVar6,"isEqualToString:",
                            *(undefined8 *)PTR__NSFileTypeDirectory_100012010);
  if (cVar2 == '\0') {
    cVar2 = _DLShouldLog(7);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_getBackupInfoForTarget",7,&cf_Skippingpathforrestore_notadirectory___,IVar4);
    }
    return 0;
  }
  IVar5 = (*(code *)puVar1)(IVar4,"stringByAppendingPathComponent:",&cf_Info_plist);
  IVar3 = MSFileManager::fileAttributesAtPath_traverseLink_
                    (IVar3,"fileAttributesAtPath:traverseLink:",IVar5,'\0');
  if (IVar3 == 0) {
    uVar7 = (*(code *)puVar1)(0,&_OBJC_CLASS___NSDate,"dateWithTimeIntervalSinceReferenceDate:");
    IVar5 = NSMutableDictionary::dictionaryWithObjectsAndKeys_
                      ((ID)&_OBJC_CLASS___NSMutableDictionary,"dictionaryWithObjectsAndKeys:",
                       &cf_Unknown,&cf_DeviceName,&cf_Unknown,&cf_DisplayName,uVar7,
                       &cf_LastBackupDate,&cf_iPhone1_1,&cf_ProductType,&cf_1_1,&cf_ProductVersion,
                       &cf_00000000000,&cf_SerialNumber,&cf_Unknown,&cf_TargetIdentifier,&cf_Device,
                       &cf_TargetType,0);
    IVar5 = (*(code *)PTR__objc_retain_100012180)(IVar5);
  }
  else {
    uVar7 = (*(code *)puVar1)(IVar3,"objectForKey:",uVar7);
    cVar2 = (*(code *)puVar1)(uVar7,"isEqualToString:",
                              *(undefined8 *)PTR__NSFileTypeRegular_100012018);
    if (cVar2 == '\0') {
      cVar2 = _DLShouldLog(7);
      if (cVar2 == '\0') {
        return 0;
      }
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_getBackupInfoForTarget",7,&cf_Skippingpathforrestore___isnotaregularfile___,
              &cf_Info_plist,IVar5);
      return 0;
    }
    IVar5 = NSDictionary::dictionaryWithContentsOfFile_
                      ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithContentsOfFile:",IVar5);
    IVar5 = NSDictionary::mutableCopy(IVar5,"mutableCopy");
  }
  NSMutableDictionary::setObject_forKey_(IVar5,"setObject:forKey:",IVar4,&cf_BackupPath);
  uVar7 = (*(code *)puVar1)(IVar4,"lastPathComponent");
  NSMutableDictionary::setObject_forKey_(IVar5,"setObject:forKey:",uVar7,&cf_SourceIdentifier);
  uVar7 = FUN_10000aa6e(IVar4);
  IVar4 = NSDictionary::dictionaryWithContentsOfFile_
                    ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithContentsOfFile:",uVar7);
  if (IVar4 == 0) {
    if (IVar3 == 0) {
      (*(code *)PTR__objc_release_100012178)(IVar5);
      return 0;
    }
  }
  else {
    IVar3 = NSDictionary::objectForKey_(IVar4,"objectForKey:",&cf_IsEncrypted);
    if (IVar3 != 0) {
      NSMutableDictionary::setObject_forKey_(IVar5,"setObject:forKey:",IVar3,&cf_IsEncrypted);
    }
    uVar7 = FUN_10000a951();
    uVar7 = FUN_100006bb8(uVar7,param_1);
    uVar6 = (*(code *)puVar1)(uVar7,"objectForKey:",&cf_AMSBackupApplicationsKey);
    lVar8 = (*(code *)puVar1)(uVar6,"count");
    IVar3 = NSNumber::numberWithBool_
                      ((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",(ulong)(lVar8 != 0));
    NSMutableDictionary::setObject_forKey_
              (IVar5,"setObject:forKey:",IVar3,&cf_ContainsApplicationData);
    (*(code *)PTR__objc_release_100012178)(uVar7);
  }
  uVar7 = _objc_autorelease(IVar5);
  return uVar7;
}

