// rea decompile_all
// name: __AMDeviceEqual
// address: 0x12ba45
// body: available
// range: 0x12ba45-0x12bb1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __AMDeviceEqual(long param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = _CFGetTypeID();
  if (__AMDeviceTypeID == 0) {
    __AMDeviceTypeID = __CFRuntimeRegisterClass(&_AMDeviceGetTypeID__AMDeviceClass);
  }
  if (lVar3 == __AMDeviceTypeID) {
    lVar3 = _CFGetTypeID(param_2);
    if (__AMDeviceTypeID == 0) {
      __AMDeviceTypeID = __CFRuntimeRegisterClass(&_AMDeviceGetTypeID__AMDeviceClass);
    }
    puVar1 = PTR__objc_msgSend_00441098;
    if (lVar3 == __AMDeviceTypeID) {
      if ((param_1 == 0) || (*(long *)(param_1 + 0xf8) == 0)) {
        if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
          return 1;
        }
      }
      else {
        uVar5 = *(undefined8 *)(param_2 + 0xf8);
        uVar4 = (*(code *)PTR__objc_msgSend_00441098)(*(long *)(param_1 + 0xf8),"udid");
        uVar5 = (*(code *)puVar1)(uVar5,"udid");
        cVar2 = (*(code *)puVar1)(uVar4,"isEqual:",uVar5);
        if (cVar2 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}

