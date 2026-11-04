// rea decompile_all
// name: MDRemotePairingBrowser::deviceLacksLockdown:
// address: 0x1442f8
// body: available
// range: 0x1442f8-0x1444d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

bool MDRemotePairingBrowser::deviceLacksLockdown_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  if (_deviceLacksLockdown__onceToken != -1) {
    _dispatch_once(&_deviceLacksLockdown__onceToken,&___block_literal_global_160);
  }
  lVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"deviceKVS");
  if (lVar3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar6 = "Invalid device key-value store. Cannot infer lockdown support.";
    uVar5 = 1;
  }
  else {
    lVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (lVar3,"getValueWithDomain:key:",0,&cf_DeviceSupportsLockdown);
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar4 != 0) {
      uVar5 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"class");
      cVar2 = (*(code *)puVar1)(lVar4,"isKindOfClass:",uVar5);
      if (cVar2 != '\0') {
        cVar2 = (*(code *)PTR__objc_msgSend_00441098)(lVar4,"boolValue");
        return (bool)CONCAT71(0x43b5,cVar2 == '\0');
      }
    }
    lVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar3,"getValueWithDomain:key:",0,&cf_DeviceClass)
    ;
    if (lVar3 != 0) {
      cVar2 = (*(code *)PTR__objc_msgSend_00441098)
                        (_deviceLacksLockdown__ignoredDeviceClasses,"containsObject:",lVar3);
      if (cVar2 != '\0') {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,2,"Device class does not support lockdown: \'%@\'.",lVar3);
        return 0;
      }
      return 0x43b501;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar6 = "Failed to read device class from device.";
    uVar5 = 0x10;
  }
  __os_log_internal(0,_md_log_log,uVar5,pcVar6);
  return 0;
}

