// name: FUN_1005edc94
// address: 1005edc94

void FUN_1005edc94(long param_1,int param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x60);
  do {
    if (lVar1 == 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3e = 0;
        uStack_3c = 0x822;
        local_3a = "device != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
LAB_1005ede31:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    if (*(int *)(lVar1 + 0x68bc) - 1U < 2) {
      if (((*(int *)(lVar1 + 0x68b8) == 8) || (*(int *)(lVar1 + 0x68b8) == 6)) &&
         (*(int *)(lVar1 + 0x68bc) == 2)) {
        if (param_2 == 0) {
          *(undefined4 *)(lVar1 + 0x68bc) = 4;
          param_2 = 0;
        }
        else {
          *(undefined4 *)(lVar1 + 0x68bc) = 3;
        }
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar3 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        param_2 = 0x654;
        if (cVar2 != '\0') {
          local_44 = *(undefined4 *)(lVar1 + 0x68b8);
          local_48 = 0x4000200;
          uStack_40 = 0x400;
          uStack_3e = (undefined2)*(undefined4 *)(lVar1 + 0x68bc);
          uStack_3c = (undefined2)((uint)*(undefined4 *)(lVar1 + 0x68bc) >> 0x10);
          __os_log_impl(0x100000000,uVar3,0x10,
                        "ERROR: DFU restore complete callback called when device in phase %u, substate %u"
                        ,&local_48,0xe);
        }
      }
      FUN_1005e73f0(&local_48,lVar1);
      FUN_100216f84(1,0x10da,0,param_2,&local_48,0);
      FUN_1001b7a50(&local_48);
      goto LAB_1005ede31;
    }
    lVar1 = *(long *)(lVar1 + 0x6878);
  } while( true );
}

