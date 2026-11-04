// name: FUN_1002ee49c
// address: 1002ee49c

ulong FUN_1002ee49c(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  size_t sVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 local_32;
  byte local_31;
  
  plVar10 = (long *)param_1[4];
  uVar2 = *(undefined4 *)(*param_1 + 100 + (ulong)*(byte *)((long)param_1 + 0xbb) * 4);
  plVar1 = param_1 + 4;
  uVar6 = 0;
  do {
    if (plVar10 == (long *)0x0) break;
    lVar7 = plVar10[1] - *plVar10;
    if (lVar7 == 0) break;
    if ((ulong)(lVar7 >> 3) <= (ulong)param_1[5]) break;
    uVar3 = *(undefined8 *)(*plVar10 + param_1[5] * 8);
    lVar7 = FUN_1002ee658(param_1,uVar3);
    local_31 = 0;
    if (lVar7 == 0) {
      local_31 = 1;
LAB_1002ee549:
      plVar10 = (long *)param_1[4];
      pvVar4 = (void *)(*plVar10 + param_1[5] * 8);
      pvVar8 = (void *)(*plVar10 + param_1[5] * 8 + 8);
      sVar9 = plVar10[1] - (long)pvVar8;
      if (sVar9 != 0) {
        _memmove(pvVar4,pvVar8,sVar9);
      }
      plVar10[1] = (long)pvVar4 + sVar9;
    }
    else {
      FUN_1002ef0c6(param_1,uVar3);
      uVar6 = FUN_1002eecde(param_1,lVar7,(int)param_1[6],uVar2,&local_31);
      if ((local_31 & 1) != 0) goto LAB_1002ee549;
      param_1[5] = param_1[5] + 1;
    }
    plVar10 = (long *)*plVar1;
    pvVar4 = (void *)*plVar10;
    lVar7 = plVar10[1] - (long)pvVar4;
    if (lVar7 == 0) {
      if (plVar10[1] != 0) {
        plVar10[1] = (long)pvVar4;
        operator_delete(pvVar4);
      }
      operator_delete(plVar10);
      *plVar1 = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      plVar10 = (long *)0x0;
    }
    else if ((ulong)(lVar7 >> 3) <= (ulong)param_1[5]) {
      param_1[5] = 0;
      param_1[6] = param_1[6] + 1;
    }
  } while ((uVar6 & 1) == 0);
  uVar12 = CONCAT71((int7)((ulong)plVar1 >> 8),1);
  if ((uVar6 & 1) == 0) {
    puVar11 = (undefined8 *)param_1[0xf];
    do {
      puVar5 = (undefined8 *)param_1[0xe];
      uVar12 = CONCAT71((int7)(uVar12 >> 8),puVar11 != puVar5);
      if (puVar11 == puVar5) break;
      lVar7 = FUN_1002ee658(param_1,*puVar5);
      if (lVar7 != 0) {
        uVar6 = FUN_1002eecde(param_1,lVar7,0,0,&local_32);
      }
      pvVar4 = (void *)param_1[0xe];
      sVar9 = param_1[0xf] - ((long)pvVar4 + 8);
      if (sVar9 != 0) {
        _memmove(pvVar4,(void *)((long)pvVar4 + 8),sVar9);
      }
      puVar11 = (undefined8 *)((long)pvVar4 + sVar9);
      param_1[0xf] = (long)puVar11;
    } while ((uVar6 & 1) == 0);
  }
  return uVar12 & 0xffffffff;
}

