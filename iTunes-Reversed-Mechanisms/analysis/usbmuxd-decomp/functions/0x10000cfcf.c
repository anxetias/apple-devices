// rea decompile_all
// name: FUN_10000cfcf
// address: 0x10000cfcf
// body: available
// range: 0x10000cfcf-0x10000d075 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10000cfcf(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_38;
  long lStack_30;
  undefined8 local_28;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    local_28 = 0;
    lStack_30 = param_1 + 1;
    local_38 = 0x40000000045c0;
    iVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0xd8))
                      (*(long **)(param_1 + 0x18),&local_38,FUN_10000d076,param_1);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      iVar2 = 0;
    }
    else if (2 < DAT_100021030) {
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      uVar3 = FUN_100000d8c(iVar2);
      FUN_1000008d2(3,0,&cf_DeviceRequestAsync___xfailed__s,uVar1,uVar3);
    }
  }
  return iVar2;
}

