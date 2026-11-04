// rea decompile_all
// name: ACFUDataContainer::init
// address: 0x21750c
// body: available
// range: 0x21750c-0x217577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUDataContainer::init(__CFData*) */

undefined8 __thiscall ACFUDataContainer::init(ACFUDataContainer *this,__CFData *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_1 == (__CFData *)0x0) {
    pcVar3 = "%s::%s: bad parameter!\n";
  }
  else {
    lVar1 = _CFDataGetTypeID();
    lVar2 = _CFGetTypeID(param_1);
    if (lVar1 == lVar2) {
      lVar1 = _AMSupportSafeRetain(param_1);
      *(long *)this = lVar1;
      if (lVar1 != 0) {
        return 1;
      }
      pcVar3 = "%s::%s: failed to allocate space for file object\n";
    }
    else {
      pcVar3 = "%s::%s: data is of an unsupported type\n";
    }
  }
  init((__CFData *)pcVar3);
  return 0;
}

