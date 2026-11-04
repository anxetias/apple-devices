// rea decompile_all
// name: _AMRIsURLSchemeType
// address: 0x16faca
// body: available
// range: 0x16faca-0x16fb45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMRIsURLSchemeType(undefined8 param_1,long param_2)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    pcVar1 = &cf_Can_tcompareagainstNULLscheme;
  }
  else {
    pcVar1 = (cfstringStruct *)_CFURLCopyScheme();
    if (pcVar1 != (cfstringStruct *)0x0) {
      uVar2 = _CFStringGetLength(pcVar1);
      lVar3 = _CFStringCompareWithOptions(pcVar1,param_2,0,uVar2,1);
      uVar4 = CONCAT71((int7)((ulong)param_2 >> 8),lVar3 == 0);
      goto LAB_0016fb0b;
    }
    pcVar1 = &cf_FailedtocopyschemefromURL;
  }
  uVar4 = 0;
  _AMRSafeLog(3,&cf___,pcVar1);
LAB_0016fb0b:
  _CFRelease(pcVar1);
  return uVar4 & 0xffffffff;
}

