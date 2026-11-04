// rea decompile_all
// name: ___IXRemotePerformInstallationAsync_block_invoke.35
// address: 0x39303
// body: available
// range: 0x39303-0x3940b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3940a to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___IXRemotePerformInstallationAsync_block_invoke_35
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar1 = PTR__objc_retain_004410a8;
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_2);
  uVar3 = (*(code *)puVar1)(param_3);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if (*(long *)(param_1 + 0x28) != 0) {
    local_70 = PTR___NSConcreteStackBlock_004412a8;
    local_68 = 0xc2000000;
    local_60 = ___IXRemotePerformInstallationAsync_block_invoke_2;
    local_58 = &___block_descriptor_56_e8_32s40s48s_e5_v8__0l;
    local_38 = *(long *)(param_1 + 0x28);
    local_50 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x30));
    local_48 = (*(code *)puVar1)(uVar2);
    local_40 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x20));
    _dispatch_sync(local_38,&local_70);
    puVar1 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(local_40);
    (*(code *)puVar1)(local_48);
    (*(code *)puVar1)(local_50);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  (**(code **)(*(long *)(param_1 + 0x40) + 0x10))
            (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),lVar4,uVar2,uVar3);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

