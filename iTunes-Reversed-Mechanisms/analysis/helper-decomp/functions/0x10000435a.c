// rea decompile_all
// name: FUN_10000435a
// address: 0x10000435a
// body: available
// range: 0x10000435a-0x100004463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10000435a(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  
  lVar3 = FUN_100007da1();
  cVar2 = _DLShouldLog(5);
  puVar1 = PTR__objc_msgSend_100012170;
  if (lVar3 == 0) {
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_setRefreshForAllDataClassesForTarget",5,
              &cf_NoclientfortargetIdentifier___noneedtosetalldataclassestorefresh,param_1);
    }
  }
  else {
    if (cVar2 != '\0') {
      uVar4 = (*(code *)PTR__objc_msgSend_100012170)(lVar3,"clientIdentifier");
      uVar5 = (*(code *)puVar1)(lVar3,"displayName");
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_setRefreshForAllDataClassesForTarget",5,
              &
              cf_Settingrefreshforalldataclassesforclient______byclearinglastcomputeranchorsinclientinfo
              ,uVar4,uVar5);
    }
    puVar1 = PTR__objc_msgSend_100012170;
    IVar6 = NSDictionary::dictionary((ID)&_OBJC_CLASS___NSDictionary,"dictionary");
    (*(code *)puVar1)(lVar3,"setObject:forKey:",IVar6,&cf_iPodSyncClientComputerAnchorKey);
    IVar6 = NSArray::arrayWithObject_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",&cf_com_apple_mail_Account);
    (*(code *)puVar1)(lVar3,"setShouldReplaceClientRecords:forEntityNames:",1,IVar6);
  }
  return 0;
}

