// name: FUN_10058f474
// address: 10058f474

int FUN_10058f474(long param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10058f54c:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_3a = "ITImageAlbumIsValid(album)";
LAB_10058f5f7:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    cVar2 = FUN_100495380(*(undefined8 *)(param_1 + 8));
    if (cVar2 == '\0') goto LAB_10058f54c;
    if (param_2 != (char *)0x0) {
      lVar1 = *(long *)(param_1 + 8);
      sVar4 = _strlen(param_2);
      iVar3 = FUN_1001ddddc(lVar1 + 0x70,param_2,sVar4 & 0xffffffff,param_1 + 0x68);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      goto LAB_10058f573;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_3a = "name != nullptr";
      goto LAB_10058f5f7;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10058f573:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

