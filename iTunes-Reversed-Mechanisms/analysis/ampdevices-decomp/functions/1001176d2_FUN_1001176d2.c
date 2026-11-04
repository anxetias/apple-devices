// name: FUN_1001176d2
// address: 1001176d2

undefined8 FUN_1001176d2(long param_1,long param_2)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(param_1 + 0x1ccf0);
  uVar9 = 0;
  if (lVar5 != 0) {
    if (*(char *)(param_1 + 0xa8) != '\0') {
      uVar8 = 0;
      uVar7 = 0;
      do {
        uVar4 = (ulong)*(uint *)(*(long *)(param_1 + 0xc258) + 0x5c8 + uVar8 * 4);
        lVar5 = uVar4 * 0x78;
        uVar6 = (uint)uVar7;
        cVar1 = *(char *)(*(long *)(param_1 + 0xc258) + 4 + lVar5);
        _memcpy((void *)((ulong)(*(uint *)(param_1 + 0x1cd00) >> 1) * 4 +
                        *(long *)(param_1 + 0x1cc30 + uVar7 * 8)),*(void **)(param_2 + uVar4 * 8),
                (ulong)*(uint *)(param_1 + 0xc2c8) << 2);
        FUN_100117911(*(undefined8 *)(param_1 + 0x1cc30 + uVar7 * 8),
                      *(undefined8 *)(param_1 + 0x1cc90 + uVar7 * 8),
                      *(undefined4 *)(param_1 + 0xc2c8));
        if (cVar1 != '\0') {
          uVar6 = uVar6 + 1;
          uVar7 = (ulong)uVar6;
          _memcpy((void *)((ulong)(*(uint *)(param_1 + 0x1cd00) >> 1) * 4 +
                          *(long *)(param_1 + 0x1cc30 + uVar7 * 8)),
                  *(void **)(param_2 + (ulong)*(uint *)(*(long *)(param_1 + 0xc258) + 8 + lVar5) * 8
                            ),(ulong)*(uint *)(param_1 + 0xc2c8) << 2);
          FUN_100117911(*(undefined8 *)(param_1 + 0x1cc30 + uVar7 * 8),
                        *(undefined8 *)(param_1 + 0x1cc90 + uVar7 * 8),
                        *(undefined4 *)(param_1 + 0xc2c8));
        }
        uVar7 = (ulong)(uVar6 + 1);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(byte *)(param_1 + 0xa8));
      lVar5 = *(long *)(param_1 + 0x1ccf0);
    }
    iVar3 = FUN_10010905a(lVar5,param_1 + 0x1cc90,param_1 + 0x1cbd0,
                          *(undefined4 *)(param_1 + 0x1cd04));
    uVar9 = 0xfffffffa;
    if ((iVar3 == 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0xc258) + 0x5a0) != 0)) {
      uVar9 = 0;
      uVar7 = 0;
      do {
        pvVar2 = *(void **)(param_1 + 0x1cc30 + uVar7 * 8);
        _memcpy(pvVar2,(void *)((long)pvVar2 + (ulong)*(uint *)(param_1 + 0xc2c8) * 4),
                (ulong)*(uint *)(param_1 + 0x1cd00) * 2);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(*(long *)(param_1 + 0xc258) + 0x5a0));
    }
  }
  return uVar9;
}

