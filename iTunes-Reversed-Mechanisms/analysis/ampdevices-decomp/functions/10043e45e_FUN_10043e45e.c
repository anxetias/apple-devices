// name: FUN_10043e45e
// address: 10043e45e

undefined8 FUN_10043e45e(long param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  
  *(undefined4 *)(param_1 + 0x18) = 0x434d4954;
  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  _memcpy((void *)(param_1 + 0x20),param_2 + 1,0x460);
  *(undefined4 *)(param_1 + 0x480) = param_2[0x119];
  uVar6 = FUN_1001ea5dc();
  *(undefined4 *)(param_1 + 0x490) = uVar6;
  *(undefined1 *)(param_1 + 0x528) = 1;
  if (DAT_1008be670 != -1) {
    _dispatch_once_f(&DAT_1008be670,(void *)0x0,FUN_10043e601);
  }
  puVar5 = DAT_1008c7688;
  if (DAT_1008c7688 != (undefined8 *)0x0) {
    puVar1 = DAT_1008c7688 + 3;
    FUN_1001e9de0(puVar1);
    plVar3 = (long *)puVar5[1];
    if (plVar3 < (long *)puVar5[2]) {
      *plVar3 = param_1;
      plVar11 = plVar3 + 1;
    }
    else {
      pvVar4 = (void *)*puVar5;
      lVar9 = (long)plVar3 - (long)pvVar4 >> 3;
      uVar2 = lVar9 + 1;
      if (uVar2 >> 0x3d != 0) {
        FUN_10044a4a8();
LAB_10043e5fc:
                    /* WARNING: Subroutine does not return */
        FUN_1001082d0();
      }
      uVar7 = (long)puVar5[2] - (long)pvVar4;
      uVar10 = (long)uVar7 >> 2;
      if (uVar10 <= uVar2) {
        uVar10 = uVar2;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar8 = (void *)0x0;
      }
      else {
        if (0x1fffffffffffffff < uVar10) goto LAB_10043e5fc;
        pvVar8 = operator_new(uVar10 * 8);
      }
      plVar11 = (long *)((long)pvVar8 + lVar9 * 8 + 8);
      plVar11[-1] = param_1;
      _memcpy(pvVar8,pvVar4,(long)plVar3 - (long)pvVar4);
      *puVar5 = pvVar8;
      puVar5[1] = plVar11;
      puVar5[2] = (void *)(uVar10 * 8 + (long)pvVar8);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
    }
    puVar5[1] = plVar11;
    FUN_1001e9eb9(puVar1);
  }
  return 0;
}

