// rea decompile_all
// name: _lzvnStreamDecode
// address: 0x1d1860
// body: available
// range: 0x1d1860-0x1d1a74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _lzvnStreamDecode(long *param_1,ulong param_2)

{
  long lVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  size_t sVar9;
  ulong uVar10;
  
  lVar1 = param_1[4];
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(lVar1 + 0x20) = 1;
  }
  bVar3 = true;
  while( true ) {
    if (*(int *)(lVar1 + 0x24) == 0) {
      uVar10 = (*(long *)(lVar1 + 0x10) - (long)*(void **)(lVar1 + 0x38)) + 0x40000;
      uVar8 = param_1[3];
      if (uVar8 < uVar10) {
        uVar10 = uVar8;
      }
      if (0 < (long)uVar10) {
        _memcpy(*(void **)(lVar1 + 0x38),(void *)param_1[2],uVar10);
        *(long *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x38) + uVar10;
        param_1[2] = param_1[2] + uVar10;
        uVar8 = param_1[3] - uVar10;
        param_1[3] = uVar8;
      }
      if ((uVar8 == 0) && (*(int *)(lVar1 + 0x20) != 0)) {
        *(undefined4 *)(lVar1 + 0x24) = 1;
      }
    }
    else {
      uVar10 = 0;
    }
    pvVar6 = *(void **)(lVar1 + 0x58);
    if ((void *)(*(long *)(lVar1 + 0x18) + 0x20000U) <= pvVar6) {
      lVar5 = *(long *)(lVar1 + 0x40);
      pvVar2 = *(void **)(lVar1 + 0x48);
      pvVar7 = (void *)(lVar5 - 0x10000U);
      if (pvVar6 < (void *)(lVar5 - 0x10000U)) {
        pvVar7 = pvVar6;
      }
      if (pvVar2 < pvVar7) {
        if (lVar5 - (long)pvVar7 != 0) {
          _memmove(pvVar2,pvVar7,lVar5 - (long)pvVar7);
          lVar5 = *(long *)(lVar1 + 0x40);
          pvVar6 = *(void **)(lVar1 + 0x58);
        }
        *(long *)(lVar1 + 0x58) = (long)pvVar6 + ((long)pvVar2 - (long)pvVar7);
        *(long *)(lVar1 + 0x40) = ((long)pvVar2 - (long)pvVar7) + lVar5;
      }
    }
    iVar4 = 0;
    if ((*(int *)(lVar1 + 0x28) == 0) && (*(ulong *)(lVar1 + 0x40) < *(ulong *)(lVar1 + 0x50))) {
      iVar4 = _lzvnDecode(lVar1 + 0x30);
      if (iVar4 == -3) {
        bVar3 = false;
      }
      if (*(int *)(lVar1 + 0x80) != 0) {
        *(undefined4 *)(lVar1 + 0x28) = 1;
      }
    }
    if (*(int *)(lVar1 + 0x2c) != 0) goto LAB_001d1a50;
    pvVar6 = *(void **)(lVar1 + 0x58);
    uVar8 = *(long *)(lVar1 + 0x40) - (long)pvVar6;
    if ((ulong)param_1[1] < uVar8) {
      uVar8 = param_1[1];
    }
    if (0 < (long)uVar8) {
      _memcpy((void *)*param_1,pvVar6,uVar8);
      pvVar6 = (void *)(*(long *)(lVar1 + 0x58) + uVar8);
      *(void **)(lVar1 + 0x58) = pvVar6;
      *param_1 = *param_1 + uVar8;
      param_1[1] = param_1[1] - uVar8;
    }
    if ((*(int *)(lVar1 + 0x28) != 0) && (pvVar6 == *(void **)(lVar1 + 0x40))) break;
    if (*(int *)(lVar1 + 0x2c) != 0) goto LAB_001d1a50;
    pvVar6 = *(void **)(lVar1 + 0x10);
    pvVar2 = *(void **)(lVar1 + 0x30);
    if ((void *)((long)pvVar6 + 0x20000U) <= pvVar2) {
      sVar9 = *(long *)(lVar1 + 0x38) - (long)pvVar2;
      if (0 < (long)sVar9) {
        _memmove(pvVar6,pvVar2,sVar9);
        pvVar6 = *(void **)(lVar1 + 0x10);
      }
      *(void **)(lVar1 + 0x30) = pvVar6;
      *(size_t *)(lVar1 + 0x38) = sVar9 + (long)pvVar6;
    }
    if (uVar8 == 0 && uVar10 == 0) {
      if (iVar4 == -1) {
        if (*(int *)(lVar1 + 0x24) != 0) {
          return 0xffffffff;
        }
        if (!bVar3) {
          return 0xffffffff;
        }
      }
      else {
LAB_001d1a50:
        if (!bVar3) {
          return 0xffffffff;
        }
      }
      return (ulong)(*(int *)(lVar1 + 0x2c) != 0);
    }
  }
  *(undefined4 *)(lVar1 + 0x2c) = 1;
  goto LAB_001d1a50;
}

