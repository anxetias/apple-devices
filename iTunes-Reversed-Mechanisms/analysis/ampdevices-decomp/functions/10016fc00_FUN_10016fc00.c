// name: FUN_10016fc00
// address: 10016fc00

void FUN_10016fc00(ulong *param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  puVar8 = (undefined8 *)param_1[2];
  if (puVar8 == (undefined8 *)param_1[3]) {
    puVar6 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    if (puVar4 < puVar6 || (long)puVar4 - (long)puVar6 == 0) {
      uVar9 = 1;
      if (puVar8 != puVar6) {
        uVar9 = (long)puVar8 - (long)puVar6 >> 2;
      }
      auVar10 = FUN_100249b6c(param_1[4],uVar9);
      uVar2 = auVar10._0_8_;
      puVar6 = (undefined8 *)(uVar2 + (uVar9 & 0xfffffffffffffffc) * 2);
      uVar9 = param_1[1];
      lVar3 = param_1[2] - uVar9;
      puVar8 = puVar6;
      if (lVar3 != 0) {
        puVar8 = (undefined8 *)(lVar3 + (long)puVar6);
        lVar5 = 0;
        do {
          *(undefined8 *)((long)puVar6 + lVar5) = *(undefined8 *)(uVar9 + lVar5);
          lVar5 = lVar5 + 8;
        } while (lVar3 != lVar5);
      }
      pvVar1 = (void *)*param_1;
      *param_1 = uVar2;
      param_1[1] = (ulong)puVar6;
      param_1[2] = (ulong)puVar8;
      param_1[3] = uVar2 + auVar10._8_8_ * 8;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        puVar8 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar3 = (long)puVar4 - (long)puVar6 >> 3;
      lVar3 = (lVar3 - (lVar3 + 1 >> 0x3f)) + 1 >> 1;
      puVar6 = puVar4 + -lVar3;
      sVar7 = (long)puVar8 - (long)puVar4;
      if (sVar7 != 0) {
        _memmove(puVar6,puVar4,sVar7);
        puVar4 = (undefined8 *)param_1[1];
      }
      puVar8 = (undefined8 *)(sVar7 + (long)puVar6);
      param_1[2] = (ulong)puVar8;
      param_1[1] = (ulong)(puVar4 + -lVar3);
    }
  }
  *puVar8 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}

