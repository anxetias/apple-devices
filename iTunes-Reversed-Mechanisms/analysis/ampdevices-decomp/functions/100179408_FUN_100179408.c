// name: FUN_100179408
// address: 100179408

undefined8 * FUN_100179408(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  _Unwind_Exception *exception_object;
  undefined8 *puVar5;
  undefined8 *puVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  undefined1 auVar12 [16];
  void *local_38;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar6 = param_2;
    if (puVar1 == param_2) {
      *puVar1 = *param_3;
      param_1[1] = puVar1 + 1;
    }
    else {
      puVar5 = puVar1;
      if (puVar1 + -1 < puVar1) {
        puVar5 = puVar1 + 1;
        *puVar1 = puVar1[-1];
      }
      param_1[1] = puVar5;
      if (puVar1 != param_2 + 1) {
        sVar7 = (long)puVar1 - (long)(param_2 + 1);
        _memmove((void *)((long)puVar1 - sVar7),param_2,sVar7);
        puVar5 = (undefined8 *)param_1[1];
      }
      *param_2 = param_3[param_3 < puVar5 && param_2 <= param_3];
    }
  }
  else {
    puVar5 = (undefined8 *)*param_1;
    uVar9 = ((long)puVar1 - (long)puVar5 >> 3) + 1;
    if (uVar9 >> 0x3d != 0) {
      exception_object = (_Unwind_Exception *)FUN_10017961e(param_1);
      if (param_3 != (undefined8 *)0x0) {
        operator_delete(param_3);
      }
                    /* WARNING: Subroutine does not return */
      __Unwind_Resume(exception_object);
    }
    uVar10 = (long)param_2 - (long)puVar5;
    uVar3 = (long)param_1[2] - (long)puVar5;
    uVar8 = (long)uVar3 >> 2;
    if (uVar8 <= uVar9) {
      uVar8 = uVar9;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      auVar12 = ZEXT816(0);
    }
    else {
      auVar12 = FUN_100249b6c();
    }
    pvVar4 = auVar12._0_8_;
    puVar6 = (undefined8 *)((long)pvVar4 + ((long)uVar10 >> 3) * 8);
    local_38 = (void *)((long)pvVar4 + auVar12._8_8_ * 8);
    if ((long)uVar10 >> 3 == auVar12._8_8_) {
      if ((long)uVar10 < 1) {
        uVar9 = 1;
        if (puVar5 != param_2) {
          uVar9 = (long)uVar10 >> 2;
        }
        auVar12 = FUN_100249b6c(param_1 + 2,uVar9);
        puVar6 = (undefined8 *)(auVar12._0_8_ + (uVar9 & 0xfffffffffffffffc) * 2);
        local_38 = (void *)(auVar12._0_8_ + auVar12._8_8_ * 8);
        if (pvVar4 != (void *)0x0) {
          operator_delete(pvVar4);
        }
      }
      else {
        puVar6 = (undefined8 *)((long)puVar6 - ((uVar10 >> 1) + 4 & 0xfffffffffffffff8));
      }
    }
    *puVar6 = *param_3;
    _memcpy(puVar6 + 1,param_2,param_1[1] - (long)param_2);
    lVar2 = param_1[1];
    param_1[1] = param_2;
    sVar7 = (long)param_2 - (long)*param_1;
    pvVar11 = (void *)((long)puVar6 - sVar7);
    _memcpy(pvVar11,(void *)*param_1,sVar7);
    pvVar4 = (void *)*param_1;
    *param_1 = pvVar11;
    param_1[1] = (long)puVar6 + (lVar2 - (long)param_2) + 8;
    param_1[2] = local_38;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  return puVar6;
}

