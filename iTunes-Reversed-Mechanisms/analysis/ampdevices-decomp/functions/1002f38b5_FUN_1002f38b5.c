// name: FUN_1002f38b5
// address: 1002f38b5

int FUN_1002f38b5(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_460;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_44a = "context != nullptr";
LAB_1002f3aa1:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_458,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      if (*(char *)(param_1 + 0x428) == '\0') {
        iVar2 = FUN_1001f7ceb(*(undefined8 *)(param_1 + 0x430),param_2);
        if (iVar2 == 0) {
          FUN_1001f7652(*(undefined8 *)(param_1 + 0x430));
          *(undefined8 *)(param_1 + 0x430) = 0;
          lVar5 = param_1 + 8;
          FUN_100182803(lVar5,0,&local_460,0);
          if (local_460 < 0x3200000) {
            iVar3 = FUN_1001fa617(lVar5,param_2,lVar5);
          }
          else {
            iVar3 = FUN_1001fb156(lVar5,param_2);
          }
          iVar2 = FUN_1001f7388(lVar5,1,param_1 + 0x430);
          if ((iVar2 != -0x80) && (iVar2 != 0)) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_458 = 0x8220202;
              local_454 = "Assertion failure";
              local_44c = 0x400;
              local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_458,0x12);
            }
          }
          if (iVar3 != 0) {
            iVar2 = iVar3;
          }
        }
      }
      else {
        iVar2 = FUN_1001888ba(param_1 + 8,param_2,&local_458,0);
        if (iVar2 == 0) {
          iVar2 = FUN_100182d4d(&local_458);
        }
      }
      goto LAB_1002f399b;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_44a = "utf8FileName != nullptr";
      goto LAB_1002f3aa1;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1002f399b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

