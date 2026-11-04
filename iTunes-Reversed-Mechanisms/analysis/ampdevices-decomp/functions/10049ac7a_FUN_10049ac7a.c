// name: FUN_10049ac7a
// address: 10049ac7a

/* WARNING: Type propagation algorithm not settling */

int FUN_10049ac7a(long param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_4c [2];
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10049ad03:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "ITImageAlbumIsValid(album)";
LAB_10049ae5f:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_4c[1] = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",local_4c + 1,0x16);
    }
  }
  else {
    cVar1 = FUN_100495380(*(undefined8 *)(param_1 + 8));
    if (cVar1 == '\0') goto LAB_10049ad03;
    if (param_2 == (undefined1 *)0x0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') goto LAB_10049ad20;
      local_3a = "name != nullptr";
      goto LAB_10049ae5f;
    }
    if (param_3 != 0) {
      *param_2 = 0;
      local_4c[0] = 0;
      iVar2 = FUN_1001de2b7(*(long *)(param_1 + 8) + 0x70,*(undefined4 *)(param_1 + 0x68),param_2,
                            local_4c,param_3 + -1);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          param_2[local_4c[0]] = 0;
          iVar2 = 0;
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_4c[1] = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",local_4c + 1,0x12);
          }
        }
      }
      goto LAB_10049ad2e;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "maxNameLength != 0";
      goto LAB_10049ae5f;
    }
  }
LAB_10049ad20:
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10049ad2e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

