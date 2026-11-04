// rea decompile_all
// name: _AMAuthInstallBasebandICE3StitchFlashPsi
// address: 0x27f8fa
// body: available
// range: 0x27f8fa-0x27fa59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandICE3StitchFlashPsi
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_58 = 0;
  local_40 = 0;
  uVar2 = 0;
  iVar1 = 0;
  lVar4 = 0;
  if (*(long *)(*(long *)(param_1 + 0x30) + 0x18) != 0) {
    local_50 = param_3;
    local_48 = param_4;
    uVar2 = _CFGetAllocator();
    lVar4 = _FlsParserCreate(uVar2);
    if (lVar4 == 0) {
      iVar1 = 2;
      uVar2 = 0;
      lVar4 = 0;
    }
    else {
      iVar1 = _FlsParserReadFromData(lVar4,param_2);
      if (iVar1 == 0) {
        uVar2 = 0;
        iVar1 = _FlsParserCopyFlashPsi(lVar4,&local_38,0);
        if (iVar1 == 0) {
          _AMAuthInstallDebugWriteObject(param_1,local_38,&cf_FlashPsi_Original,1);
          iVar1 = __AMAuthInstallBasebandStitchICE3Psi
                            (param_1,local_38,local_50,&cf_FlashPSI_Blob,&local_58);
          uVar2 = local_58;
          if (iVar1 == 0) {
            _AMAuthInstallDebugWriteObject(param_1,local_58,&cf_FlashPsi_Personalized,1);
            iVar1 = _FlsParserReplaceFlashPsi(lVar4,uVar2);
            if ((iVar1 == 0) && (iVar1 = _FlsParserCopyAsData(lVar4,&local_40), iVar1 == 0)) {
              uVar3 = _CFRetain(local_40);
              *local_48 = uVar3;
              iVar1 = 0;
            }
          }
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  _SafeRelease(lVar4);
  _SafeRelease(local_38);
  _SafeRelease(uVar2);
  _SafeRelease(local_40);
  return iVar1;
}

