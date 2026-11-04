// rea decompile_all
// name: PersonalizedImage::copyDeveloperModeState:withError:
// address: 0x1234bc
// body: available
// range: 0x1234bc-0x123642 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

int PersonalizedImage::copyDeveloperModeState_withError_
              (ID param_1,SEL param_2,bool *param_3,ID *param_4)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  int iVar8;
  int local_2c;
  
  local_2c = -0x17ffff0f;
  lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
  if (lVar3 == 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"remoteDevice");
    bVar2 = _AMDeviceRemoteCopyDeveloperModeStatus(uVar4,&local_2c);
    if ((local_2c == -0x17fffff1) || (local_2c == 0)) goto LAB_0012357b;
    local_2c = -0x17fffeeb;
    uVar4 = _AMDCopyErrorText(0xe8000115);
    iVar8 = local_2c;
    uVar5 = _AMDErrorString(local_2c);
    uVar7 = 0x2a8;
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"device");
    bVar2 = _AMDeviceCopyDeveloperModeStatus(uVar4,&local_2c);
    if ((local_2c == -0x17fffff1) || (local_2c == 0)) {
LAB_0012357b:
      if (param_3 != (bool *)0x0) {
        *(byte *)param_3 = local_2c == -0x17fffff1 | bVar2 & 1;
      }
      local_2c = 0;
      uVar4 = 0;
      uVar5 = 0;
      goto LAB_001235f9;
    }
    uVar4 = _AMDCopyErrorText();
    iVar8 = local_2c;
    uVar5 = _AMDErrorString(local_2c);
    uVar7 = 0x2a0;
  }
  uVar5 = _createAndLogError("-[PersonalizedImage copyDeveloperModeState:withError:]",uVar7,iVar8,1,
                             0,&cf_Failedtocopydevelopermodestatus_0x_08x__s____,iVar8,uVar5,uVar4);
LAB_001235f9:
  iVar8 = local_2c;
  if (param_4 != (ID *)0x0 && local_2c != 0) {
    IVar6 = (*(code *)PTR__objc_retain_004410a8)(uVar5);
    *param_4 = IVar6;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  (*(code *)puVar1)(uVar4);
  return (int)(iVar8 != 0);
}

