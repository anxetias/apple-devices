// rea decompile_all
// name: __AMDRemotePairingDiscoveryEnabled
// address: 0x16cec7
// body: available
// range: 0x16cec7-0x16d164 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16d160 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMDRemotePairingDiscoveryEnabled(void)

{
  undefined *puVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 unaff_R15;
  undefined7 uVar11;
  ulong uVar10;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  pcVar3 = _getenv("MOBILEDEVICE_REMOTEXPC_ENABLED");
  uVar11 = (undefined7)((ulong)unaff_R15 >> 8);
  if (pcVar3 != (char *)0x0) {
    if (*pcVar3 == '1') {
      uVar10 = CONCAT71(uVar11,pcVar3[1] == '\0');
    }
    else {
      uVar10 = 0;
    }
LAB_0016cf6f:
    uVar5 = 0;
    lVar4 = 0;
    lVar9 = 0;
    pvVar7 = (void *)0x0;
    goto LAB_0016cf7a;
  }
  lVar4 = _CFPreferencesCopyAppValue
                    (&cf_MobileDeviceRemoteXPCEnabled,
                     *(undefined8 *)PTR__kCFPreferencesCurrentApplication_00441170);
  puVar1 = PTR__objc_msgSend_00441098;
  if (lVar4 != 0) {
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"class");
    cVar2 = (*(code *)puVar1)(lVar4,"isKindOfClass:",uVar5);
    if (cVar2 != '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"boolValue");
      uVar10 = CONCAT71(uVar11,cVar2 != '\0');
      goto LAB_0016cf6f;
    }
  }
  uVar5 = _objc_alloc(&_OBJC_CLASS___NSUserDefaults);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar5,"persistentDomainForName:",&cf_com_apple_MobileDevice);
  lVar4 = (*(code *)puVar1)(uVar6,"objectForKeyedSubscript:",&cf_RemoteXPCEnabled);
  uVar11 = (undefined7)((ulong)puVar1 >> 8);
  if (lVar4 != 0) {
    uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
    cVar2 = (*(code *)puVar1)(lVar4,"isKindOfClass:",uVar6);
    if (cVar2 != '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"boolValue");
      uVar10 = CONCAT71(uVar11,cVar2 != '\0');
      lVar4 = 0;
      lVar9 = 0;
      pvVar7 = (void *)0x0;
      goto LAB_0016cf7a;
    }
  }
  lVar4 = _CFPreferencesCopyValue
                    (&cf_RemoteXPCEnabled,&cf_com_apple_MobileDevice,
                     *(undefined8 *)PTR__kCFPreferencesAnyUser_00441168,
                     *(undefined8 *)PTR__kCFPreferencesCurrentHost_00441178);
  if (lVar4 == 0) {
LAB_0016d0c3:
    local_48 = &cf_Console;
    local_40 = &cf_AccessibilityInspector;
    uVar6 = (*(code *)PTR__objc_msgSend_00441098)
                      (&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_48,2);
    pvVar7 = (void *)_copyProcessName();
    if (pvVar7 != (void *)0x0) {
      uVar8 = _objc_alloc(&_OBJC_CLASS___NSString);
      lVar9 = (*(code *)PTR__objc_msgSend_00441098)(uVar8,"initWithUTF8String:",pvVar7);
      if (lVar9 == 0) {
        uVar10 = 0;
        lVar9 = 0;
      }
      else {
        cVar2 = (*(code *)PTR__objc_msgSend_00441098)(uVar6,"containsObject:",lVar9);
        uVar10 = CONCAT71((int7)((ulong)uVar6 >> 8),cVar2 != '\0');
      }
      goto LAB_0016cf7a;
    }
    uVar10 = 0;
  }
  else {
    uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
    cVar2 = (*(code *)puVar1)(lVar4,"isKindOfClass:",uVar6);
    if (cVar2 == '\0') goto LAB_0016d0c3;
    cVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"boolValue");
    uVar10 = CONCAT71(uVar11,cVar2 != '\0');
  }
  lVar9 = 0;
  pvVar7 = (void *)0x0;
LAB_0016cf7a:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar4);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(lVar9);
  if (pvVar7 != (void *)0x0) {
    _free(pvVar7);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10 & 0xffffffff;
}

