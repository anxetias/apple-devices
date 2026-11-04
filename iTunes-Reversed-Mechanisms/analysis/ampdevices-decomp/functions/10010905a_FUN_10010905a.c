// name: FUN_10010905a
// address: 10010905a

undefined8 FUN_10010905a(long param_1,long param_2,long param_3,uint param_4)

{
  size_t sVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  uint uVar8;
  void *pvVar9;
  void *pvVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  size_t sVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  
  uVar17 = *(int *)(param_1 + 0x44) - 1;
  uVar13 = (ulong)uVar17;
  uVar12 = 0xffffffff;
  uVar11 = param_4 - uVar17;
  if (uVar17 <= param_4) {
    uVar15 = *(uint *)(param_1 + 0x34);
    if (*(uint *)(param_1 + 0x30) == uVar15) {
      lVar4 = *(long *)(param_1 + 0x60);
      if (*(long *)(param_1 + 0x68) != lVar4) {
        sVar1 = uVar13 * 4;
        sVar14 = (ulong)(param_4 - (uVar17 >> 1)) * 4;
        uVar15 = 1;
        uVar7 = 0;
        do {
          lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + uVar7 * 8) + 0x38);
          if (lVar2 == 0) {
            _memcpy(*(void **)(param_3 + uVar7 * 8),*(void **)(lVar4 + uVar7 * 8),uVar13 * 2);
            _memcpy((void *)(*(long *)(param_3 + uVar7 * 8) + (ulong)(uVar17 >> 1) * 4),
                    *(void **)(param_2 + uVar7 * 8),sVar14);
            pvVar10 = *(void **)(*(long *)(param_1 + 0x60) + uVar7 * 8);
            pvVar9 = (void *)(*(long *)(param_2 + uVar7 * 8) + sVar14);
            sVar6 = uVar13 * 2;
          }
          else {
            _memcpy((void *)(*(long *)(lVar4 + uVar7 * 8) + sVar1),*(void **)(param_2 + uVar7 * 8),
                    sVar1);
            _vDSP_conv(*(undefined8 *)(*(long *)(param_1 + 0x60) + uVar7 * 8),1,lVar2,1,
                       *(undefined8 *)(param_3 + uVar7 * 8),1,uVar13,*(undefined4 *)(param_1 + 0x44)
                      );
            _vDSP_conv(*(undefined8 *)(param_2 + uVar7 * 8),1,lVar2,1,
                       *(long *)(param_3 + uVar7 * 8) + sVar1,1,uVar11,
                       *(undefined4 *)(param_1 + 0x44));
            pvVar10 = *(void **)(*(long *)(param_1 + 0x60) + uVar7 * 8);
            pvVar9 = (void *)(*(long *)(param_2 + uVar7 * 8) + (ulong)param_4 * 4 + uVar13 * -4);
            sVar6 = sVar1;
          }
          _memcpy(pvVar10,pvVar9,sVar6);
          uVar7 = (ulong)uVar15;
          lVar4 = *(long *)(param_1 + 0x60);
          uVar15 = uVar15 + 1;
        } while (uVar7 < (ulong)(*(long *)(param_1 + 0x68) - lVar4 >> 3));
      }
    }
    else if (*(uint *)(param_1 + 0x30) == 1) {
      iVar5 = ((*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x4c)) - 2U) / uVar15 + 1;
      uVar17 = (*(int *)(param_1 + 0x4c) - uVar17) + iVar5 * uVar15;
      iVar3 = (~uVar17 + uVar11) / uVar15 + 1;
      lVar4 = *(long *)(param_1 + 0x60);
      if (*(long *)(param_1 + 0x68) != lVar4) {
        sVar1 = uVar13 * 4;
        uVar15 = 1;
        uVar7 = 0;
        do {
          uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x18) + uVar7 * 8) + 0x38);
          _memcpy((void *)(*(long *)(lVar4 + uVar7 * 8) + sVar1),*(void **)(param_2 + uVar7 * 8),
                  sVar1);
          _vDSP_desamp((ulong)*(uint *)(param_1 + 0x4c) * 4 +
                       *(long *)(*(long *)(param_1 + 0x60) + uVar7 * 8),
                       *(undefined4 *)(param_1 + 0x34),uVar12,*(undefined8 *)(param_3 + uVar7 * 8),
                       (long)iVar5,*(undefined4 *)(param_1 + 0x44));
          _vDSP_desamp(*(long *)(param_2 + uVar7 * 8) + (long)(int)uVar17 * 4,
                       *(undefined4 *)(param_1 + 0x34),uVar12,
                       *(long *)(param_3 + uVar7 * 8) + (long)iVar5 * 4,(long)iVar3,
                       *(undefined4 *)(param_1 + 0x44));
          _memcpy(*(void **)(*(long *)(param_1 + 0x60) + uVar7 * 8),
                  (void *)(*(long *)(param_2 + uVar7 * 8) + (ulong)param_4 * 4 + uVar13 * -4),sVar1)
          ;
          uVar7 = (ulong)uVar15;
          lVar4 = *(long *)(param_1 + 0x60);
          uVar15 = uVar15 + 1;
        } while (uVar7 < (ulong)(*(long *)(param_1 + 0x68) - lVar4 >> 3));
        uVar15 = *(uint *)(param_1 + 0x34);
      }
      *(uint *)(param_1 + 0x4c) = (uVar17 - uVar11) + uVar15 * iVar3;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x60);
      uVar15 = 0;
      iVar3 = 0;
      if (*(long *)(param_1 + 0x68) != lVar4) {
        sVar1 = uVar13 * 4;
        uVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 0x4c);
          uVar8 = *(uint *)(param_1 + 0x54);
          _memcpy((void *)(*(long *)(lVar4 + uVar7 * 8) + sVar1),*(void **)(param_2 + uVar7 * 8),
                  sVar1);
          uVar18 = 0;
          do {
            _vDSP_dotpr((ulong)uVar8 * 4 + *(long *)(*(long *)(param_1 + 0x60) + uVar7 * 8),1,
                        (ulong)(uint)(*(int *)(param_1 + 0x48) * iVar3) * 4 +
                        *(long *)(*(long *)(*(long *)(param_1 + 0x18) + uVar7 * 8) + 0x38),1,
                        uVar18 * 4 + *(long *)(param_3 + uVar7 * 8),*(undefined4 *)(param_1 + 0x44))
            ;
            uVar16 = iVar3 + *(int *)(param_1 + 0x3c);
            uVar15 = *(uint *)(param_1 + 0x30);
            uVar8 = (uVar8 + *(int *)(param_1 + 0x38) + 1) - (uint)(uVar16 < uVar15);
            if (uVar16 < uVar15) {
              uVar15 = 0;
            }
            iVar3 = uVar16 - uVar15;
            uVar18 = (ulong)((int)uVar18 + 1);
            uVar15 = uVar8 - uVar17;
          } while (uVar8 < uVar17);
          do {
            _vDSP_dotpr((ulong)uVar15 * 4 + *(long *)(param_2 + uVar7 * 8),1,
                        (ulong)(uint)(*(int *)(param_1 + 0x48) * iVar3) * 4 +
                        *(long *)(*(long *)(*(long *)(param_1 + 0x18) + uVar7 * 8) + 0x38),1,
                        uVar18 * 4 + *(long *)(param_3 + uVar7 * 8),*(undefined4 *)(param_1 + 0x44))
            ;
            uVar16 = iVar3 + *(int *)(param_1 + 0x3c);
            uVar8 = *(uint *)(param_1 + 0x30);
            uVar15 = (uVar15 + *(int *)(param_1 + 0x38) + 1) - (uint)(uVar16 < uVar8);
            if (uVar16 < uVar8) {
              uVar8 = 0;
            }
            iVar3 = uVar16 - uVar8;
            uVar18 = (ulong)((int)uVar18 + 1);
          } while (uVar15 < uVar11);
          _memcpy(*(void **)(*(long *)(param_1 + 0x60) + uVar7 * 8),
                  (void *)(*(long *)(param_2 + uVar7 * 8) + (ulong)param_4 * 4 + uVar13 * -4),sVar1)
          ;
          uVar7 = (ulong)((int)uVar7 + 1);
          lVar4 = *(long *)(param_1 + 0x60);
        } while (uVar7 < (ulong)(*(long *)(param_1 + 0x68) - lVar4 >> 3));
      }
      *(int *)(param_1 + 0x4c) = iVar3;
      *(uint *)(param_1 + 0x54) = uVar15 - uVar11;
    }
    uVar12 = 0;
  }
  return uVar12;
}

