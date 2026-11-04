// rea decompile_all
// name: __SHA384Partial
// address: 0x1ad083
// body: available
// range: 0x1ad083-0x1ad0f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __SHA384Partial(void *param_1,CC_LONG param_2,long param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined1 auVar3 [16];
  CC_SHA512_CTX local_f8;
  
  _CC_SHA384_Init(&local_f8);
  _CC_SHA384_Update(&local_f8,param_1,param_2);
  auVar1 = _DAT_00336dc0;
  lVar2 = 0;
  do {
    auVar3 = pshufb(*(undefined1 (*) [16])(local_f8.hash + lVar2),auVar1);
    *(undefined1 (*) [16])(param_3 + lVar2 * 8) = auVar3;
    lVar2 = lVar2 + 2;
  } while (lVar2 != 8);
  return;
}

