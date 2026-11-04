// rea decompile_all
// name: _AMAuthInstallApImg4LocalCreateEncodedTag
// address: 0x1a2d33
// body: available
// range: 0x1a2d33-0x1a2e76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a2e72 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallApImg4LocalCreateEncodedTag(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined4 local_134;
  undefined8 local_130;
  char local_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  local_130 = 0;
  if (param_1 == 0) {
    _AMAuthInstallApImg4LocalCreateEncodedTag_cold_2();
LAB_001a2e37:
    lVar3 = 0;
  }
  else {
    cVar1 = _CFStringGetCString(param_1,local_128,0x100,0x8000100);
    if (cVar1 == '\0') {
      _AMAuthInstallApImg4LocalCreateEncodedTag_cold_3();
      goto LAB_001a2e37;
    }
    lVar3 = _DEREncoderCreate(0);
    if (lVar3 == 0) goto LAB_001a2e37;
    sVar4 = _strlen(local_128);
    iVar2 = _DEREncoderAddData(lVar3,0,0x16,local_128,sVar4 & 0xffffffff,0);
    if (iVar2 == 0) {
      iVar2 = _DEREncoderCreateEncodedBuffer(lVar3,&local_130,&local_134);
      if (iVar2 == 0) {
        uVar5 = _CFDataCreate(0,local_130,local_134);
        goto LAB_001a2dfd;
      }
      _AMAuthInstallApImg4LocalCreateEncodedTag_cold_1();
    }
    else {
      _AMAuthInstallLog(3,"AMAuthInstallApImg4LocalCreateEncodedTag","failed to add %@ string",
                        param_1);
    }
  }
  uVar5 = 0;
  _SafeRelease(0);
LAB_001a2dfd:
  _SafeFree(local_130);
  _DEREncoderDestroy(lVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

