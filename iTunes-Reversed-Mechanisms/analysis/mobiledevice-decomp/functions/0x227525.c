// rea decompile_all
// name: _TSSRequestWithSigningServer
// address: 0x227525
// body: available
// range: 0x227525-0x2278ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x22788a to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2278b6 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _TSSRequestWithSigningServer(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  cfstringStruct *local_4a;
  long local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)();
  uVar5 = (*(code *)puVar1)(param_2);
  uVar6 = _TSSRequestLogToken();
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar2 = _os_log_type_enabled(uVar6,1);
  if (cVar2 != '\0') {
    local_58 = 0x8420102;
    local_54 = uVar5;
    __os_log_impl(0,uVar6,1,"UARP: TSS request to signing server %{public}@",&local_58,0xc);
  }
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  _AMAuthInstallLogSetHandler(_TSSRequestPersonalizationLogger);
  lVar7 = _AMAuthInstallCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
  if (lVar7 == 0) {
    uVar6 = _TSSRequestLogToken();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      _TSSRequestWithSigningServer_cold_3(uVar6);
    }
    (*(code *)PTR__objc_release_004410a0)(uVar6);
  }
  else {
    iVar3 = _AMAuthInstallSetSigningServerURL(lVar7,uVar5);
    uVar6 = _TSSRequestLogToken();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    if (iVar3 == 0) {
      cVar2 = _os_log_type_enabled(uVar6,1);
      pcVar8 = &cf_space_s_;
      if (cVar2 != '\0') {
        local_4a = &cf_space_s_;
        if (param_3 == '\x01') {
          local_4a = &cf_<AppleConnect>;
        }
        local_58 = 0x8420202;
        local_4c = 0x842;
        local_54 = uVar5;
        __os_log_impl(0,uVar6,1,"UARP: TSS Request %{public}@%{public}@ is ",&local_58,0x16);
      }
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      uVar6 = _TSSRequestLogToken();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar2 = _os_log_type_enabled(uVar6,1);
      if (cVar2 != '\0') {
        local_58 = 0x8420102;
        local_54 = uVar5;
        __os_log_impl(0,uVar6,1,"UARP: %{public}@",&local_58,0xc);
      }
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      iVar3 = _AMAuthInstallApCreatePersonalizedResponse(lVar7,uVar4);
      uVar6 = _TSSRequestLogToken();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar2 = _os_log_type_enabled(uVar6,1);
      if (cVar2 != '\0') {
        if (param_3 == '\x01') {
          pcVar8 = &cf_<AppleConnect>;
        }
        local_58 = 0x8420202;
        local_4c = 0x842;
        local_54 = uVar5;
        local_4a = pcVar8;
        __os_log_impl(0,uVar6,1,"UARP: TSS Response %{public}@%{public}@ is ",&local_58,0x16);
      }
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      uVar6 = _TSSRequestLogToken();
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar2 = _os_log_type_enabled(uVar6,1);
      if (cVar2 != '\0') {
        local_58 = 0x8420102;
        local_54 = 0;
        __os_log_impl(0,uVar6,1,"UARP: %{public}@",&local_58,0xc);
      }
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      if (iVar3 != 0) {
        uVar6 = _TSSRequestLogToken();
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          _TSSRequestWithSigningServer_cold_2(iVar3,uVar6);
        }
        (*(code *)PTR__objc_release_004410a0)(uVar6);
      }
      _CFRelease(lVar7);
    }
    else {
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        _TSSRequestWithSigningServer_cold_1(uVar6);
      }
      (*(code *)PTR__objc_release_004410a0)(uVar6);
      _CFRelease(lVar7);
    }
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  (*(code *)puVar1)(uVar4);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return;
}

