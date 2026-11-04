// rea decompile_all
// name: AppleTypeCRetimerFirmwareAggregateRequestCreatorBackDeploy::generateHashForData:
// address: 0x230236
// body: available
// range: 0x230236-0x230319 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x230310 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x230315 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID AppleTypeCRetimerFirmwareAggregateRequestCreatorBackDeploy::generateHashForData_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  CC_LONG len;
  undefined8 uVar2;
  void *data;
  ID IVar3;
  CC_SHA512_CTX local_138;
  uchar local_68 [48];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  _CC_SHA384_Init(&local_138);
  uVar2 = _objc_retainAutorelease(uVar2);
  puVar1 = PTR__objc_msgSend_00441098;
  data = (void *)(*(code *)PTR__objc_msgSend_00441098)(uVar2,"bytes");
  len = (*(code *)puVar1)(uVar2,"length");
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  _CC_SHA384_Update(&local_138,data,len);
  _CC_SHA384_Final(local_68,&local_138);
  uVar2 = (*(code *)puVar1)(&_OBJC_CLASS___NSData,"dataWithBytes:length:",local_68,0x30);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    IVar3 = _objc_autoreleaseReturnValue(uVar2);
    return IVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

