// rea decompile_all
// name: _CreateCDRecordFromMutable
// address: 0xa2af8
// body: available
// range: 0xa2af8-0xa2d69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa2d65 to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000a2b79) */
/* WARNING: Removing unreachable block (ram,0x000a2b8c) */
/* WARNING: Removing unreachable block (ram,0x000a2b82) */
/* WARNING: Removing unreachable block (ram,0x000a2b90) */
/* WARNING: Removing unreachable block (ram,0x000a2b99) */
/* WARNING: Removing unreachable block (ram,0x000a2ba0) */
/* WARNING: Removing unreachable block (ram,0x000a2ba9) */
/* WARNING: Removing unreachable block (ram,0x000a2bb0) */
/* WARNING: Removing unreachable block (ram,0x000a2bbb) */
/* WARNING: Removing unreachable block (ram,0x000a2bf8) */
/* WARNING: Removing unreachable block (ram,0x000a2c04) */
/* WARNING: Removing unreachable block (ram,0x000a2c07) */
/* WARNING: Removing unreachable block (ram,0x000a2c11) */
/* WARNING: Removing unreachable block (ram,0x000a2c14) */

undefined4 * _CreateCDRecordFromMutable(undefined2 *param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  size_t sVar7;
  undefined4 *puVar8;
  ulong uVar9;
  uint uVar10;
  void *pvVar11;
  
  cVar3 = (0xfffffffe < *(ulong *)(param_1 + 0x14)) * '\b' + '\b';
  if (*(ulong *)(param_1 + 0x10) < 0xffffffff) {
    cVar3 = (0xfffffffe < *(ulong *)(param_1 + 0x14)) * '\b';
  }
  cVar4 = cVar3 + '\b';
  if (*(ulong *)(param_1 + 0x20) < 0xffffffff) {
    cVar4 = cVar3;
  }
  cVar3 = cVar4 + '\x04';
  if (*(uint *)(param_1 + 0x1a) < 0xffff) {
    cVar3 = cVar4;
  }
  cVar4 = __GetExtraFieldOfLength(param_1 + 0x2c,&_kZip64ExtraFieldSignature,cVar3);
  if ((cVar4 == '\0') ||
     (cVar4 = __GetExtraFieldOfLength
                        (param_1 + 0x2c,&_kInfoZipExtraFieldSignature,
                         (ulong)(*(long *)(param_1 + 8) != *(long *)(param_1 + 4)) << 3),
     cVar4 == '\0')) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    sVar7 = _strlen(*(char **)(param_1 + 0x24));
    if (0xffff < sVar7) {
                    /* WARNING: Subroutine does not return */
      ___assert_rtn("CreateCDRecordFromMutable","MutableZipStructure.c",0x17b,
                    "file_name_length <= UINT16_MAX");
    }
    puVar8 = _malloc((ulong)(ushort)param_1[0x18] + (ushort)param_1[0x2c] + sVar7 + 0x2e);
    *puVar8 = 0x2014b50;
    *(undefined2 *)(puVar8 + 1) = *param_1;
    uVar5 = 0x2d;
    if (cVar3 == '\0') {
      uVar5 = param_1[1];
    }
    *(undefined2 *)((long)puVar8 + 6) = uVar5;
    puVar8[2] = *(undefined4 *)(param_1 + 2);
    uVar6 = _UNIX2DOSTime(*(undefined8 *)(param_1 + 8));
    puVar8[3] = uVar6;
    puVar8[4] = *(undefined4 *)(param_1 + 0xe);
    uVar9 = *(ulong *)(param_1 + 0x10);
    if (0xfffffffe < uVar9) {
      uVar9 = 0xffffffff;
    }
    puVar8[5] = (int)uVar9;
    uVar9 = *(ulong *)(param_1 + 0x14);
    if (0xfffffffe < uVar9) {
      uVar9 = 0xffffffff;
    }
    puVar8[6] = (int)uVar9;
    *(short *)(puVar8 + 7) = (short)sVar7;
    uVar1 = param_1[0x2c];
    *(ushort *)((long)puVar8 + 0x1e) = uVar1;
    uVar2 = param_1[0x18];
    *(ushort *)(puVar8 + 8) = uVar2;
    uVar10 = 0xffff;
    if (*(uint *)(param_1 + 0x1a) < 0xffff) {
      uVar10 = *(uint *)(param_1 + 0x1a);
    }
    *(short *)((long)puVar8 + 0x22) = (short)uVar10;
    *(undefined2 *)(puVar8 + 9) = param_1[0x1c];
    *(uint *)((long)puVar8 + 0x26) = *(int *)(param_1 + 0xc) << 0x10 | 0x4000;
    uVar9 = 0xffffffff;
    if (*(ulong *)(param_1 + 0x20) < 0xffffffff) {
      uVar9 = *(ulong *)(param_1 + 0x20);
    }
    *(int *)((long)puVar8 + 0x2a) = (int)uVar9;
    _memcpy((void *)((long)puVar8 + 0x2e),*(void **)(param_1 + 0x24),sVar7);
    pvVar11 = (void *)((long)puVar8 + sVar7 + 0x2e);
    _memcpy(pvVar11,*(void **)(param_1 + 0x30),(ulong)uVar1);
    _memcpy((void *)((long)pvVar11 + (ulong)uVar1),*(void **)(param_1 + 0x28),(ulong)uVar2);
  }
  return puVar8;
}

