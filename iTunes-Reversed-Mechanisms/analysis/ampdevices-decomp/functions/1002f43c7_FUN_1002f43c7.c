// name: FUN_1002f43c7
// address: 1002f43c7

int FUN_1002f43c7(long param_1,long param_2,long param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_468;
  int local_45c;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_44a = "context != nullptr";
LAB_1002f45c2:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_458,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      iVar2 = FUN_1002f38b5(param_1,param_2);
      if (param_4 != 0 && param_3 != 0) {
        if (*(char *)(param_1 + 0x428) == '\0') {
          FUN_1001f7652(*(undefined8 *)(param_1 + 0x430));
          *(undefined8 *)(param_1 + 0x430) = 0;
          local_45c = FUN_1001f7388(param_1 + 8,2,&local_468);
          if (local_45c == 0) {
            local_45c = FUN_1001fbb79(local_468,param_2,param_3,param_4);
            FUN_1001f7652(local_468);
          }
          iVar2 = FUN_1001f7388(param_1 + 8,1,param_1 + 0x430);
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_458 = 0x8220202;
              local_454 = "Assertion failure";
              local_44c = 0x400;
              local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_458,0x12);
            }
          }
          if (local_45c != 0) {
            iVar2 = local_45c;
          }
        }
        else {
          iVar2 = FUN_1001809f6(param_3,param_4,param_1 + 8,param_2,&local_458,0);
        }
      }
      goto LAB_1002f44c4;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_44a = "utf8FileName != nullptr";
      goto LAB_1002f45c2;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1002f44c4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

