// rea decompile_all
// name: _lzfseStreamDecode
// address: 0x20b334
// body: available
// range: 0x20b334-0x20b5b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _lzfseStreamDecode(long *param_1,uint param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  size_t sVar7;
  void *pvVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  long lStack_50;
  
  lVar1 = param_1[4];
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + lVar1;
  *(long *)(lVar1 + 0x30) = *(long *)(lVar1 + 0x30) + lVar1;
  *(long *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x38) + lVar1;
  *(long *)(lVar1 + 0x40) = *(long *)(lVar1 + 0x40) + lVar1;
  *(long *)(lVar1 + 0x48) = *(long *)(lVar1 + 0x48) + lVar1;
  *(long *)(lVar1 + 0x50) = *(long *)(lVar1 + 0x50) + lVar1;
  *(long *)(lVar1 + 0x58) = *(long *)(lVar1 + 0x58) + lVar1;
  pvVar8 = (void *)(*(long *)(lVar1 + 0x10) + lVar1);
  *(void **)(lVar1 + 0x10) = pvVar8;
  auVar2._8_4_ = (int)lVar1;
  auVar2._0_8_ = lVar1;
  auVar2._12_4_ = (int)((ulong)lVar1 >> 0x20);
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + lVar1;
  *(long *)(lVar1 + 0x20) = *(long *)(lVar1 + 0x20) + lVar1;
  do {
    uVar9 = (long)pvVar8 + (0xc0000 - (long)*(void **)(lVar1 + 0x40));
    if ((ulong)param_1[3] < uVar9) {
      uVar9 = param_1[3];
    }
    if (uVar9 != 0) {
      _memcpy(*(void **)(lVar1 + 0x40),(void *)param_1[2],uVar9);
      *(long *)(lVar1 + 0x40) = *(long *)(lVar1 + 0x40) + uVar9;
      param_1[2] = param_1[2] + uVar9;
      param_1[3] = param_1[3] - uVar9;
    }
    pvVar8 = *(void **)(lVar1 + 0x18);
    pvVar5 = *(void **)(lVar1 + 0x20);
    if ((void *)((long)pvVar8 + 0x60000U) <= pvVar5) {
      lVar6 = *(long *)(lVar1 + 0x48);
      pvVar10 = (void *)(lVar6 - 0x40000U);
      if (pvVar5 < (void *)(lVar6 - 0x40000U)) {
        pvVar10 = pvVar5;
      }
      if (pvVar10 < pvVar8) {
        pvVar10 = pvVar8;
      }
      if (pvVar8 < pvVar10) {
        if (lVar6 - (long)pvVar10 != 0) {
          _memmove(*(void **)(lVar1 + 0x50),pvVar10,lVar6 - (long)pvVar10);
          pvVar5 = *(void **)(lVar1 + 0x20);
          lVar6 = *(long *)(lVar1 + 0x48);
        }
        *(long *)(lVar1 + 0x20) = (long)pvVar5 + ((long)pvVar8 - (long)pvVar10);
        *(long *)(lVar1 + 0x48) = ((long)pvVar8 - (long)pvVar10) + lVar6;
      }
    }
    if ((*(int *)(lVar1 + 0x28) == 0) && (*(ulong *)(lVar1 + 0x48) < *(ulong *)(lVar1 + 0x58))) {
      iVar4 = _lzfseDecode(lVar1 + 0x30);
      bVar3 = true;
      if (iVar4 == -1) {
        if ((param_2 & 1) != 0) goto LAB_0020b531;
      }
      else if (iVar4 == -3) goto LAB_0020b531;
      if (*(int *)(lVar1 + 0x60) != 0) {
        *(undefined4 *)(lVar1 + 0x28) = 1;
      }
    }
    if (*(int *)(lVar1 + 0x2c) != 0) break;
    pvVar8 = *(void **)(lVar1 + 0x20);
    uVar11 = *(long *)(lVar1 + 0x48) - (long)pvVar8;
    if ((ulong)param_1[1] < uVar11) {
      uVar11 = param_1[1];
    }
    if (uVar11 != 0) {
      _memcpy((void *)*param_1,pvVar8,uVar11);
      pvVar8 = (void *)(*(long *)(lVar1 + 0x20) + uVar11);
      *(void **)(lVar1 + 0x20) = pvVar8;
      *param_1 = *param_1 + uVar11;
      param_1[1] = param_1[1] - uVar11;
    }
    if ((*(int *)(lVar1 + 0x28) != 0) && (pvVar8 == *(void **)(lVar1 + 0x48))) {
      *(undefined4 *)(lVar1 + 0x2c) = 1;
      bVar3 = false;
      pvVar5 = pvVar8;
      goto LAB_0020b539;
    }
    if (*(int *)(lVar1 + 0x2c) != 0) break;
    pvVar8 = *(void **)(lVar1 + 0x10);
    pvVar5 = *(void **)(lVar1 + 0x30);
    if ((void *)((long)pvVar8 + 0x60000U) <= pvVar5) {
      sVar7 = *(long *)(lVar1 + 0x40) - (long)pvVar5;
      if (0 < (long)sVar7) {
        _memmove(pvVar8,pvVar5,sVar7);
        pvVar8 = *(void **)(lVar1 + 0x10);
      }
      *(void **)(lVar1 + 0x30) = pvVar8;
      *(size_t *)(lVar1 + 0x40) = sVar7 + (long)pvVar8;
    }
  } while (uVar11 != 0 || uVar9 != 0);
  bVar3 = false;
LAB_0020b531:
  pvVar8 = *(void **)(lVar1 + 0x48);
  pvVar5 = *(void **)(lVar1 + 0x20);
LAB_0020b539:
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) - lVar1;
  lStack_50 = auVar2._8_8_;
  *(long *)(lVar1 + 0x30) = *(long *)(lVar1 + 0x30) - lVar1;
  *(long *)(lVar1 + 0x38) = *(long *)(lVar1 + 0x38) - lStack_50;
  *(long *)(lVar1 + 0x40) = *(long *)(lVar1 + 0x40) - lVar1;
  *(long *)(lVar1 + 0x48) = (long)pvVar8 - lVar1;
  *(long *)(lVar1 + 0x50) = *(long *)(lVar1 + 0x50) - lVar1;
  *(long *)(lVar1 + 0x58) = *(long *)(lVar1 + 0x58) - lStack_50;
  *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) - lVar1;
  *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) - lStack_50;
  *(long *)(lVar1 + 0x20) = (long)pvVar5 - lVar1;
  uVar9 = 0xffffffff;
  if (!bVar3) {
    uVar9 = (ulong)(*(int *)(lVar1 + 0x2c) != 0);
  }
  return uVar9;
}

