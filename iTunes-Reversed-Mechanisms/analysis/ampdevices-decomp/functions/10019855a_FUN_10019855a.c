// name: FUN_10019855a
// address: 10019855a

long FUN_10019855a(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  _Unwind_Exception *exception_object;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  
  lVar5 = param_1[1] - *param_1 >> 4;
  uVar2 = lVar5 * -0x5555555555555555 + 1;
  if (uVar2 < 0x555555555555556) {
    plVar1 = param_1 + 2;
    lVar4 = *plVar1 - *param_1 >> 4;
    uVar3 = lVar4 * 0x5555555555555556;
    if (uVar2 < uVar3) {
      uVar2 = uVar3;
    }
    uVar3 = 0x555555555555555;
    if ((ulong)(lVar4 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
      uVar3 = uVar2;
    }
    local_30 = plVar1;
    if (uVar3 == 0) {
      auVar6 = ZEXT816(0);
    }
    else {
      auVar6 = FUN_100284d30(plVar1);
    }
    local_50 = auVar6._0_8_;
    local_48 = lVar5 * 0x10 + local_50;
    uStack_38 = auVar6._8_8_ * 0x30 + local_50;
    local_40 = local_48;
    FUN_100198691(local_48,param_2);
    local_40 = local_40 + 0x30;
    lVar5 = (*param_1 - param_1[1]) + local_48;
    FUN_100198740(plVar1,*param_1,param_1[1],lVar5);
    lVar4 = local_40;
    local_50 = *param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    *(undefined4 *)(param_1 + 1) = (undefined4)local_40;
    *(undefined4 *)((long)param_1 + 0xc) = local_40._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_38;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_38._4_4_;
    local_48 = local_50;
    local_40 = local_50;
    uStack_38 = lVar5;
    FUN_1001987ba();
    return lVar4;
  }
  exception_object = (_Unwind_Exception *)FUN_100198730(param_1);
  FUN_1001987ba(&local_50);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(exception_object);
}

