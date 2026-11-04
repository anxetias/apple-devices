// rea decompile_all
// name: _AppURLFromExtractedPayloadDir
// address: 0x43ae5
// body: available
// range: 0x43ae5-0x43e4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e45 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43e4a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AppURLFromExtractedPayloadDir(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_148;
  long lStack_140;
  long *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  char *local_f8;
  long local_f0;
  undefined8 *local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)();
  local_100 = 0;
  uVar5 = _IXUrlsForItemsInDirectoryAtURL(uVar4,1,&local_100);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = (*(code *)puVar1)(local_100);
  local_c0 = uVar4;
  if (lVar6 != 0) {
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = (long *)0x0;
    uStack_130 = 0;
    local_148 = 0;
    lStack_140 = 0;
    local_e8 = param_2;
    local_d8 = lVar6;
    local_d0 = uVar5;
    local_c8 = (*(code *)PTR__objc_retain_004410a8)(lVar6);
    local_e0 = (*(code *)PTR__objc_msgSend_00441098)
                         (local_c8,"countByEnumeratingWithState:objects:count:",&local_148,local_b8,
                          0x10);
    if (local_e0 != 0) {
      local_f0 = *local_138;
      do {
        local_f8 = "pathExtension";
        lVar6 = 0;
        do {
          if (*local_138 != local_f0) {
            _objc_enumerationMutation(local_c8);
          }
          puVar1 = PTR__objc_msgSend_00441098;
          uVar5 = *(undefined8 *)(lStack_140 + lVar6 * 8);
          uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,local_f8);
          uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
          cVar3 = (*(code *)puVar1)(uVar4,"isEqualToString:",&cf_app);
          (*(code *)PTR__objc_release_004410a0)(uVar4);
          if (cVar3 != '\0') {
            lVar7 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
            (*(code *)PTR__objc_release_004410a0)(local_c8);
            uVar5 = local_d0;
            uVar4 = local_c0;
            lVar6 = local_d8;
            if (lVar7 != 0) goto LAB_00043e04;
            goto LAB_00043ce9;
          }
          lVar6 = lVar6 + 1;
        } while (local_e0 != lVar6);
        local_e0 = (*(code *)PTR__objc_msgSend_00441098)
                             (local_c8,"countByEnumeratingWithState:objects:count:",&local_148,
                              local_b8,0x10);
        uVar4 = local_c0;
      } while (local_e0 != 0);
    }
    (*(code *)PTR__objc_release_004410a0)(local_c8);
LAB_00043ce9:
    uVar5 = _IXGetLoggingHandle(_kIXLoggingSubsystem);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
    puVar1 = PTR__objc_msgSend_00441098;
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"path");
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar5);
    __os_log_internal(0,uVar8,0x10,
                      "%s: Failed to find a \".app\" inside the extracted contents at %@ : %@",
                      "AppURLFromExtractedPayloadDir",uVar4,0);
    uVar5 = local_c0;
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar4);
    (*(code *)puVar2)(uVar8);
    uVar5 = (*(code *)puVar1)(uVar5,"path");
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = __CreateError("AppURLFromExtractedPayloadDir",0x70,&cf_IXErrorDomain,10,0,0,
                          &cf_Failedtofinda__app_insidetheextractedcontentsat__,uVar4);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar2)(uVar4);
    (*(code *)puVar2)(local_d0);
    param_2 = local_e8;
    lVar6 = local_d8;
  }
  if (param_2 == (undefined8 *)0x0) {
    lVar7 = 0;
  }
  else {
    uVar5 = _objc_retainAutorelease(uVar5);
    *param_2 = uVar5;
    lVar7 = 0;
  }
LAB_00043e04:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(local_c0);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(lVar7);
  return;
}

