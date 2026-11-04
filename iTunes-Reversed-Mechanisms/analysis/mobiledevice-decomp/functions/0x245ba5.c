// rea decompile_all
// name: _PS190RestoreInfoCopyFirmware
// address: 0x245ba5
// body: available
// range: 0x245ba5-0x245ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x245ddb to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_PS190RestoreInfoCopyFirmware
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar4 = _objc_alloc(&objc::class_t::PS190RestoreInfoFirmwareCopierBackDeploy);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar4,"initWithOptions:logFunction:logContext:",param_1,param_2,param_3);
  local_90 = 0;
  cVar2 = (*(code *)puVar1)(uVar5,"copyFirmwareToDestinationBundleWithError:",&local_90);
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(local_90);
  if (cVar2 == '\0') {
    if (param_4 != (undefined8 *)0x0) {
      uVar6 = (*(code *)PTR__objc_retain_004410a8)(uVar4);
      *param_4 = uVar6;
    }
    uVar6 = 0;
  }
  else {
    local_88 = 0;
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"readFirmwareFileDataWithError:",&local_88);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_80 = (*(code *)PTR__objc_retain_004410a8)(local_88);
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar7 == 0) {
      if (param_4 != (undefined8 *)0x0) {
        uVar6 = (*(code *)PTR__objc_retain_004410a8)(local_80);
        *param_4 = uVar6;
      }
      uVar6 = 0;
    }
    else {
      local_68 = &cf_FirmwareData;
      local_60 = &cf_BoardID;
      local_70 = lVar7;
      local_50 = lVar7;
      uVar3 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"boardID");
      uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedInt:",uVar3);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_58 = &cf_SecurityDomain;
      local_48 = uVar8;
      uVar3 = (*(code *)puVar1)(uVar5,"securityDomain");
      uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"numberWithUnsignedInt:",uVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_78 = uVar4;
      local_40 = uVar9;
      uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                                &local_50,&local_68,3);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar4 = local_78;
      puVar1 = PTR__objc_release_004410a0;
      (*(code *)PTR__objc_release_004410a0)(uVar9);
      (*(code *)puVar1)(uVar8);
      lVar7 = local_70;
    }
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(lVar7);
    (*(code *)puVar1)(local_80);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar1)(uVar5);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

