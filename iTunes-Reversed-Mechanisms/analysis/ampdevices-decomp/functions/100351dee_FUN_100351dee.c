// name: FUN_100351dee
// address: 100351dee

bool FUN_100351dee(short *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (short *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "columns != nullptr";
LAB_100351eea:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    lVar2 = FUN_100351d04();
    if (lVar2 != 0) {
      if ((param_4 != '\0') && (*(char *)(lVar2 + 6) != '\0')) {
        param_1[1] = (short)(((int)lVar2 - (int)param_1) - 4U >> 2) * 0x6db7;
      }
      bVar4 = false;
      goto LAB_100351f1a;
    }
    if (*param_1 < 100) {
      lVar2 = FUN_100351ae9(param_1,param_2,param_3,param_4);
      bVar4 = lVar2 != 0;
      goto LAB_100351f1a;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "columns->numColumns < kMaxColumns";
      goto LAB_100351eea;
    }
  }
  bVar4 = false;
  FUN_1001782e9(0,0);
LAB_100351f1a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

