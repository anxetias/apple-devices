// name: FUN_10061eec7
// address: 10061eec7

void FUN_10061eec7(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined6 uStack_4c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 != (long *)0x0) && (*param_1 != param_1[1])) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      uVar5 = param_1[1] - *param_1 >> 4;
      if (uVar5 < 2) {
        lVar6 = FUN_1001b9294(param_2);
        FUN_1001ba6e0(local_68,param_2,0,lVar6 + -1);
      }
      else {
        FUN_1001b7a5c(local_68,param_2);
      }
      uVar3 = FUN_1001b83ae(local_68);
      local_58 = 0x4000202;
      local_54 = (undefined4)uVar5;
      uStack_50 = 0x822;
      uStack_4e = (undefined2)uVar3;
      uStack_4c = (undefined6)((ulong)uVar3 >> 0x10);
      __os_log_impl(0x100000000,uVar1,1,"sync> syncing %u %{public}s",&local_58,0x12);
      FUN_1001b7a50(local_68);
    }
    lVar6 = *param_1;
    if (lVar6 != param_1[1]) {
      lVar4 = DAT_1008c75c0;
      do {
        if (lVar4 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar1 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        lVar4 = -1;
        if (cVar2 != '\0') {
          uVar3 = FUN_1001b83ae(lVar6);
          local_58 = 0x8220102;
          local_54 = (undefined4)uVar3;
          uStack_50 = (undefined2)((ulong)uVar3 >> 0x20);
          uStack_4e = (undefined2)((ulong)uVar3 >> 0x30);
          __os_log_impl(0x100000000,uVar1,1,"sync>  %{public}s",&local_58,0xc);
          lVar4 = DAT_1008c75c0;
        }
        lVar6 = lVar6 + 0x10;
      } while (lVar6 != param_1[1]);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

