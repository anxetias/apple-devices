// rea decompile_all
// name: __AMDRemotePairingUSBMuxDisabled
// address: 0x16c981
// body: available
// range: 0x16c981-0x16ca55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMDRemotePairingUSBMuxDisabled(void)

{
  undefined *puVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_R14;
  ulong uVar7;
  
  pcVar3 = _getenv("MOBILEDEVICE_USBMUX_DISABLED");
  if (pcVar3 == (char *)0x0) {
    uVar4 = _objc_alloc(&_OBJC_CLASS___NSUserDefaults);
    puVar1 = PTR__objc_msgSend_00441098;
    uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                      (uVar4,"persistentDomainForName:",&cf_com_apple_MobileDevice);
    lVar6 = (*(code *)puVar1)(uVar5,"objectForKeyedSubscript:",&cf_USBMuxDisabled);
    if (lVar6 != 0) {
      uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
      cVar2 = (*(code *)puVar1)(lVar6,"isKindOfClass:",uVar5);
      if (cVar2 != '\0') {
        cVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"boolValue");
        uVar7 = CONCAT71((int7)((ulong)lVar6 >> 8),cVar2 != '\0');
        goto LAB_0016ca3f;
      }
    }
    uVar7 = 0;
  }
  else {
    if (*pcVar3 == '1') {
      uVar7 = CONCAT71((int7)((ulong)unaff_R14 >> 8),pcVar3[1] == '\0');
    }
    else {
      uVar7 = 0;
    }
    uVar4 = 0;
  }
LAB_0016ca3f:
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  return uVar7 & 0xffffffff;
}

