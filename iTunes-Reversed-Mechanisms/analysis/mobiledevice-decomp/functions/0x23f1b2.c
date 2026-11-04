// rea decompile_all
// name: UARPMetaDataTLVBackDeploy::tlvTypeName:
// address: 0x23f1b2
// body: available
// range: 0x23f1b2-0x23f3dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x23f3d4 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x23f3d9 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x14 bytes */

ID UARPMetaDataTLVBackDeploy::tlvTypeName_(ID param_1,SEL param_2,unsigned_int param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  long lVar7;
  undefined8 local_138;
  long lStack_130;
  long *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  char *local_f8;
  char *local_f0;
  long local_e8;
  cfstringStruct *local_e0;
  char *local_d8;
  long local_d0;
  unsigned_int local_c4;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar1 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_138 = 0;
  lStack_130 = 0;
  local_128 = (long *)0x0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_c4 = param_3;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                    (&objc::class_t::UARPMetaDataTLVBackDeploy,"metaDataTable");
  local_c0 = _objc_retainAutoreleasedReturnValue(uVar3);
  local_d0 = (*(code *)puVar1)(local_c0,"countByEnumeratingWithState:objects:count:",&local_138,
                               local_b8,0x10);
  if (local_d0 != 0) {
    local_e8 = *local_128;
    local_e0 = &cf_Value;
    do {
      local_d8 = "objectForKeyedSubscript:";
      local_f8 = "numberWithUnsignedInt:";
      local_f0 = "isEqual:";
      lVar7 = 0;
      do {
        if (*local_128 != local_e8) {
          _objc_enumerationMutation(local_c0);
        }
        puVar1 = PTR__objc_msgSend_00441098;
        uVar3 = *(undefined8 *)(lStack_130 + lVar7 * 8);
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,local_d8,local_e0);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,local_f8,local_c4);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        cVar2 = (*(code *)puVar1)(uVar4,local_f0,uVar5);
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar5);
        (*(code *)puVar1)(uVar4);
        if (cVar2 != '\0') {
          uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,local_d8,&cf_Name);
          uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
          goto LAB_0023f3a3;
        }
        lVar7 = lVar7 + 1;
      } while (local_d0 != lVar7);
      local_d0 = (*(code *)PTR__objc_msgSend_00441098)
                           (local_c0,"countByEnumeratingWithState:objects:count:",&local_138,
                            local_b8,0x10);
    } while (local_d0 != 0);
  }
  uVar3 = 0;
LAB_0023f3a3:
  (*(code *)PTR__objc_release_004410a0)(local_c0);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    IVar6 = _objc_autoreleaseReturnValue(uVar3);
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

