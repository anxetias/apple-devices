// rea decompile_all
// name: _amai_zipCloseFileInZipRaw
// address: 0x1bf48a
// body: available
// range: 0x1bf48a-0x1bf807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _amai_zipCloseFileInZipRaw(long param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar11 = 0xffffff9a;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x58) != 0)) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    uVar11 = 0;
    if ((*(int *)(param_1 + 0xf8) == 8) && (uVar11 = 0, *(int *)(param_1 + 0xfc) == 0)) {
      do {
        if (*(int *)(param_1 + 0x80) == 0) {
          iVar2 = _zipFlushWriteBuffer(param_1);
          *(undefined4 *)(param_1 + 0x80) = 0x4000;
          *(long *)(param_1 + 0x78) = param_1 + 0x100;
          if (iVar2 == -1) {
            uVar11 = 0xffffffff;
            goto LAB_001bf56b;
          }
        }
        iVar2 = *(int *)(param_1 + 0x88);
        uVar3 = _deflate((z_streamp)(param_1 + 0x60),4);
        *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + (*(int *)(param_1 + 0x88) - iVar2);
      } while (uVar3 == 0);
      uVar11 = 0;
      if (uVar3 != 1) {
        uVar11 = uVar3;
      }
    }
    if ((uVar11 == 0) && (*(int *)(param_1 + 0xd4) != 0)) {
      iVar2 = _zipFlushWriteBuffer(param_1);
      uVar11 = -(uint)(iVar2 == -1);
    }
LAB_001bf56b:
    if ((*(int *)(param_1 + 0xf8) == 8) && (*(int *)(param_1 + 0xfc) == 0 && uVar11 == 0)) {
      uVar11 = _deflateEnd((z_streamp)(param_1 + 0x60));
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
    if (*(int *)(param_1 + 0xfc) == 0) {
      param_3 = *(ulong *)(param_1 + 0x4108);
      param_2 = *(ulong *)(param_1 + 0x70);
    }
    lVar5 = *(long *)(param_1 + 0x88);
    lVar6 = *(long *)(param_1 + 0xe0);
    iVar2 = *(int *)(param_1 + 0x4138);
    lVar7 = 0;
    uVar9 = param_3;
    do {
      uVar10 = uVar9;
      *(char *)(lVar6 + 0x10 + lVar7) = (char)uVar10;
      lVar7 = lVar7 + 1;
      uVar9 = uVar10 >> 8;
    } while (lVar7 != 4);
    if (0xff < uVar10) {
      *(undefined4 *)(lVar6 + 0x10) = 0xffffffff;
    }
    uVar10 = lVar5 + iVar2;
    lVar5 = *(long *)(param_1 + 0xe0);
    lVar6 = 0;
    uVar9 = uVar10;
    do {
      uVar8 = uVar9;
      *(char *)(lVar5 + 0x14 + lVar6) = (char)uVar8;
      lVar6 = lVar6 + 1;
      uVar9 = uVar8 >> 8;
    } while (lVar6 != 4);
    if (0xff < uVar8) {
      *(undefined4 *)(lVar5 + 0x14) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0xb8) == 1) {
      *(undefined2 *)(*(long *)(param_1 + 0xe0) + 0x24) = 1;
    }
    lVar5 = *(long *)(param_1 + 0xe0);
    lVar6 = 0;
    uVar9 = param_2;
    do {
      uVar8 = uVar9;
      *(char *)(lVar5 + 0x18 + lVar6) = (char)uVar8;
      lVar6 = lVar6 + 1;
      uVar9 = uVar8 >> 8;
    } while (lVar6 != 4);
    if (0xff < uVar8) {
      *(undefined4 *)(lVar5 + 0x18) = 0xffffffff;
    }
    if (uVar11 == 0) {
      uVar11 = _add_data_in_datablock
                         (param_1 + 0x48,*(undefined8 *)(param_1 + 0xe0),
                          *(undefined8 *)(param_1 + 0xe8));
      _free(*(void **)(param_1 + 0xe0));
      if (uVar11 == 0) {
        uVar4 = (**(code **)(param_1 + 0x18))
                          (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
        lVar5 = (**(code **)(param_1 + 0x20))
                          (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                           *(long *)(param_1 + 0xd8) + 0xe,0);
        if (lVar5 == 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x40);
          lVar5 = 0;
          do {
            uVar9 = param_3;
            *(char *)((long)&local_34 + lVar5) = (char)uVar9;
            lVar5 = lVar5 + 1;
            param_3 = uVar9 >> 8;
          } while (lVar5 != 4);
          if (0xff < uVar9) {
            local_34 = 0xffffffff;
          }
          lVar5 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_34,4);
          uVar11 = 0xffffffff;
          if (lVar5 == 4) {
            uVar1 = *(undefined8 *)(param_1 + 0x40);
            lVar5 = 0;
            do {
              uVar9 = uVar10;
              *(char *)((long)&local_38 + lVar5) = (char)uVar9;
              lVar5 = lVar5 + 1;
              uVar10 = uVar9 >> 8;
            } while (lVar5 != 4);
            if (0xff < uVar9) {
              local_38 = 0xffffffff;
            }
            lVar5 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x38),uVar1,&local_38,4)
            ;
            if (lVar5 == 4) {
              uVar1 = *(undefined8 *)(param_1 + 0x40);
              lVar5 = 0;
              do {
                uVar9 = param_2;
                *(char *)((long)&local_3c + lVar5) = (char)uVar9;
                lVar5 = lVar5 + 1;
                param_2 = uVar9 >> 8;
              } while (lVar5 != 4);
              if (0xff < uVar9) {
                local_3c = 0xffffffff;
              }
              lVar5 = (**(code **)(param_1 + 0x10))
                                (*(undefined8 *)(param_1 + 0x38),uVar1,&local_3c,4);
              uVar11 = -(uint)(lVar5 != 4);
            }
          }
        }
        else {
          uVar11 = 0xffffffff;
        }
        lVar5 = (**(code **)(param_1 + 0x20))
                          (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),uVar4,0);
        uVar11 = -(uint)(lVar5 != 0) | uVar11;
      }
    }
    else {
      _free(*(void **)(param_1 + 0xe0));
    }
    *(long *)(param_1 + 0x4150) = *(long *)(param_1 + 0x4150) + 1;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return uVar11;
}

