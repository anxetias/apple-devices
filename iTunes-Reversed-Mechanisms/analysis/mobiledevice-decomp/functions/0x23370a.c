// rea decompile_all
// name: UARPTLVPersonalizationFTABPayloadBackDeploy::description
// address: 0x23370a
// body: available
// range: 0x23370a-0x233926 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x23391d to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x233922 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID UARPTLVPersonalizationFTABPayloadBackDeploy::description(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ID IVar7;
  long lVar8;
  undefined8 local_108;
  long lStack_100;
  long *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ID local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar2 = PTR__objc_msgSend_00441098;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c0 = param_1;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                    (&objc::class_t::UARPTLVPersonalizationFTABPayloadBackDeploy,
                     "metaDataTableEntry");
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar2)(&_OBJC_CLASS___NSMutableString,"new");
  local_c8 = uVar4;
  uVar4 = (*(code *)puVar2)(uVar4,"objectForKeyedSubscript:",&cf_Name);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar2)(uVar5,"appendFormat:",&cf_<__:,uVar4);
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = (long *)0x0;
  uStack_f0 = 0;
  local_108 = 0;
  lStack_100 = 0;
  local_c0 = (*(code *)PTR__objc_retain_004410a8)(*(undefined8 *)(local_c0 + _tlvs));
  lVar6 = (*(code *)puVar2)(local_c0,"countByEnumeratingWithState:objects:count:",&local_108,
                            local_b8,0x10);
  if (lVar6 != 0) {
    lVar1 = *local_f8;
    do {
      lVar8 = 0;
      do {
        if (*local_f8 != lVar1) {
          _objc_enumerationMutation(local_c0);
        }
        (*(code *)PTR__objc_msgSend_00441098)
                  (uVar5,"appendFormat:",&cf_<__>,*(undefined8 *)(lStack_100 + lVar8 * 8));
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
      lVar6 = (*(code *)PTR__objc_msgSend_00441098)
                        (local_c0,"countByEnumeratingWithState:objects:count:",&local_108,local_b8,
                         0x10);
    } while (lVar6 != 0);
  }
  puVar3 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_c0);
  puVar2 = PTR__objc_msgSend_00441098;
  (*(code *)PTR__objc_msgSend_00441098)(uVar5,"appendFormat:",&cf_>);
  uVar4 = (*(code *)puVar2)(&_OBJC_CLASS___NSString,"stringWithString:",uVar5);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar3)(uVar5);
  (*(code *)puVar3)(local_c8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    IVar7 = _objc_autoreleaseReturnValue(uVar4);
    return IVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

