// rea decompile_all
// name: IXRemoteInstallDeltaHelper::sha256HashForString:
// address: 0x402c4
// body: available
// range: 0x402c4-0x403bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403b2 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x403b7 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID IXRemoteInstallDeltaHelper::sha256HashForString_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *data;
  size_t sVar4;
  undefined8 uVar5;
  ID IVar6;
  long lVar7;
  uchar local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableString,"new");
  uVar2 = _objc_retainAutorelease(uVar2);
  data = (char *)(*(code *)puVar1)(uVar2,"UTF8String");
  sVar4 = _strlen(data);
  _CC_SHA256(data,(CC_LONG)sVar4,local_58);
  lVar7 = 0;
  do {
    (*(code *)puVar1)(uVar3,"appendFormat:",&cf__02x,local_58[lVar7]);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x20);
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"copy");
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  (*(code *)puVar1)(uVar2);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    IVar6 = _objc_autoreleaseReturnValue(uVar5);
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

