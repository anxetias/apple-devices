// rea decompile_all
// name: _SoCUpdaterExecCommandDynamic
// address: 0x1883a9
// body: available
// range: 0x1883a9-0x1885c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_SoCUpdaterExecCommandDynamic
          (undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  local_58 = param_5;
  local_40 = param_4;
  local_38 = param_6;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)();
  puVar1 = PTR__objc_msgSend_00441098;
  local_60 = 0;
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s_DylibPath___,
                     "CFDictionaryRef  _Nullable SoCUpdaterExecCommandDynamic(NSString *__strong _Nullable, SoCUpdaterLogSinkFunction _Nonnull, void * _Nonnull, CFStringRef _Nonnull, CFDictionaryRef _Nonnull, CFErrorRef * _Nullable)"
                     ,uVar4);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = _objc_retainAutorelease(uVar5);
  uVar5 = (*(code *)puVar1)(uVar6,"UTF8String");
  local_50 = param_2;
  local_48 = param_3;
  (*param_2)(param_3,uVar5);
  uVar5 = local_58;
  (*(code *)PTR__objc_release_004410a0)(uVar6);
  uVar6 = _CFDictionaryGetValue(uVar5,&cf_DeviceInfo);
  lVar7 = _CFDictionaryGetValue(uVar6,&cf_UpdaterRef);
  if (lVar7 != 0) {
    lVar8 = (*(code *)PTR__objc_retain_004410a8)(uVar4);
    if (lVar8 == 0) {
      uVar5 = 5;
    }
    else {
      uVar6 = _objc_retainAutorelease(lVar8);
      uVar9 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"UTF8String");
      lVar10 = _dlopen(uVar9,1);
      if (lVar10 == 0) {
        uVar5 = 9;
      }
      else {
        pcVar11 = (code *)_dlsym(lVar10,"UARPSoCUpdaterExecCommand");
        if (pcVar11 != (code *)0x0) {
          (*(code *)PTR__objc_release_004410a0)(uVar6);
          uVar3 = (*pcVar11)(lVar7,local_40,uVar5,&local_60,local_38);
          puVar1 = PTR__objc_msgSend_00441098;
          uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                            (&_OBJC_CLASS___NSString,"stringWithFormat:",
                             &cf_result__doutput___updater___,uVar3,local_60,lVar7);
          uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
          uVar5 = _objc_retainAutorelease(uVar5);
          uVar6 = (*(code *)puVar1)(uVar5,"UTF8String");
          (*local_50)(local_48,uVar6);
          (*(code *)PTR__objc_release_004410a0)(uVar5);
          uVar5 = local_60;
          goto LAB_001885a8;
        }
        uVar5 = 0xe;
      }
    }
    puVar2 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      uVar5 = _CFErrorCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,
                             *(undefined8 *)PTR__kCFErrorDomainPOSIX_00441140,uVar5,0);
      *puVar2 = uVar5;
    }
    (*(code *)PTR__objc_release_004410a0)(lVar8);
  }
  uVar5 = 0;
LAB_001885a8:
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  return uVar5;
}

