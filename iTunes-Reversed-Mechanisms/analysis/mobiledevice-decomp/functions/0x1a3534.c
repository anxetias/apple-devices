// rea decompile_all
// name: _AMAuthInstallBasebandApplyTssOverrides
// address: 0x1a3534
// body: available
// range: 0x1a3534-0x1a36cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandApplyTssOverrides(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = 0;
  local_48 = param_2;
  if (param_1 == 0) {
    _AMAuthInstallBasebandApplyTssOverrides_cold_8();
LAB_001a3683:
    iVar1 = 1;
LAB_001a3696:
    lVar3 = 0;
  }
  else {
    if (param_2 == 0) {
      _AMAuthInstallBasebandApplyTssOverrides_cold_7();
      goto LAB_001a3683;
    }
    if (param_3 == 0) {
      _AMAuthInstallBasebandApplyTssOverrides_cold_6();
      goto LAB_001a3683;
    }
    lVar3 = _BbfwReaderOpen(param_3);
    if (lVar3 == 0) {
      _AMAuthInstallBasebandApplyTssOverrides_cold_5();
      iVar1 = 4;
      goto LAB_001a3696;
    }
    iVar1 = _BbfwReaderFindAndCopyFileData(lVar3,&cf_Options_plist,&local_40);
    if (iVar1 != 0) {
      lVar5 = 0;
LAB_001a359f:
      iVar1 = 0;
      goto LAB_001a363c;
    }
    uVar4 = _CFGetAllocator(param_1);
    iVar1 = 0;
    lVar5 = _CFPropertyListCreateWithData(uVar4,local_40,0,0,&local_38);
    if (lVar5 != 0) {
      lVar6 = _CFDictionaryGetValue(lVar5,&cf_TssOverrides);
      if (lVar6 != 0) {
        uVar4 = _CFGetAllocator(param_1);
        iVar1 = _AMAuthInstallSupportApplyDictionaryOverrides(uVar4,lVar6,&local_48,&cf_Bb);
        if (iVar1 == 0) {
          uVar4 = _CFGetAllocator(param_1);
          iVar2 = _AMAuthInstallSupportApplyDictionaryOverrides(uVar4,lVar6,&local_48,&cf_FDR);
          iVar1 = 0;
          if (iVar2 != 0) {
            _AMAuthInstallBasebandApplyTssOverrides_cold_2();
            iVar1 = iVar2;
          }
        }
        else {
          _AMAuthInstallBasebandApplyTssOverrides_cold_1();
        }
        goto LAB_001a363c;
      }
      _AMAuthInstallBasebandApplyTssOverrides_cold_3();
      goto LAB_001a359f;
    }
    _AMAuthInstallBasebandApplyTssOverrides_cold_4(&local_38);
  }
  lVar5 = 0;
LAB_001a363c:
  _SafeRelease(lVar5);
  _SafeRelease(local_40);
  _SafeRelease(local_38);
  _BbfwReaderClose(lVar3);
  return iVar1;
}

