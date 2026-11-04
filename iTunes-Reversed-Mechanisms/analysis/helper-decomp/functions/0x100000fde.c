// rea decompile_all
// name: FUN_100000fde
// address: 0x100000fde
// body: available
// range: 0x100000fde-0x1000010e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100000fde(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  cVar1 = _CFStringHasPrefix(param_1,&cf_com_apple_syncservices_);
  uVar4 = param_1;
  if (cVar1 == '\0') {
    _CFRetain(param_1);
  }
  else {
    lVar2 = _CFStringGetLength();
    lVar3 = _CFStringGetLength(&cf_com_apple_syncservices_);
    if (lVar2 - lVar3 == 0 || lVar2 < lVar3) {
      cVar1 = _DLShouldLog(3);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/Utility/iPodSyncUtility.c"
                ,"CreateCleanUuid",3,&cf_Can_tcleanupUUID_syncservicesprefixtakesupthewholestring___
                ,param_1);
      }
    }
    else {
      cVar1 = _DLShouldLog(5);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/Utility/iPodSyncUtility.c"
                ,"CreateCleanUuid",5,&cf_UUIDhassyncservicesprefix___,param_1);
      }
      uVar4 = _CFStringCreateWithSubstring(0,param_1,lVar3,lVar2 - lVar3);
      cVar1 = _DLShouldLog(5);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/Utility/iPodSyncUtility.c"
                ,"CreateCleanUuid",5,&cf_CleanedupUUIDfrom__to___,param_1,uVar4);
      }
    }
  }
  return uVar4;
}

