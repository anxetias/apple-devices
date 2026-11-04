// rea decompile_all
// name: _AFCReadPacketHeader
// address: 0xb7697
// body: available
// range: 0xb7697-0xb78dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AFCReadPacketHeader(long param_1,undefined4 *param_2,ulong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long lVar13;
  
  uVar8 = _CFGetAllocator();
  if (*(char *)(param_1 + 0x44) == '\x01') {
    return *(int *)(param_1 + 0x40);
  }
  if (((param_2 == (undefined4 *)0x0) || (param_4 == (undefined8 *)0x0)) || (param_3 < 0x28)) {
LAB_000b78cc:
    puVar9 = (undefined4 *)0x0;
    iVar7 = ___AFCSetErrorResult(0);
    bVar6 = true;
  }
  else {
    iVar7 = _AFCReadData(param_1,param_2,0x28);
    if ((iVar7 != 0) || (iVar7 = _AFCValidateHeader(param_2), iVar7 != 0)) goto LAB_000b783b;
    lVar13 = *(long *)(param_2 + 4);
    uVar12 = lVar13 + 1;
    if (uVar12 == 0) goto LAB_000b78cc;
    if (param_3 < uVar12) {
      puVar9 = (undefined4 *)_CFAllocatorAllocate(uVar8,uVar12,0);
      if (puVar9 == (undefined4 *)0x0) goto LAB_000b78cc;
      puVar11 = (undefined4 *)0x0;
      _AFCLog(5,"Allocated %llu bytes\n",uVar12);
      lVar13 = *(long *)(param_2 + 4);
      lVar10 = lVar13;
      if (puVar9 != param_2) {
        *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(param_2 + 8);
        uVar1 = *param_2;
        uVar2 = param_2[1];
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        uVar5 = *(undefined8 *)(param_2 + 6);
        *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(param_2 + 4);
        *(undefined8 *)(puVar9 + 6) = uVar5;
        *puVar9 = uVar1;
        puVar9[1] = uVar2;
        puVar9[2] = uVar3;
        puVar9[3] = uVar4;
        lVar10 = *(long *)(param_2 + 4);
        puVar11 = puVar9;
      }
    }
    else {
      puVar11 = (undefined4 *)0x0;
      lVar10 = lVar13;
      puVar9 = param_2;
    }
    *(undefined1 *)((long)puVar9 + lVar10) = 0;
    uVar12 = lVar13 - 0x28;
    if (uVar12 == 0) {
LAB_000b77d1:
      _AFCSwapHeader(puVar9);
      *param_4 = puVar11;
      iVar7 = 0;
    }
    else {
      _AFCLog(5,"Expecting %u bytes\n",uVar12 & 0xffffffff);
      iVar7 = _AFCReadData(param_1,puVar9 + 10,uVar12);
      if (iVar7 == 0) goto LAB_000b77d1;
    }
    _AFCLogPacketInfo(4,"AFCReadPacketHeader",puVar9,puVar9[6],iVar7,(ulong)puVar9 & 0xffffffff);
    bVar6 = false;
  }
  if (iVar7 == 0) {
    return 0;
  }
  if (!bVar6 && puVar9 != param_2) {
    _CFAllocatorDeallocate(uVar8,puVar9);
  }
  if (param_4 == (undefined8 *)0x0) {
    return iVar7;
  }
LAB_000b783b:
  *param_4 = 0;
  return iVar7;
}

