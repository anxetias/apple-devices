// rea decompile_all
// name: UARPSuperBinaryBackDeploy::requiredTSSOptions
// address: 0x22f1e2
// body: available
// range: 0x22f1e2-0x22f508 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x22f4ff to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x22f504 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID UARPSuperBinaryBackDeploy::requiredTSSOptions(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  long lVar8;
  char *pcVar9;
  undefined8 local_148;
  long lStack_140;
  long *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  char *local_100;
  char *local_f8;
  long local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c8 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableArray,"new");
  local_148 = 0;
  lStack_140 = 0;
  local_138 = (long *)0x0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_c0 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(param_1 + 0x40));
  local_d0 = (*(code *)puVar1)(local_c0,"countByEnumeratingWithState:objects:count:",&local_148,
                               local_b8,0x10);
  puVar2 = PTR__objc_release_004410a0;
  if (local_d0 != 0) {
    local_f0 = *local_138;
    do {
      local_100 = "class";
      local_f8 = "isKindOfClass:";
      pcVar9 = "tssOption";
      local_e8 = "numberWithUnsignedLong:";
      local_e0 = "addObject:";
      lVar8 = 0;
      local_d8 = "tssOption";
      do {
        if (*local_138 != local_f0) {
          _objc_enumerationMutation(local_c0);
        }
        uVar6 = *(undefined8 *)(lStack_140 + lVar8 * 8);
        uVar5 = (*(code *)puVar1)(&objc::class_t::UARPTLVRequiredPersonalizationOptionBackDeploy,
                                  local_100);
        cVar3 = (*(code *)puVar1)(uVar6,local_f8,uVar5);
        if (cVar3 != '\0') {
          uVar6 = (*(code *)PTR__objc_retain_004410a8)(uVar6);
          iVar4 = (*(code *)puVar1)(uVar6,pcVar9);
          uVar5 = 4;
          if (iVar4 == -0x774d6efc) {
LAB_0022f43c:
            uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,local_e8,uVar5);
            uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
            (*(code *)puVar1)(local_c8,local_e0,uVar5);
            pcVar9 = local_d8;
            (*(code *)puVar2)(uVar5);
          }
          else {
            iVar4 = (*(code *)puVar1)(uVar6,pcVar9,4);
            uVar5 = 5;
            if (iVar4 == -0x774d6efb) goto LAB_0022f43c;
            iVar4 = (*(code *)puVar1)(uVar6,pcVar9,5);
            uVar5 = 7;
            if (iVar4 == -0x774d6efa) goto LAB_0022f43c;
            iVar4 = (*(code *)puVar1)(uVar6,pcVar9,7);
            uVar5 = 0x1d;
            if (iVar4 == -0x774d6ecb) goto LAB_0022f43c;
            iVar4 = (*(code *)puVar1)(uVar6,pcVar9,0x1d);
            uVar5 = 0x18;
            if (iVar4 == -0x774d6ef9) goto LAB_0022f43c;
            iVar4 = (*(code *)puVar1)(uVar6,pcVar9,0x18);
            uVar5 = 8;
            if (iVar4 == -0x774d6ef7) goto LAB_0022f43c;
            iVar4 = (*(code *)puVar1)(uVar6,pcVar9,8);
            uVar5 = 9;
            if (iVar4 == -0x774d6ef6) goto LAB_0022f43c;
            iVar4 = (*(code *)puVar1)(uVar6,pcVar9,9);
            uVar5 = 10;
            if (iVar4 == -0x774d6ef5) goto LAB_0022f43c;
            iVar4 = (*(code *)puVar1)(uVar6,pcVar9,10);
            uVar5 = 0x19;
            if (iVar4 == -0x774d6ecf) goto LAB_0022f43c;
            iVar4 = (*(code *)puVar1)(uVar6,pcVar9,0x19);
            uVar5 = 0x1a;
            if (iVar4 == -0x774d6ece) goto LAB_0022f43c;
            iVar4 = (*(code *)puVar1)(uVar6,pcVar9,0x1a);
            uVar5 = 0x1b;
            if (iVar4 == -0x774d6ecd) goto LAB_0022f43c;
          }
          (*(code *)puVar2)(uVar6);
        }
        lVar8 = lVar8 + 1;
      } while (local_d0 != lVar8);
      local_d0 = (*(code *)puVar1)(local_c0,"countByEnumeratingWithState:objects:count:",&local_148,
                                   local_b8,0x10);
    } while (local_d0 != 0);
  }
  (*(code *)PTR__objc_release_004410a0)(local_c0);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    IVar7 = _objc_autoreleaseReturnValue(local_c8);
    return IVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

