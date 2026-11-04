// name: FUN_1001ad0fc
// address: 1001ad0fc

void FUN_1001ad0fc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = FUN_1001af8f2();
  if (lVar1 == 0) {
    local_48 = *param_1;
    uStack_40 = param_1[1];
    local_38 = *(undefined4 *)(param_1 + 2);
    uStack_34 = *(undefined4 *)((long)param_1 + 0x14);
    uStack_30 = *(undefined4 *)(param_1 + 3);
    uStack_2c = *(undefined4 *)((long)param_1 + 0x1c);
    uVar2 = FUN_10019540c();
    _CGColorCreate(uVar2,&local_48);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

