// rea decompile_all
// name: __AMRestorableEventDataExtendedCreate
// address: 0x1591e7
// body: available
// range: 0x1591e7-0x1592d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRestorableEventDataExtendedCreate
               (undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  lVar1 = __CFRuntimeCreateInstance
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,__AMRestorableEventDataTypeID,
                     0x38,0);
  if (lVar1 == 0) {
    _AMRSafePrintLogAndRelease(3,&cf_Failedtoallocateevent);
  }
  else {
    if (param_2 != 0) {
      *(long *)(lVar1 + 0x20) = param_2;
      *(undefined4 *)(lVar1 + 0x28) = param_1;
      *(undefined8 *)(lVar1 + 0x30) = param_3;
      *(undefined8 *)(lVar1 + 0x10) = param_4;
      *(undefined8 *)(lVar1 + 0x18) = param_5;
      *(undefined8 *)(lVar1 + 0x38) = param_6;
      *(undefined8 *)(lVar1 + 0x40) = param_7;
      _CFRetain(param_2);
      if (*(long *)(lVar1 + 0x30) != 0) {
        _CFRetain();
      }
      if (*(long *)(lVar1 + 0x10) != 0) {
        _CFRetain();
      }
      if (*(long *)(lVar1 + 0x18) == 0) {
        return lVar1;
      }
      _CFRetain();
      return lVar1;
    }
    _AMRSafePrintLogAndRelease(3,&cf_NULLdevicepassedineventcreation);
    _CFRelease(lVar1);
  }
  return 0;
}

