// rea decompile_all
// name: _CreateLocalFileRecord
// address: 0x9c32f
// body: available
// range: 0x9c32f-0x9c456 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x9c452 to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * _CreateLocalFileRecord(long param_1,undefined2 param_2,undefined2 param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  ulong uVar6;
  
  if ((*(int *)(param_1 + 0x14) != -1) && (*(int *)(param_1 + 0x18) != -1)) {
    puVar4 = _calloc(1,(ulong)*(ushort *)(param_1 + 0x1c) + 0x2e);
    *puVar4 = 0x4034b50;
    *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(param_1 + 6);
    *(undefined2 *)((long)puVar4 + 6) = *(undefined2 *)(param_1 + 8);
    *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(param_1 + 10);
    *(undefined4 *)((long)puVar4 + 10) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((long)puVar4 + 0xe) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((long)puVar4 + 0x12) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)((long)puVar4 + 0x16) = *(undefined4 *)(param_1 + 0x18);
    uVar1 = *(ushort *)(param_1 + 0x1c);
    *(ushort *)((long)puVar4 + 0x1a) = uVar1;
    *(undefined2 *)(puVar4 + 7) = 0;
    _memcpy((void *)((long)puVar4 + 0x1e),(void *)(param_1 + 0x2e),(ulong)uVar1);
    if (0xb < *(ushort *)(param_1 + 0x1e)) {
      puVar5 = (undefined2 *)
               _GetExtraFieldWithSignatureFromCDRecord(param_1,&_kInfoZipExtraFieldSignature,8);
      if (puVar5 != (undefined2 *)0x0) {
        uVar2 = *puVar5;
        uVar6 = (ulong)*(ushort *)((long)puVar4 + 0x1a);
        uVar3 = *(undefined8 *)(puVar5 + 2);
        *(undefined2 *)(puVar4 + 7) = 0x10;
        *(undefined2 *)((long)puVar4 + uVar6 + 0x1e) = uVar2;
        *(undefined2 *)((long)puVar4 + uVar6 + 0x20) = 0xc;
        *(undefined8 *)((long)puVar4 + uVar6 + 0x22) = uVar3;
        *(undefined2 *)((long)puVar4 + uVar6 + 0x2a) = param_2;
        *(undefined2 *)((long)puVar4 + uVar6 + 0x2c) = param_3;
      }
    }
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("CreateLocalFileRecord","ZipStructure.c",0x28,
                "UREAD(cdRecord->thirty_two_bit_compressed_size) < UINT32_MAX && UREAD(cdRecord->thirty_two_bit_uncompressed_size) < UINT32_MAX"
               );
}

