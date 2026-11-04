// rea decompile_all
// name: __CheckVerifyResult
// address: 0x1b2f25
// body: available
// range: 0x1b2f25-0x1b2fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __CheckVerifyResult(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_R13;
  ulong uVar4;
  
  if ((param_1 == 0) || (lVar2 = _CFDictionaryGetValue(param_1,param_2), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    cVar1 = _CFEqual(lVar2,param_3);
    uVar4 = CONCAT71((int7)((ulong)unaff_R13 >> 8),1);
    if (cVar1 != '\0') goto LAB_001b2fae;
  }
  uVar3 = _CFDictionaryGetValue(param_1);
  uVar4 = 0;
  _AMAuthInstallLog(3,"_CheckVerifyResult",
                    "SSOVerifyServiceTicket() returned wrong %@, got %@ instead of %@ [%@=%@]",
                    param_2,lVar2,param_3,&cf_SsoTransactionId,uVar3);
LAB_001b2fae:
  return uVar4 & 0xffffffff;
}

