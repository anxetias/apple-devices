// rea decompile_all
// name: PSIORegistryEntry::entryMatching:
// address: 0x325ec
// body: available
// range: 0x325ec-0x32660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3265c to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID PSIORegistryEntry::entryMatching_(ID param_1,SEL param_2,ID param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  unsigned_int uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  
  puVar2 = PTR__objc_retain_004410a8;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_004411d8;
  uVar4 = (*(code *)puVar2)(uVar4);
  uVar3 = _IOServiceGetMatchingService(uVar1,uVar4);
  IVar5 = entryWithNativeHandle_freeWhenDone_
                    (param_1,"entryWithNativeHandle:freeWhenDone:",uVar3,'\x01');
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  IVar5 = _objc_autoreleaseReturnValue(uVar6);
  return IVar5;
}

