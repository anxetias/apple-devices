// rea decompile_all
// name: _registerScheme
// address: 0xfe3ad
// body: available
// range: 0xfe3ad-0xfe433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _registerScheme(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 unaff_R12;
  ulong uVar4;
  
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)&_mutex);
  if (iVar2 == 0) {
    lVar3 = *param_1;
    if (lVar3 == 0) {
      lVar3 = _CFDictionaryCreateMutable
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                         PTR__kCFTypeDictionaryKeyCallBacks_004411b0,0);
      *param_1 = lVar3;
    }
    cVar1 = _CFDictionaryContainsKey(lVar3,param_2);
    uVar4 = CONCAT71((int7)((ulong)unaff_R12 >> 8),cVar1 == '\0');
    if (cVar1 == '\0') {
      _CFDictionarySetValue(*param_1,param_2,param_3);
    }
    _pthread_mutex_unlock((pthread_mutex_t *)&_mutex);
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}

