// rea decompile_all
// name: ___isPlatformOrVariantPlatformVersionAtLeast
// address: 0xfec20
// body: available
// range: 0xfec20-0xfedd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfedce to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
___isPlatformOrVariantPlatformVersionAtLeast
          (int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,uint param_7,
          uint param_8)

{
  int iVar1;
  undefined1 uVar2;
  bool bVar3;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (_DispatchOnceCounter != -1) {
    ___isPlatformOrVariantPlatformVersionAtLeast_cold_1();
  }
  if (_AvailabilityVersionCheck != 0) {
    local_44 = param_4 & 0xff | (param_3 & 0xff) << 8 | param_2 << 0x10;
    local_3c = param_8 & 0xff | (param_7 & 0xff) << 8 | param_6 << 0x10;
    local_48 = param_1;
    local_40 = param_5;
    uVar2 = __availability_version_check(2,&local_48);
    goto LAB_000fec9c;
  }
  if (param_1 == 1) {
    if (_CompatibilityDispatchOnceCounter == -1) {
      iVar1 = _GlobalMajor - param_2;
    }
    else {
      ___isPlatformOrVariantPlatformVersionAtLeast_cold_4();
      iVar1 = _GlobalMajor - param_2;
    }
    uVar2 = 1;
    if (param_2 < _GlobalMajor) goto LAB_000fec9c;
    uVar2 = 1;
    if (SBORROW4(_GlobalMajor,param_2) == iVar1 < 0) {
      if ((int)param_3 < _GlobalMinor) goto LAB_000fec9c;
      if ((int)param_3 <= _GlobalMinor) {
        uVar2 = (int)param_4 <= _GlobalSubminor;
        goto LAB_000fec9c;
      }
    }
  }
  else {
    if (param_5 == 1) {
      if (_CompatibilityDispatchOnceCounter != -1) goto LAB_000fedb0;
      uVar2 = 1;
      bVar3 = SBORROW4(_GlobalMajor,param_6);
      iVar1 = _GlobalMajor - param_6;
      if (param_6 < _GlobalMajor) goto LAB_000fec9c;
    }
    else {
      ___isPlatformOrVariantPlatformVersionAtLeast_cold_2();
LAB_000fedb0:
      ___isPlatformOrVariantPlatformVersionAtLeast_cold_3();
      uVar2 = 1;
      bVar3 = SBORROW4(_GlobalMajor,param_6);
      iVar1 = _GlobalMajor - param_6;
      if (param_6 < _GlobalMajor) goto LAB_000fec9c;
    }
    uVar2 = 1;
    if (bVar3 == iVar1 < 0) {
      if ((int)param_7 < _GlobalMinor) goto LAB_000fec9c;
      if ((int)param_7 <= _GlobalMinor) {
        uVar2 = (int)param_8 <= _GlobalSubminor;
        goto LAB_000fec9c;
      }
    }
  }
  uVar2 = 0;
LAB_000fec9c:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

