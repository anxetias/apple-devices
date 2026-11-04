// rea decompile_all
// name: SERestoreInfo::SEException::CreateCFError
// address: 0x25384c
// body: available
// range: 0x25384c-0x25389e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::SEException::CreateCFError() const */

undefined8 __thiscall SERestoreInfo::SEException::CreateCFError(SEException *this)

{
  undefined8 uVar1;
  SEException *pSVar2;
  byte local_28 [16];
  void *local_18;
  
  if (((byte)this[0x20] & 1) == 0) {
    pSVar2 = this + 0x21;
  }
  else {
    pSVar2 = *(SEException **)(this + 0x30);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_28,pSVar2);
  uVar1 = SERestoreInfo::CreateCFError
                    (local_28,*(undefined4 *)(this + 0x40),0,*(undefined8 *)(this + 0x38));
  if ((local_28[0] & 1) != 0) {
    operator_delete(local_18);
  }
  return uVar1;
}

