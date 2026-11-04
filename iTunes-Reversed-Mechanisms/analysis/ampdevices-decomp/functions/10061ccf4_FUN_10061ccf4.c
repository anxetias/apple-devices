// name: FUN_10061ccf4
// address: 10061ccf4

void FUN_10061ccf4(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar3 = FUN_1003627d4();
  if (cVar3 != '\0') {
    *(undefined4 *)(param_2 + 0x19c) = 0;
    *(undefined8 *)(param_2 + 0x144) = 0;
    *(undefined8 *)(param_2 + 0x14c) = 0;
    *(undefined8 *)(param_2 + 0x154) = 0;
    pbVar1 = *(byte **)(param_2 + 0x80);
    if ((*pbVar1 & 1) != 0) {
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      pbVar1[0x14] = 0;
      pbVar1[0x15] = 0;
      pbVar1[0x16] = 0;
      pbVar1[0x17] = 0;
    }
    FUN_1002ff053(param_1,param_2);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar2 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      FUN_100476ac1(local_48,param_1);
      local_34 = FUN_1001b83ae(local_48);
      local_38 = 0x8220102;
      __os_log_impl(0x100000000,uVar2,1,"sync> merged play counts for track \"%{public}s\"",
                    &local_38,0xc);
      FUN_1001b7a50(local_48);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

