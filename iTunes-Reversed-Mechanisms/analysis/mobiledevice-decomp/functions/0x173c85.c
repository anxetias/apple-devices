// rea decompile_all
// name: __copyECID
// address: 0x173c85
// body: available
// range: 0x173c85-0x173cfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __copyECID(long param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  if (param_1 == 0) {
    pcVar2 = &cf_Can_tgetECIDfromNULLdevice;
  }
  else {
    local_28 = param_1;
    ___thr_AMRestorableDeviceGetECID(&local_28);
    local_18 = local_20;
    if (local_20 != 0) {
      uVar1 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,4,&local_18);
      pcVar2 = (cfstringStruct *)0x0;
      goto LAB_00173cd4;
    }
    pcVar2 = &cf_FailedtogetECIDfromdevice;
  }
  uVar1 = 0;
LAB_00173cd4:
  _AMRSafePrintLogAndRelease(3,pcVar2);
  return uVar1;
}

