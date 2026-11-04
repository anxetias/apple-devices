// rea decompile_all
// name: ____AMRUSBDeviceReEnumerate_block_invoke
// address: 0xe94d0
// body: available
// range: 0xe94d0-0xe9547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____AMRUSBDeviceReEnumerate_block_invoke(long param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_msgSend_00441098;
  if (param_2 != 0) {
    uVar2 = (*(code *)PTR__objc_msgSend_00441098)(param_3,"code");
    uVar3 = (*(code *)puVar1)(param_3,"userInfo");
    _AMRLog(3,&cf__s_AMRUSBDeviceerror__ld____,"_AMRUSBDeviceReEnumerate_block_invoke",uVar2,uVar3);
  }
  *(int *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}

