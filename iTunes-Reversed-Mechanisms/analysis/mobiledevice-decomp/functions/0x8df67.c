// rea decompile_all
// name: _lzfseStreamEncode
// address: 0x8df67
// body: available
// range: 0x8df67-0x8e39e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzfseStreamEncode(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  size_t sVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  long lVar15;
  
  lVar2 = param_1[4];
  *(long *)(lVar2 + 0x40) = *(long *)(lVar2 + 0x40) + lVar2;
  auVar14._8_4_ = (int)lVar2;
  auVar14._0_8_ = lVar2;
  auVar14._12_4_ = (int)((ulong)lVar2 >> 0x20);
  lVar15 = auVar14._8_8_;
  *(long *)(lVar2 + 0x68) = *(long *)(lVar2 + 0x68) + lVar2;
  *(long *)(lVar2 + 0x70) = *(long *)(lVar2 + 0x70) + lVar15;
  *(long *)(lVar2 + 0x78) = *(long *)(lVar2 + 0x78) + lVar2;
  *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + lVar2;
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + lVar15;
  *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) + lVar2;
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(lVar2 + 0x2c) = 1;
  }
  lVar1 = lVar2 + 0x40;
  do {
    if (*(int *)(lVar2 + 0x30) == 0) {
      uVar13 = 0xc0000 - *(long *)(lVar2 + 0x48);
      uVar12 = param_1[3];
      if (uVar12 < uVar13) {
        uVar13 = uVar12;
      }
      if (0 < (long)uVar13) {
        _memcpy((void *)(*(long *)(lVar2 + 0x48) + *(long *)(lVar2 + 0x10)),(void *)param_1[2],
                uVar13);
        *(long *)(lVar2 + 0x48) = *(long *)(lVar2 + 0x48) + uVar13;
        param_1[2] = param_1[2] + uVar13;
        uVar12 = param_1[3] - uVar13;
        param_1[3] = uVar12;
      }
      if ((uVar12 == 0) && (*(int *)(lVar2 + 0x2c) != 0)) {
        *(undefined4 *)(lVar2 + 0x30) = 1;
      }
    }
    else {
      uVar13 = 0;
    }
    pvVar6 = *(void **)(lVar2 + 0x18);
    pvVar3 = *(void **)(lVar2 + 0x70);
    if ((void *)((long)pvVar6 + 0x60000U) <= pvVar3) {
      sVar11 = *(long *)(lVar2 + 0x68) - (long)pvVar3;
      if (sVar11 != 0) {
        _memmove(pvVar6,pvVar3,sVar11);
        pvVar6 = *(void **)(lVar2 + 0x18);
      }
      *(void **)(lVar2 + 0x70) = pvVar6;
      *(size_t *)(lVar2 + 0x68) = sVar11 + (long)pvVar6;
    }
    if (*(int *)(lVar2 + 0x30) == 0) {
      if ((*(int *)(lVar2 + 0x28) != 0) || (0xfff < *(long *)(lVar2 + 0x48))) {
LAB_0008e168:
        if (*(int *)(lVar2 + 0x34) == 0) {
LAB_0008e16e:
          if (*(int *)(lVar2 + 0x28) != 0) goto LAB_0008e174;
LAB_0008e183:
          _lzfseEncodeInitState(lVar1,*(undefined4 *)(lVar2 + 4),*(undefined8 *)(lVar2 + 0x20));
          *(undefined4 *)(lVar2 + 0x28) = 1;
LAB_0008e19a:
          *(long *)(lVar2 + 0x60) = *(long *)(lVar2 + 0x48) + -400;
          if (*(int *)(lVar2 + 0x30) != 0) {
            *(long *)(lVar2 + 0x60) = *(long *)(lVar2 + 0x48) + -8;
          }
          _lzfseEncodeBase(lVar1);
          if ((*(int *)(lVar2 + 0x30) == 0) ||
             (*(long *)(lVar2 + 0x58) < *(long *)(lVar2 + 0x48) + -8)) {
            if (*(int *)(lVar2 + 0x34) == 0) goto LAB_0008e1fd;
          }
          else {
            *(undefined4 *)(lVar2 + 0x34) = 1;
          }
        }
        goto LAB_0008e1e3;
      }
    }
    else {
      if (*(int *)(lVar2 + 0x34) == 0) {
        if (*(int *)(lVar2 + 0x28) != 0) {
LAB_0008e174:
          _lzfseEncodeSetStateScratch(lVar1,*(undefined8 *)(lVar2 + 0x20));
          goto LAB_0008e19a;
        }
        uVar12 = *(ulong *)(lVar2 + 0x48);
        if (0xfff < (long)uVar12) goto LAB_0008e183;
        lVar4 = *(long *)(lVar2 + 0x68);
        uVar7 = *(ulong *)(lVar2 + 0x78);
        if (uVar7 <= lVar4 + 0x10U) goto LAB_0008e16e;
        sVar11 = _lzvn_encode_scratch_size(0x900);
        pvVar6 = _malloc(sVar11);
        if (pvVar6 == (void *)0x0) {
          uVar12 = 1;
          goto LAB_0008e341;
        }
        uVar7 = uVar7 - lVar4;
        uVar8 = _lzvn_encode_buffer(*(long *)(lVar2 + 0x68) + 0xc,uVar7 - 0x10,
                                    *(undefined8 *)(lVar2 + 0x40),uVar12,pvVar6,0x900);
        _free(pvVar6);
        if (uVar8 < uVar12 && uVar8 != 0) {
          puVar9 = *(undefined4 **)(lVar2 + 0x68);
          *puVar9 = 0x6e787662;
          puVar9[1] = (int)uVar12;
          puVar9[2] = (int)uVar8;
          lVar4 = *(long *)(lVar2 + 0x68);
          *(undefined4 *)(lVar4 + 0xc + uVar8) = 0x24787662;
          uVar10 = *(undefined8 *)(lVar2 + 0x48);
          *(undefined8 *)(lVar2 + 0x50) = uVar10;
          *(undefined8 *)(lVar2 + 0x58) = uVar10;
          *(undefined8 *)(lVar2 + 0x60) = uVar10;
          *(ulong *)(lVar2 + 0x68) = lVar4 + uVar8 + 0x10;
        }
        else {
          if (uVar7 < uVar12 + 0xc) goto LAB_0008e168;
          puVar9 = *(undefined4 **)(lVar2 + 0x68);
          *puVar9 = 0x2d787662;
          puVar9[1] = (int)uVar12;
          pvVar6 = (void *)(*(long *)(lVar2 + 0x68) + 8);
          *(void **)(lVar2 + 0x68) = pvVar6;
          _memcpy(pvVar6,*(void **)(lVar2 + 0x40),uVar12);
          puVar9 = (undefined4 *)(*(long *)(lVar2 + 0x68) + uVar12);
          *puVar9 = 0x24787662;
          *(undefined4 **)(lVar2 + 0x68) = puVar9 + 1;
          uVar10 = *(undefined8 *)(lVar2 + 0x48);
          *(undefined8 *)(lVar2 + 0x50) = uVar10;
          *(undefined8 *)(lVar2 + 0x58) = uVar10;
          *(undefined8 *)(lVar2 + 0x60) = uVar10;
        }
        *(undefined4 *)(lVar2 + 0x34) = 1;
      }
      else {
LAB_0008e1e3:
        if ((*(int *)(lVar2 + 0x38) != 0) || (iVar5 = _lzfseEncodeFinish(lVar1), iVar5 != 0))
        goto LAB_0008e1fd;
      }
      *(undefined4 *)(lVar2 + 0x38) = 1;
    }
LAB_0008e1fd:
    if (*(int *)(lVar2 + 0x3c) == 0) {
      pvVar6 = *(void **)(lVar2 + 0x70);
      uVar12 = *(long *)(lVar2 + 0x68) - (long)pvVar6;
      if ((ulong)param_1[1] < uVar12) {
        uVar12 = param_1[1];
      }
      if (0 < (long)uVar12) {
        _memcpy((void *)*param_1,pvVar6,uVar12);
        pvVar6 = (void *)(*(long *)(lVar2 + 0x70) + uVar12);
        *(void **)(lVar2 + 0x70) = pvVar6;
        *param_1 = *param_1 + uVar12;
        param_1[1] = param_1[1] - uVar12;
      }
      if (*(int *)(lVar2 + 0x38) != 0) {
        if (pvVar6 == *(void **)(lVar2 + 0x68)) {
          *(undefined4 *)(lVar2 + 0x3c) = 1;
          break;
        }
        if (*(int *)(lVar2 + 0x3c) != 0) break;
      }
    }
    else {
      uVar12 = 0;
      if (*(int *)(lVar2 + 0x38) != 0) goto LAB_0008e341;
    }
    uVar7 = *(ulong *)(lVar2 + 0x48);
    if (0x5ffff < (long)uVar7) {
      uVar8 = 0;
      if (0x80000 < *(long *)(lVar2 + 0x58)) {
        uVar8 = *(long *)(lVar2 + 0x58) - 0x40000;
      }
      if (0 < (long)uVar8) {
        _lzfseEncodeTranslateState(lVar1,uVar8);
        if (uVar8 <= uVar7 && uVar7 - uVar8 != 0) {
          _memmove(*(void **)(lVar2 + 0x10),(void *)(uVar8 + (long)*(void **)(lVar2 + 0x10)),
                   uVar7 - uVar8);
        }
        *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar2 + 0x10);
      }
    }
  } while (uVar12 != 0 || uVar13 != 0);
  uVar12 = 0;
LAB_0008e341:
  *(long *)(lVar2 + 0x40) = *(long *)(lVar2 + 0x40) - lVar2;
  *(long *)(lVar2 + 0x68) = *(long *)(lVar2 + 0x68) - lVar2;
  *(long *)(lVar2 + 0x70) = *(long *)(lVar2 + 0x70) - lVar15;
  *(long *)(lVar2 + 0x78) = *(long *)(lVar2 + 0x78) - lVar2;
  *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) - lVar2;
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) - lVar15;
  *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) - lVar2;
  uVar10 = 0xffffffff;
  if (((char)uVar12 == '\0') &&
     ((*(int *)(lVar2 + 0x38) == 0 || (uVar10 = 1, *(int *)(lVar2 + 0x3c) == 0)))) {
    uVar10 = 0;
  }
  return uVar10;
}

