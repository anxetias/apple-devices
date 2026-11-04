// name: FUN_100192e28
// address: 100192e28

long FUN_100192e28(long *param_1,long param_2)

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
  
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar2 = lVar5 * -0x51832f1fd73e687 + 1;
  if (uVar2 < 0x28c1978feb9f35) {
    plVar1 = param_1 + 2;
    lVar4 = *plVar1 - *param_1 >> 3;
    uVar3 = lVar4 * -0xa3065e3fae7cd0e;
    if (uVar2 < uVar3) {
      uVar2 = uVar3;
    }
    uVar3 = 0x28c1978feb9f34;
    if ((ulong)(lVar4 * -0x51832f1fd73e687) < 0x1460cbc7f5cf9a) {
      uVar3 = uVar2;
    }
    local_30 = plVar1;
    if (uVar3 == 0) {
      auVar6 = ZEXT816(0);
    }
    else {
      auVar6 = FUN_100192f8c(plVar1);
    }
    local_50 = auVar6._0_8_;
    lVar5 = lVar5 * 8 + local_50;
    uStack_38 = auVar6._8_8_ * 0x648 + local_50;
    local_48 = lVar5;
    local_40 = lVar5;
    FUN_1001b7a5c(lVar5,param_2);
    _memcpy((void *)(lVar5 + 0x10),(void *)(param_2 + 0x10),0x638);
    local_40 = local_40 + 0x648;
    lVar5 = (*param_1 - param_1[1]) + local_48;
    FUN_100192fc0(plVar1,*param_1,param_1[1],lVar5);
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
    FUN_100193064();
    return lVar4;
  }
  exception_object = (_Unwind_Exception *)FUN_100192f7c(param_1);
  FUN_100193064(&local_50);
                    /* WARNING: Subroutine does not return */
  __Unwind_Resume(exception_object);
}

