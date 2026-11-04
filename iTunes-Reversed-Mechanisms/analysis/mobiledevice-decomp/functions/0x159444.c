// rea decompile_all
// name: ___thr_AMRestorableDeviceGetLocationID
// address: 0x159444
// body: available
// range: 0x159444-0x15948f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceGetLocationID(long *param_1)

{
  int iVar1;
  cfstringStruct *pcVar2;
  
  if (*param_1 == 0) {
    pcVar2 = &cf_Can_tlookuplocationIDfromNULLdevice;
  }
  else {
    iVar1 = __AMDeviceProxyGetLocationID(*(undefined8 *)(*param_1 + 0x20));
    pcVar2 = (cfstringStruct *)0x0;
    if (iVar1 != 0) goto LAB_00159468;
    pcVar2 = &cf_ProxyreturnedemptylocationID;
  }
  iVar1 = 0;
LAB_00159468:
  _AMRSafeLogAndRelease(3,pcVar2);
  *(int *)(param_1 + 1) = iVar1;
  return;
}

