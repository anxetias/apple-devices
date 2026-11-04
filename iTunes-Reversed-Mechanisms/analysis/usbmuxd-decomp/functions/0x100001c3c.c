// rea decompile_all
// name: FUN_100001c3c
// address: 0x100001c3c
// body: available
// range: 0x100001c3c-0x100001d12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100001c3c(long *param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  char *pcVar4;
  ulong uVar5;
  
  iVar1 = _open("/Library/Preferences/com.apple.usbmuxd.plist",0);
  if (iVar1 == -1) {
    if (param_3 == '\0') {
      iVar1 = _open("/Library/Preferences/",0);
      if (iVar1 != -1) {
        *param_2 = FUN_1000021c0;
        *param_1 = (long)iVar1;
        lVar2 = 0x20021fffc;
        goto LAB_100001c7d;
      }
      if (6 < DAT_100021030) {
        piVar3 = ___error();
        iVar1 = *piVar3;
        piVar3 = ___error();
        pcVar4 = _strerror(*piVar3);
        uVar5 = 0;
        FUN_1000008d2(7,0,&cf__scouldnotfindadirectoryorfiletowatch__d__s,"prefs_create_watch_event"
                      ,iVar1,pcVar4);
        goto LAB_100001c93;
      }
    }
    uVar5 = 0;
  }
  else {
    *param_2 = FUN_1000020db;
    *param_1 = (long)iVar1;
    lVar2 = 0x230021fffc;
LAB_100001c7d:
    param_1[1] = lVar2;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar5 = CONCAT71((int7)((ulong)param_1 >> 8),1);
  }
LAB_100001c93:
  return uVar5 & 0xffffffff;
}

