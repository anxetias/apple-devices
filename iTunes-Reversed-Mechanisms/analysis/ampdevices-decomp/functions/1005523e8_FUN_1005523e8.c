// name: FUN_1005523e8
// address: 1005523e8

int FUN_1005523e8(long param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_90;
  undefined8 local_88;
  int local_80;
  char local_7a;
  char local_79;
  char local_78 [4];
  char *local_74;
  undefined2 local_6c;
  char *local_6a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_6a = "metaData != nullptr";
LAB_1005525a5:
      local_6c = 0x822;
      local_74 = "Assertion failure";
      builtin_strncpy(local_78,"\x02\x02\"\b",4);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_78,0x16);
    }
  }
  else {
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = 0;
      iVar2 = FUN_1001c955b(param_1,0x70757264,0,0,&local_90);
      if (local_90 != 0 && iVar2 == 0) {
        iVar2 = FUN_1001ca7a7(local_90,1,&local_7a,&local_80);
        if ((iVar2 == 0) && (local_80 != 0)) {
          if (local_7a == '\x15') {
            iVar2 = FUN_1001cb82c(param_1,0x70757264,&local_88,8,&local_79);
            if ((iVar2 == 0) && (local_79 == '\x01')) {
              _snprintf(local_78,0x40,"%lld",local_88);
              FUN_1001e04f5(local_78,param_2);
            }
          }
          else {
            iVar2 = FUN_1001cb213(param_1,0x70757264,param_2);
          }
        }
      }
      goto LAB_10055254c;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_6a = "string != nullptr";
      goto LAB_1005525a5;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10055254c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

