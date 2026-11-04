// rea decompile_all
// name: FTABSubfileBackDeploy::generateHashSHA256
// address: 0x24154c
// body: available
// range: 0x24154c-0x2415e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2415da to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x2415df to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID FTABSubfileBackDeploy::generateHashSHA256(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  CC_SHA256_CTX local_b0;
  uchar local_48 [40];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  _CC_SHA256_Init(&local_b0);
  _CC_SHA256_Update(&local_b0,*(void **)(param_1 + 0x20),*(CC_LONG *)(param_1 + 0x10));
  _CC_SHA256_Final(local_48,&local_b0);
  uVar1 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSData,"dataWithBytes:length:",local_48,0x20);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    IVar2 = _objc_autoreleaseReturnValue(uVar1);
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

