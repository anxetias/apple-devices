// rea decompile_all
// name: PRGH_WriteElement
// address: 0x1b94e0
// body: available
// range: 0x1b94e0-0x1b975b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGH_WriteElement(IFWD_MemoryStream*, unsigned int, unsigned int, char*, unsigned int, void
   const*) */

undefined8
PRGH_WriteElement(IFWD_MemoryStream *param_1,uint param_2,uint param_3,char *param_4,uint param_5,
                 void *param_6)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined1 uVar6;
  uint *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar12 = iVar1 + param_5 + 0xc;
  IFWD_MemoryStream::SetSize(param_1,uVar12);
  puVar9 = (undefined1 *)(*(long *)(param_1 + 0x10) + (long)iVar1);
  uVar10 = 0;
  if (_mach_endian == 2) {
    _CalledByWrite = 1;
    PRGH_SwapElementEndian(param_4 + -0xc,param_2,param_6);
    _CalledByWrite = 0;
    bVar13 = _mach_endian == 2;
    if (bVar13) {
      uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
               uVar12 * 0x1000000;
    }
  }
  else {
    bVar13 = false;
  }
  bVar2 = false;
  switch(param_2) {
  case 0xc:
    param_4[0x14] = '\0';
    param_4[0x15] = '\0';
    param_4[0x16] = '\0';
    param_4[0x17] = '\0';
    puVar7 = (uint *)(param_4 + 0x10);
    lVar5 = 0x18;
    break;
  default:
    goto switchD_001b9590_caseD_d;
  case 0x10:
    param_4[4] = '\0';
    param_4[5] = '\0';
    param_4[6] = '\0';
    param_4[7] = '\0';
    uVar10 = *(uint *)param_4;
    uVar8 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
    if (!bVar13) {
      uVar8 = uVar10;
    }
    uVar8 = uVar8 * 0x90;
    *(uint *)(param_4 + 8) = uVar12;
    bVar2 = true;
    goto LAB_001b95da;
  case 0x12:
  case 0x13:
    param_4[0xc] = '\0';
    param_4[0xd] = '\0';
    param_4[0xe] = '\0';
    param_4[0xf] = '\0';
    puVar7 = (uint *)(param_4 + 8);
    lVar5 = 0x10;
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    param_4[4] = '\0';
    param_4[5] = '\0';
    param_4[6] = '\0';
    param_4[7] = '\0';
    lVar5 = 8;
    puVar7 = (uint *)param_4;
  }
  uVar10 = *puVar7;
  *(uint *)(param_4 + lVar5) = uVar12;
  bVar2 = true;
switchD_001b9590_caseD_d:
  uVar8 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
  if (!bVar13) {
    uVar8 = uVar10;
  }
LAB_001b95da:
  uVar6 = (undefined1)(param_2 >> 8);
  uVar3 = (undefined1)(param_2 >> 0x10);
  uVar12 = param_2 >> 0x18;
  uVar10 = param_2;
  uVar4 = uVar6;
  if (bVar13) {
    uVar10 = uVar12;
    uVar12 = param_2;
    uVar4 = uVar3;
    uVar3 = uVar6;
  }
  uVar11 = param_5 + 0xc;
  *puVar9 = (char)uVar10;
  puVar9[1] = uVar4;
  puVar9[2] = uVar3;
  puVar9[3] = (char)uVar12;
  if (bVar2) {
    uVar12 = uVar8 + uVar11;
    uVar6 = (undefined1)(uVar12 >> 8);
    uVar3 = (undefined1)(uVar12 >> 0x10);
    uVar10 = uVar12 >> 0x18;
    uVar4 = uVar6;
    if (_mach_endian == 2) {
      uVar10 = uVar12;
      uVar12 = uVar12 >> 0x18;
      uVar4 = uVar3;
      uVar3 = uVar6;
    }
  }
  else {
    uVar6 = (undefined1)(uVar11 >> 8);
    uVar3 = (undefined1)(uVar11 >> 0x10);
    uVar10 = uVar11 >> 0x18;
    uVar12 = uVar11;
    uVar4 = uVar6;
    if (_mach_endian == 2) {
      uVar10 = uVar11;
      uVar12 = uVar11 >> 0x18;
      uVar4 = uVar3;
      uVar3 = uVar6;
    }
  }
  puVar9[4] = (char)uVar12;
  puVar9[5] = uVar4;
  puVar9[6] = uVar3;
  puVar9[7] = (char)uVar10;
  uVar6 = (undefined1)(param_3 >> 8);
  uVar3 = (undefined1)(param_3 >> 0x10);
  uVar12 = param_3 >> 0x18;
  uVar10 = param_3;
  uVar4 = uVar6;
  if (_mach_endian == 2) {
    uVar10 = uVar12;
    uVar12 = param_3;
    uVar4 = uVar3;
    uVar3 = uVar6;
  }
  puVar9[8] = (char)uVar10;
  puVar9[9] = uVar4;
  puVar9[10] = uVar3;
  puVar9[0xb] = (char)uVar12;
  _memcpy(puVar9 + 0xc,param_4,(ulong)param_5);
  if (bVar2) {
    IFWD_MemoryStream::SetSize(param_1,*(int *)(param_1 + 8) + uVar8);
    _memcpy((void *)((long)(int)uVar11 + (long)iVar1 + *(long *)(param_1 + 0x10)),param_6,
            (ulong)uVar8);
  }
  return 0;
}

