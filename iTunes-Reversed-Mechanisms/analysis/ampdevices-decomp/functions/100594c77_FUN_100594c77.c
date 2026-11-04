// name: FUN_100594c77
// address: 100594c77

int FUN_100594c77(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "objectSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_1001c629e(0x20,&DAT_100711c6e);
      if (puVar3 == (undefined8 *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        iVar2 = -0x6c;
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,0xffffff94);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
LAB_100594db1:
        FUN_100595344(puVar3);
        puVar3 = (undefined8 *)0x0;
      }
      else {
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *puVar3 = 0x14f4c5354;
        iVar2 = FUN_100594f1e(puVar3,param_1,0,0);
        if (iVar2 == -0x80) goto LAB_100594db1;
        if (iVar2 != 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
          if (iVar2 != 0) goto LAB_100594db1;
          iVar2 = 0;
        }
      }
      *param_2 = puVar3;
      goto LAB_100594dbf;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "objectListPtr != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = -0x32;
LAB_100594dbf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

