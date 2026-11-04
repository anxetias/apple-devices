// rea decompile_all
// name: _AMAuthInstallApImg4AddDictionaryProperty
// address: 0x1a220a
// body: available
// range: 0x1a220a-0x1a2360 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a235c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallApImg4AddDictionaryProperty(long param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  size_t sVar5;
  undefined8 uVar6;
  char local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar4 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar4 = _DEREncoderCreate(0);
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      cVar1 = _CFStringGetCString(param_3,local_138,0x100,0x8000100);
      if (cVar1 != '\0') {
        sVar5 = _strlen(local_138);
        iVar2 = _DEREncoderAddData(lVar4,0,0x16,local_138,sVar5 & 0xffffffff,0);
        if (iVar2 != 0) {
          _AMAuthInstallLog(3,"AMAuthInstallApImg4AddDictionaryProperty","failed to add %@ string",
                            param_3);
          goto LAB_001a2334;
        }
      }
      iVar2 = _DEREncoderAddSetFromEncoder(param_1,lVar4);
      if (iVar2 == 0) {
        uVar3 = _AMAuthInstallApImg4GetTagAsInteger(param_3);
        iVar2 = _DEREncoderAddPrivateFromEncoder(lVar4,param_2,uVar3);
        uVar6 = 0;
        if (iVar2 == 0) goto LAB_001a22d8;
        _AMAuthInstallApImg4AddDictionaryProperty_cold_2();
      }
      else {
        _AMAuthInstallApImg4AddDictionaryProperty_cold_1();
      }
    }
  }
LAB_001a2334:
  uVar6 = 3;
  _AMAuthInstallLog(3,"AMAuthInstallApImg4AddDictionaryProperty","%s failed to create DER file");
LAB_001a22d8:
  _DEREncoderDestroy(lVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

