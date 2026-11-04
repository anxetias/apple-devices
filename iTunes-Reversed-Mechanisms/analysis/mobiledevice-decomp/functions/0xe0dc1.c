// rea decompile_all
// name: __AMRestoreCopyDeviceInfo
// address: 0xe0dc1
// body: available
// range: 0xe0dc1-0xe0e8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe0e89 to 0x26d03c __AMRestoreCopyDeviceInfo.cold.1 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __AMRestoreCopyDeviceInfo(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar4 = _calloc(1,0x68);
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    *puVar4 = *param_1;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    puVar4[4] = param_1[4];
    if (*(long *)(param_1 + 6) != 0) {
      uVar5 = _CFRetain();
      *(undefined8 *)(puVar4 + 6) = uVar5;
    }
    if (*(long *)(param_1 + 10) != 0) {
      uVar5 = _CFRetain();
      *(undefined8 *)(puVar4 + 10) = uVar5;
    }
    if (*(long *)(param_1 + 0xc) != 0) {
      uVar5 = _CFRetain();
      *(undefined8 *)(puVar4 + 0xc) = uVar5;
    }
    if (*(long *)(param_1 + 0xe) != 0) {
      uVar5 = _CFRetain();
      *(undefined8 *)(puVar4 + 0xe) = uVar5;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar5 = _CFRetain();
      *(undefined8 *)(puVar4 + 0x10) = uVar5;
    }
    *(undefined8 *)(puVar4 + 0x12) = *(undefined8 *)(param_1 + 0x12);
    *(undefined8 *)(puVar4 + 0x14) = *(undefined8 *)(param_1 + 0x14);
    *(undefined1 *)(puVar4 + 0x16) = *(undefined1 *)(param_1 + 0x16);
    *(undefined1 *)((long)puVar4 + 0x59) = *(undefined1 *)((long)param_1 + 0x59);
    *(undefined1 *)((long)puVar4 + 0x5a) = *(undefined1 *)((long)param_1 + 0x5a);
    *(undefined1 *)((long)puVar4 + 0x5f) = *(undefined1 *)((long)param_1 + 0x5f);
    *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __AMRestoreCopyDeviceInfo_cold_1();
}

