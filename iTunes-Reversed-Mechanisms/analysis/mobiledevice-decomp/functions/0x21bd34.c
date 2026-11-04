// rea decompile_all
// name: ACFUFTABFile::getVersion
// address: 0x21bd34
// body: available
// range: 0x21bd34-0x21bdc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::getVersion() */

undefined8 __thiscall ACFUFTABFile::getVersion(ACFUFTABFile *this)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte local_28 [16];
  void *local_18;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_28,"bver");
  if (*(long *)(this + 8) == 0) {
    uVar3 = ACFULogging::getLogInstance();
    uVar2 = 0;
    ACFULogging::handleMessage
              (uVar3,2,"%s::%s: file data was invalid\n","ACFUFTABFile","getVersion");
  }
  else {
    cVar1 = (**(code **)(*(long *)this + 0x10))(this,local_28);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = (*(code *)**(undefined8 **)this)(this,local_28);
    }
  }
  if ((local_28[0] & 1) != 0) {
    operator_delete(local_18);
  }
  return uVar2;
}

