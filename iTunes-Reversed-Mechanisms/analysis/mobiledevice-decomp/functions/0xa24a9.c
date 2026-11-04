// rea decompile_all
// name: _CreateLocalFileRecordFromMutable
// address: 0xa24a9
// body: available
// range: 0xa24a9-0xa271d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xa2719 to 0x2aa002 ___assert_rtn (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * _CreateLocalFileRecordFromMutable(undefined2 *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  char *pcVar3;
  bool bVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  size_t sVar9;
  undefined4 *puVar10;
  ulong uVar11;
  short sVar12;
  short sVar13;
  long local_38;
  
  local_38 = 0;
  if ((*(ulong *)(param_1 + 0x14) < 0xffffffff) && (*(ulong *)(param_1 + 0x18) < 0xffffffff)) {
    bVar4 = true;
    uVar6 = 0;
  }
  else {
    uVar6 = 0x10;
    bVar4 = false;
  }
  puVar1 = param_1 + 0x20;
  cVar5 = __GetExtraFieldOfLength(puVar1,&_kZip64ExtraFieldSignature,uVar6,&local_38);
  if (cVar5 != '\0') {
    if (local_38 != 0) {
      *(undefined8 *)(local_38 + 4) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(local_38 + 0xc) = *(undefined8 *)(param_1 + 0x14);
    }
    local_38 = 0;
    cVar5 = __GetExtraFieldOfLength
                      (puVar1,&_kStreamingZipLFExtraFieldSignature,(param_1[0xe] != 0) * '\x02');
    if (cVar5 != '\0') {
      if (local_38 != 0) {
        *(undefined2 *)(local_38 + 4) = param_1[0xe];
      }
      sVar12 = (ushort)(*(long *)(param_1 + 8) != *(long *)(param_1 + 4)) << 3;
      sVar13 = sVar12;
      if ((param_1[0xc] != -1) && (sVar13 = 0xc, param_1[0xd] == -1)) {
        sVar13 = sVar12;
      }
      local_38 = 0;
      cVar5 = __GetExtraFieldOfLength(puVar1,&_kInfoZipExtraFieldSignature,sVar13);
      if (cVar5 != '\0') {
        if (local_38 != 0) {
          uVar7 = (undefined4)*(ulong *)(param_1 + 4);
          if (0xfffffffe < *(ulong *)(param_1 + 4)) {
            uVar7 = 0xffffffff;
          }
          *(undefined4 *)(local_38 + 4) = uVar7;
          uVar7 = (undefined4)*(ulong *)(param_1 + 8);
          if (0xfffffffe < *(ulong *)(param_1 + 8)) {
            uVar7 = 0xffffffff;
          }
          *(undefined4 *)(local_38 + 8) = uVar7;
          if (sVar13 == 0xc) {
            *(undefined2 *)(local_38 + 0xc) = param_1[0xc];
            *(undefined2 *)(local_38 + 0xe) = param_1[0xd];
          }
        }
        sVar9 = _strlen(*(char **)(param_1 + 0x1c));
        if (0xffff < sVar9) {
                    /* WARNING: Subroutine does not return */
          ___assert_rtn("CreateLocalFileRecordFromMutable","MutableZipStructure.c",0xbc,
                        "file_name_length <= UINT16_MAX");
        }
        puVar10 = _malloc(sVar9 + *puVar1 + 0x1e);
        *puVar10 = 0x4034b50;
        uVar6 = 0x2d;
        if (bVar4) {
          uVar6 = *param_1;
        }
        *(undefined2 *)(puVar10 + 1) = uVar6;
        *(undefined4 *)((long)puVar10 + 6) = *(undefined4 *)(param_1 + 1);
        uVar7 = _UNIX2DOSTime(*(undefined8 *)(param_1 + 8));
        *(undefined4 *)((long)puVar10 + 10) = uVar7;
        if ((bVar4 && (*(byte *)(param_1 + 1) & 8) != 0) && (param_1[2] != 0)) {
          *(undefined8 *)((long)puVar10 + 0xe) = 0;
          uVar11 = 0;
        }
        else {
          *(undefined4 *)((long)puVar10 + 0xe) = *(undefined4 *)(param_1 + 0x10);
          uVar11 = *(ulong *)(param_1 + 0x14);
          if (0xfffffffe < uVar11) {
            uVar11 = 0xffffffff;
          }
          *(int *)((long)puVar10 + 0x12) = (int)uVar11;
          uVar11 = 0xffffffff;
          if (*(ulong *)(param_1 + 0x18) < 0xffffffff) {
            uVar11 = *(ulong *)(param_1 + 0x18);
          }
        }
        *(int *)((long)puVar10 + 0x16) = (int)uVar11;
        *(short *)((long)puVar10 + 0x1a) = (short)sVar9;
        pcVar3 = *(char **)(param_1 + 0x1c);
        _memcpy((void *)((long)puVar10 + 0x1e),pcVar3,sVar9);
        iVar8 = _strcmp(pcVar3,"mimetype");
        if (iVar8 != 0) {
          uVar2 = param_1[0x20];
          *(ushort *)(puVar10 + 7) = uVar2;
          _memcpy((void *)((long)puVar10 + 0x1e + sVar9),*(void **)(param_1 + 0x24),(ulong)uVar2);
          return puVar10;
        }
        *(undefined2 *)(puVar10 + 7) = 0;
        return puVar10;
      }
    }
  }
  return (undefined4 *)0x0;
}

