// name: FUN_1002d1f64
// address: 1002d1f64

char FUN_1002d1f64(long param_1,undefined8 *param_2,undefined8 *param_3,undefined2 *param_4,
                  undefined4 *param_5,undefined1 *param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined1 *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined2 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  if ((*(byte *)(param_1 + 0x426) & 4) == 0) {
    local_60 = param_6;
    iVar2 = FUN_100181e82(param_1);
    if (iVar2 == 2) {
      lVar3 = FUN_10036f781(param_1);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "device != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = '\0';
        FUN_1001782e9(0,0);
      }
      else {
        if (param_5 != (undefined4 *)0x0) {
          FUN_1005bc3be(lVar3,param_5);
        }
        if (param_4 != (undefined2 *)0x0) {
          *param_4 = 0x100;
        }
        if (param_2 != (undefined8 *)0x0 || param_3 != (undefined8 *)0x0) {
          FUN_1005b916f(lVar3,&local_68);
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = local_68;
          }
          if (param_2 != (undefined8 *)0x0) {
            *param_2 = local_68;
          }
        }
        if (local_60 != (undefined1 *)0x0) {
          *local_60 = 1;
        }
        FUN_10017060f(lVar3);
        cVar1 = '\x01';
      }
    }
    else {
      local_60 = (undefined1 *)CONCAT71(local_60._1_7_,param_5 == (undefined4 *)0x0);
      cVar1 = FUN_1006342d0(param_1 + 0x428,param_2,param_3,param_4);
      if (cVar1 != '\0' && (char)local_60 == '\0') {
        *param_5 = 0x69506f64;
      }
    }
  }
  else {
    cVar1 = '\0';
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

