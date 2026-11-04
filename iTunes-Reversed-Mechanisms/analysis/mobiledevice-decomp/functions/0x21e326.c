// rea decompile_all
// name: ACFUFirmware::copyFWDataByTag
// address: 0x21e326
// body: available
// range: 0x21e326-0x21e398 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFirmware::copyFWDataByTag(__CFString const*) const */

undefined8 __thiscall ACFUFirmware::copyFWDataByTag(ACFUFirmware *this,__CFString *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ACFUFirmware *pAVar3;
  ACFUFirmware *pAVar4;
  __CFString *local_18;
  
  puVar1 = *(undefined8 **)(this + 0x20);
  local_18 = param_1;
  if (puVar1 == (undefined8 *)0x0) {
    copyFWDataByTag((__CFString *)this);
  }
  else {
    pAVar3 = *(ACFUFirmware **)(this + 0x10);
    if (pAVar3 != (ACFUFirmware *)0x0) {
      pAVar4 = this + 0x10;
      do {
        if (*(__CFString **)(pAVar3 + 0x20) >= param_1) {
          pAVar4 = pAVar3;
        }
        pAVar3 = *(ACFUFirmware **)(pAVar3 + (ulong)(*(__CFString **)(pAVar3 + 0x20) < param_1) * 8)
        ;
      } while (pAVar3 != (ACFUFirmware *)0x0);
      if ((pAVar4 != this + 0x10) && (*(__CFString **)(pAVar4 + 0x20) <= param_1)) {
        uVar2 = std::
                map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                ::at((map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                      *)(this + 8),&local_18);
        uVar2 = (**(code **)*puVar1)(puVar1,uVar2);
        return uVar2;
      }
    }
  }
  return 0;
}

