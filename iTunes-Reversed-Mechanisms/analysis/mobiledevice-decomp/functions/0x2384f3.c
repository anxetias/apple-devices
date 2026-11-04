// rea decompile_all
// name: FTABFileBackDeploy::description
// address: 0x2384f3
// body: available
// range: 0x2384f3-0x2387c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2387bf to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2387c4 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID FTABFileBackDeploy::description(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  undefined8 local_118;
  long lStack_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  char *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableString,"string");
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  if (*(long *)(param_1 + 0x40) == 0) {
    (*(code *)PTR__objc_msgSend_00441098)(uVar2,"appendFormat:",&cf_FTAB_);
  }
  else {
    (*(code *)PTR__objc_msgSend_00441098)(uVar2,"appendFormat:",&cf_FTAB___);
  }
  puVar1 = PTR__objc_msgSend_00441098;
  (*(code *)PTR__objc_msgSend_00441098)
            (uVar2,"appendFormat:",&cf_Generation_0x_08x,*(undefined4 *)(param_1 + 0x28));
  (*(code *)puVar1)(uVar2,"appendFormat:",&cf_Valid__u,*(undefined4 *)(param_1 + 0x2c));
  uVar3 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x48),"byteString");
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar2,"appendFormat:",&cf_BootNonce___,uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  if (*(long *)(param_1 + 0x58) != 0) {
    (*(code *)PTR__objc_msgSend_00441098)(uVar2,"appendFormat:",&cf_Manifest___);
  }
  lVar4 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x10),"count");
  puVar1 = PTR__objc_msgSend_00441098;
  if (lVar4 != 0) {
    (*(code *)PTR__objc_msgSend_00441098)(uVar2,"appendFormat:",&cf_Subfiles_);
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = (long *)0x0;
    uStack_100 = 0;
    local_118 = 0;
    lStack_110 = 0;
    local_c0 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x10));
    lVar4 = (*(code *)puVar1)(local_c0,"countByEnumeratingWithState:objects:count:",&local_118,
                              local_b8,0x10);
    if (lVar4 != 0) {
      local_d8 = *local_108;
      lVar6 = 0;
      do {
        local_d0 = "appendString:";
        lVar7 = 0;
        local_c8 = lVar6;
        do {
          if (*local_108 != local_d8) {
            _objc_enumerationMutation(local_c0);
          }
          uVar3 = *(undefined8 *)(lStack_110 + lVar7 * 8);
          if (-lVar7 != lVar6) {
            (*(code *)PTR__objc_msgSend_00441098)(uVar2,local_d0,&cf_newline_s_);
          }
          (*(code *)PTR__objc_msgSend_00441098)(uVar2,"appendFormat:",&cf___,uVar3);
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
        lVar6 = local_c8 + lVar4;
        lVar4 = (*(code *)PTR__objc_msgSend_00441098)
                          (local_c0,"countByEnumeratingWithState:objects:count:",&local_118,local_b8
                           ,0x10);
      } while (lVar4 != 0);
    }
    (*(code *)PTR__objc_release_004410a0)(local_c0);
  }
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSString,"stringWithString:",uVar2);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    IVar5 = _objc_autoreleaseReturnValue(uVar3);
    return IVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

