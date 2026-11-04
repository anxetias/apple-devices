// rea decompile_all
// name: ACFUFirmware::saveFirmware
// address: 0x21e3b2
// body: available
// range: 0x21e3b2-0x21e42e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFirmware::saveFirmware() */

undefined8 __thiscall ACFUFirmware::saveFirmware(ACFUFirmware *this)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(long *)(this + 0x20) == 0) {
    saveFirmware();
    uVar3 = 1000;
  }
  else if (*(__CFURL **)(this + 0x40) == (__CFURL *)0x0) {
    saveFirmware();
    uVar3 = 0x3f6;
  }
  else {
    cVar1 = ACFUCommon::doesPathExist(*(__CFURL **)(this + 0x40));
    if ((cVar1 == '\0') &&
       (uVar2 = _AMSupportMakeDirectory(*(undefined8 *)(this + 0x40)), uVar2 != 0)) {
      saveFirmware((ACFUFirmware *)(ulong)uVar2);
      return 0x3eb;
    }
    cVar1 = ACFUFile::saveToPath(*(ACFUFile **)(this + 0x20),*(__CFURL **)(this + 0x40));
    uVar3 = 0;
    if (cVar1 == '\0') {
      saveFirmware();
      uVar3 = 0x3ec;
    }
  }
  return uVar3;
}

