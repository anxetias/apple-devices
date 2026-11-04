// rea decompile_all
// name: FUN_100001904
// address: 0x100001904
// body: available
// range: 0x100001904-0x100001992 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100001904(void)

{
  char cVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulong uVar2;
  char local_19;
  
  uVar3 = (undefined7)((ulong)unaff_RBX >> 8);
  if (DAT_100028e38 == '\x01') {
    uVar2 = CONCAT71(uVar3,DAT_100028e39);
  }
  else {
    DAT_100028e38 = '\x01';
    cVar1 = _CFPreferencesGetAppBooleanValue
                      (&cf_SyncPlayback,&cf_com_apple_SyncServices_iPodSync,&local_19);
    uVar2 = CONCAT71(uVar3,cVar1 != '\0');
    if (local_19 == '\0') {
      uVar2 = 0;
    }
    else {
      cVar1 = _DLShouldLog(5);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/Utility/iPodSyncUtility.c"
                ,"SyncPlaybackEnabled",5,&cf_Enablingsyncplaybackrecording);
      }
    }
    DAT_100028e39 = (undefined1)uVar2;
  }
  return uVar2 & 0xffffff01;
}

