// rea decompile_all
// name: _Ace3RestoreInfoCopyFirmware
// address: 0x1885f5
// body: available
// range: 0x1885f5-0x188712 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _Ace3RestoreInfoCopyFirmware
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar3 = _objc_alloc(&objc::class_t::Ace3RestoreInfoFirmwareCopierBackDeploy);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar3,"initWithOptions:logFunction:logContext:",param_1,param_2,param_3);
  local_40 = 0;
  cVar2 = (*(code *)puVar1)(uVar3,"copyFirmwareToDestinationBundleWithError:",&local_40);
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(local_40);
  if (cVar2 == '\0') {
    if (param_4 != (undefined8 *)0x0) {
      uVar5 = (*(code *)PTR__objc_retain_004410a8)(uVar4);
      *param_4 = uVar5;
    }
    lVar6 = 0;
  }
  else {
    local_38 = 0;
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"readFirmwareFileDataWithError:",&local_38);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = (*(code *)PTR__objc_retain_004410a8)(local_38);
    if (lVar6 == 0) {
      if (param_4 != (undefined8 *)0x0) {
        uVar7 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
        *param_4 = uVar7;
      }
    }
    else {
      (*(code *)PTR__objc_retain_004410a8)(lVar6);
    }
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(lVar6);
    (*(code *)puVar1)(uVar5);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar1)(uVar3);
  return lVar6;
}

