// rea decompile_all
// name: PS190TatsuRequestCreatorBackDeploy::parseOptions:
// address: 0x243cac
// body: available
// range: 0x243cac-0x243efd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x243ef9 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char PS190TatsuRequestCreatorBackDeploy::parseOptions_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"objectForKeyedSubscript:",&cf_FirmwareData);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSDictionary,"class");
  cVar2 = (*(code *)puVar1)(uVar4,"isKindOfClass:",uVar5);
  if (cVar2 == '\0') {
    cVar2 = '\0';
    (*(code *)PTR__objc_msgSend_00441098)
              (param_1,"log:",&cf__s_Unabletolocatefirmwaredictionary,
               "-[PS190TatsuRequestCreatorBackDeploy parseOptions:]");
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"objectForKeyedSubscript:",&cf_FirmwareData)
    ;
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
    lVar7 = _firmwareData;
    uVar5 = *(undefined8 *)(param_1 + _firmwareData);
    *(undefined8 *)(param_1 + _firmwareData) = uVar6;
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    if (*(long *)(param_1 + lVar7) == 0) {
      cVar2 = '\0';
      (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Unabletolocatefirmwaredata);
    }
    else {
      uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"objectForKeyedSubscript:",&cf_DeviceInfo)
      ;
      lVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
      if (lVar7 == 0) {
        cVar2 = '\0';
        (*(code *)PTR__objc_msgSend_00441098)(param_1,"log:",&cf_Failedtolocatedeviceinfo);
      }
      else {
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                          (lVar7,"objectForKeyedSubscript:",&cf_InfoArray);
        lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
        if (lVar8 == 0) {
          local_40 = lVar7;
          uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                            (&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_40,1);
          uVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
          uVar5 = *(undefined8 *)(param_1 + _deviceInfoArray);
          *(undefined8 *)(param_1 + _deviceInfoArray) = uVar6;
          (*(code *)PTR__objc_release_004410a0)(uVar5);
        }
        else {
          _objc_storeStrong(_deviceInfoArray + param_1,lVar8);
        }
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar7,"objectForKeyedSubscript:",&cf_APInfo);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
        uVar5 = *(undefined8 *)(param_1 + _apParameters);
        *(undefined8 *)(param_1 + _apParameters) = uVar6;
        puVar1 = PTR__objc_release_004410a0;
        (*(code *)PTR__objc_release_004410a0)(uVar5);
        (*(code *)puVar1)(lVar8);
        cVar2 = '\x01';
      }
      (*(code *)PTR__objc_release_004410a0)(lVar7);
    }
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar1)(uVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return cVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

