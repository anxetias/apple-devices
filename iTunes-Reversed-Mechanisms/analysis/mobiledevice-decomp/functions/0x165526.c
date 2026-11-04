// rea decompile_all
// name: __AMRestorableGetStateForString
// address: 0x165526
// body: available
// range: 0x165526-0x1655f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


cfstringStruct * __AMRestorableGetStateForString(long param_1)

{
  char cVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  
  if (param_1 == 0) {
    pcVar3 = &cf_Can_treturnstatefromNULLstring;
    pcVar2 = (cfstringStruct *)0x0;
  }
  else {
    cVar1 = _CFEqual(param_1,&cf_DFU);
    if (cVar1 == '\0') {
      cVar1 = _CFEqual(param_1,&cf_Recovery);
      if (cVar1 == '\0') {
        cVar1 = _CFEqual(param_1,&cf_RestoreOS);
        if (cVar1 == '\0') {
          cVar1 = _CFEqual(param_1,&cf_RamrodOS);
          if (cVar1 == '\0') {
            cVar1 = _CFEqual(param_1,&cf_BootedOS);
            pcVar3 = (cfstringStruct *)0x0;
            if (cVar1 == '\0') {
              cVar1 = _CFEqual(param_1,&cf_PortDFU);
              pcVar2 = (cfstringStruct *)0x6;
              if (cVar1 == '\0') {
                pcVar2 = pcVar3;
              }
            }
            else {
              pcVar2 = (cfstringStruct *)0x4;
            }
            goto LAB_0016559f;
          }
          pcVar2 = (cfstringStruct *)0x5;
        }
        else {
          pcVar2 = (cfstringStruct *)0x3;
        }
      }
      else {
        pcVar2 = (cfstringStruct *)0x2;
      }
    }
    else {
      pcVar2 = (cfstringStruct *)0x1;
    }
    pcVar3 = (cfstringStruct *)0x0;
  }
LAB_0016559f:
  _AMRSafeLogAndRelease(3,pcVar3);
  return pcVar2;
}

