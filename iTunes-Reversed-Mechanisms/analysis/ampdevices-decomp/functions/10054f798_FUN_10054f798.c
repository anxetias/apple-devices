// name: FUN_10054f798
// address: 10054f798

int FUN_10054f798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 ,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  iVar2 = FUN_10054d4e4();
  if (iVar2 == -0x80) goto LAB_10054f990;
  if (iVar2 == 0) {
    iVar2 = FUN_10015cd83(param_1 + 0x710,&local_70);
    if (iVar2 == -0x80) goto LAB_10054f990;
    if (iVar2 == 0) {
      iVar2 = FUN_1005d872c(param_1 + 0x710,param_5 & 1,&local_59,&local_68);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      if (local_68 == 0) goto LAB_10054f990;
      iVar2 = FUN_1001c8e4e(local_68,&local_6c);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          FUN_1003b0547(local_68,param_4);
          if (local_59 == '\0') {
            iVar2 = FUN_1001cbf54(local_68,local_6c,1);
            if (iVar2 == -0x80) goto LAB_10054f980;
            if (iVar2 != 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              goto joined_r0x00010054f97a;
            }
          }
          iVar2 = FUN_10054db1c(param_1,local_70,param_5,param_6);
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
joined_r0x00010054f97a:
          if (cVar1 != '\0') {
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            local_4a = iVar2;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
LAB_10054f980:
      if (local_68 != 0) {
        FUN_1001c8d4b(local_68,0);
      }
      goto LAB_10054f990;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
  }
  if (cVar1 != '\0') {
    local_4c = 0x400;
    local_54 = "Assertion failure";
    local_58 = 0x8220202;
    local_4a = iVar2;
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
LAB_10054f990:
  FUN_10054d72e(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

