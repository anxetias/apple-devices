// rea decompile_all
// name: __UpgradeCallbacksToCurrent
// address: 0xab259
// body: available
// range: 0xab259-0xab3a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __UpgradeCallbacksToCurrent(char *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 unaff_R14;
  ulong uVar9;
  byte bVar10;
  
  if (*param_1 == '\x01') {
    param_2[0xc] = *(undefined8 *)(param_1 + 0x60);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    param_2[10] = *(undefined8 *)(param_1 + 0x50);
    param_2[0xb] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    param_2[8] = *(undefined8 *)(param_1 + 0x40);
    param_2[9] = uVar1;
    uVar1 = *(undefined8 *)param_1;
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    param_2[6] = *(undefined8 *)(param_1 + 0x30);
    param_2[7] = uVar7;
    param_2[4] = uVar5;
    param_2[5] = uVar6;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  else {
    if (*param_1 != '\0') {
      bVar10 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar8 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar8 == 0) {
          bVar10 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,0x10,
                            "Don\'t know how to handle callbacks struct version %hhu",*param_1);
        }
      }
      uVar9 = 0;
      if ((bVar10 != 0) && (2 < _gSZDefaultLogLevel)) {
        uVar9 = 0;
        __SZLog(3,"_UpgradeCallbacksToCurrent",0x168,
                &cf_Don_tknowhowtohandlecallbacksstructversion_hhu,*param_1);
      }
      goto LAB_000ab2e9;
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    *param_2 = *(undefined8 *)param_1;
    param_2[1] = uVar1;
    param_2[10] = *(undefined8 *)(param_1 + 0x50);
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    param_2[8] = *(undefined8 *)(param_1 + 0x40);
    param_2[9] = uVar1;
    param_2[6] = uVar6;
    param_2[7] = uVar7;
    param_2[4] = uVar4;
    param_2[5] = uVar5;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    *(undefined1 *)param_2 = 1;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
  }
  uVar9 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
LAB_000ab2e9:
  return uVar9 & 0xffffffff;
}

