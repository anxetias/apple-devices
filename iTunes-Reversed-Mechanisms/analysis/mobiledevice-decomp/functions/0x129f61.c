// rea decompile_all
// name: _AMDeviceMountPersonalizedBundle
// address: 0x129f61
// body: available
// range: 0x129f61-0x12a09b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceMountPersonalizedBundle
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 *param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_38;
  
  local_38 = 0;
  uVar3 = _objc_alloc(&objc::class_t::PersonalizedImage);
  lVar4 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar3,"initWithDevice:bundleURL:imageVariant:options:",param_1,param_2,param_3,
                     param_4);
  if (lVar4 == 0) {
    uVar3 = 0;
    iVar2 = -0x17ffff0f;
    local_38 = _createAndLogError("AMDeviceMountPersonalizedBundle",0x838,0xe80000f1,1,0,
                                  &cf_Failedtoinitializepersonalizedimageobject_);
  }
  else {
    iVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"mountImage:",&local_38);
    if (iVar2 == 0) {
      uVar3 = 0;
      iVar2 = 0;
      goto LAB_0012a070;
    }
    uVar3 = _AMDCopyErrorText(iVar2);
    uVar6 = local_38;
    uVar5 = _AMDErrorString(iVar2);
    local_38 = _createAndLogError("AMDeviceMountPersonalizedBundle",0x83f,iVar2,1,uVar6,
                                  &cf_Errormountingimage_0x_08x__s____,iVar2,uVar5,uVar3);
  }
  if (param_5 != (undefined8 *)0x0) {
    uVar6 = (*(code *)PTR__objc_retain_004410a8)(local_38);
    *param_5 = uVar6;
  }
LAB_0012a070:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_38);
  (*(code *)puVar1)(lVar4);
  (*(code *)puVar1)(uVar3);
  return iVar2;
}

