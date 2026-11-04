// name: FUN_10026473a
// address: 10026473a

void FUN_10026473a(long param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1001c629e(0x20,&DAT_100711c6e);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "iPodMessage != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
      return;
    }
  }
  else {
    *(undefined4 *)(lVar2 + 8) = 0x6970736d;
    *(undefined4 *)(lVar2 + 0xc) = param_2;
    if (param_3 != (undefined4 *)0x0) {
      *(undefined4 *)(lVar2 + 0x10) = *param_3;
    }
    *(undefined8 *)(lVar2 + 0x18) = param_4;
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
      FUN_1001ea897(lVar2,param_1 + 0x6e8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

