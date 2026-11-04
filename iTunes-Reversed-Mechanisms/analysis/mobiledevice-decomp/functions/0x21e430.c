// rea decompile_all
// name: ACFUFirmware::openFirmwareInRestoreOptions
// address: 0x21e430
// body: available
// range: 0x21e430-0x21e4df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFirmware::openFirmwareInRestoreOptions(__CFDictionary const*) */

undefined8 __thiscall
ACFUFirmware::openFirmwareInRestoreOptions(ACFUFirmware *this,__CFDictionary *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  lVar2 = _CFDictionaryGetValue(param_1,*(undefined8 *)(this + 0x48));
  if (lVar2 == 0) {
    uVar6 = 0x3e9;
    pcVar7 = "%s::%s: Manifest is not available\n";
  }
  else {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFDataGetTypeID();
    if (lVar3 == lVar4) {
      (**(code **)(*(long *)this + 0x48))(this,lVar2);
      cVar1 = (**(code **)(*(long *)this + 0x40))(this);
      if (cVar1 != '\0') {
        return 0;
      }
      uVar6 = 0x3f5;
      pcVar7 = "%s::%s: Failed to measure firmware\n";
    }
    else {
      uVar6 = 0xfa2;
      pcVar7 = "%s::%s: Manifest is not present in expected data type\n";
    }
  }
  uVar5 = ACFULogging::getLogInstance();
  ACFULogging::handleMessage(uVar5,2,pcVar7,"ACFUFirmware","openFirmwareInRestoreOptions");
  return uVar6;
}

