// rea decompile_all
// name: _Ace3RestoreInfoCreateRequest
// address: 0x188713
// body: available
// range: 0x188713-0x188a38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_Ace3RestoreInfoCreateRequest
          (undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  bool bVar10;
  char local_31;
  
  lVar3 = _SoCUpdaterExecCommandDynamic
                    (&cf__usr_lib_updaters_libAce3Updater_dylib,param_2,param_3,
                     &cf_generateMeasurements,param_1,param_4);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    local_31 = '\0';
    bVar2 = _queryNumUpdatableUSBCPortControllers(&local_31,param_2,param_3);
    if (local_31 == '\0') {
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                        (&_OBJC_CLASS___NSString,"stringWithFormat:",
                         &cf_NumberofupdatableUSBPortControllers__u,bVar2);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar4 = _objc_retainAutorelease(uVar4);
      uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"UTF8String");
      (*param_2)(param_3,uVar5);
      puVar1 = PTR__objc_msgSend_00441098;
      (*(code *)PTR__objc_release_004410a0)(uVar4);
      uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableDictionary,"dictionaryWithDictionary:",lVar3
                               );
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      if (bVar2 != 0) {
        uVar9 = 1;
        do {
          puVar1 = PTR__objc_msgSend_00441098;
          uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                            (&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_CheckingLUN_d,uVar9);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          uVar5 = _objc_retainAutorelease(uVar5);
          uVar6 = (*(code *)puVar1)(uVar5,"UTF8String");
          (*param_2)(param_3,uVar6);
          (*(code *)PTR__objc_release_004410a0)(uVar5);
          uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s_d__s,
                                    "USBPortController",uVar9,"Nonce");
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          uVar6 = (*(code *)puVar1)(uVar4,"objectForKeyedSubscript:",uVar5);
          lVar3 = _objc_retainAutoreleasedReturnValue(uVar6);
          if (lVar3 != 0) {
            uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_oldnonce__,
                                      lVar3);
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            uVar6 = _objc_retainAutorelease(uVar6);
            uVar7 = (*(code *)puVar1)(uVar6,"UTF8String");
            (*param_2)(param_3,uVar7);
            (*(code *)PTR__objc_release_004410a0)(uVar6);
            uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSMutableData,"dataWithData:",lVar3);
            uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
            _verifyUSBCPortControllerNonceHash(uVar6,uVar9 & 0xff,param_2,param_3);
            uVar7 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_newnonce__,
                                      uVar6);
            uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
            uVar7 = _objc_retainAutorelease(uVar7);
            uVar8 = (*(code *)PTR__objc_msgSend_00441098)(uVar7,"UTF8String");
            (*param_2)(param_3,uVar8);
            puVar1 = PTR__objc_release_004410a0;
            (*(code *)PTR__objc_release_004410a0)(uVar7);
            (*(code *)PTR__objc_msgSend_00441098)(uVar4,"setObject:forKeyedSubscript:",uVar6,uVar5);
            (*(code *)puVar1)(uVar6);
          }
          puVar1 = PTR__objc_release_004410a0;
          (*(code *)PTR__objc_release_004410a0)(lVar3);
          (*(code *)puVar1)(uVar5);
          bVar10 = uVar9 != bVar2;
          uVar9 = uVar9 + 1;
        } while (bVar10);
      }
    }
    else {
      uVar4 = _CFRetain(lVar3);
    }
  }
  return uVar4;
}

