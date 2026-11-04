// name: FUN_1002d8b65
// address: 1002d8b65

int FUN_1002d8b65(long param_1,undefined8 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  ulong local_488;
  long local_480;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_480 = 0;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_44a = "keybagFileData != nullptr";
LAB_1002d8d8a:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else if (param_2 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_44a = "keybagData != nullptr";
      goto LAB_1002d8d8a;
    }
  }
  else {
    if (param_3 != (int *)0x0) {
      *param_2 = 0;
      *param_3 = 0;
      iVar2 = FUN_10017ecc9(param_1 + 0x50,param_1 + 0x470,&local_458,0);
      iVar4 = 0;
      if (iVar2 == -0x80) goto LAB_1002d8f56;
      if (iVar2 == -0x2b) goto LAB_1002d8dbe;
      if (iVar2 == 0) {
        iVar2 = FUN_10017cc65(&local_458,0x64617461,1,&local_480);
        if (iVar2 == -0x80) goto LAB_1002d8f56;
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          goto joined_r0x0001002d8dfe;
        }
        iVar2 = FUN_10017ce92(local_480,&local_488);
        if (iVar2 == -0x80) goto LAB_1002d8f56;
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          goto joined_r0x0001002d8dfe;
        }
        if ((int)local_488 == 0) {
LAB_1002d8cb3:
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_1000611c0(param_2,local_488 & 0xffffffff);
          if (iVar2 != -0x80) {
            if (iVar2 != 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              goto joined_r0x0001002d8dfe;
            }
            iVar2 = FUN_10017d186(local_480,*param_2,local_488 & 0xffffffff,0,0);
            if (iVar2 == -0x80) goto LAB_1002d8f56;
            if (iVar2 == 0) {
              *param_3 = (int)local_488;
              goto LAB_1002d8cb3;
            }
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 == '\0') goto LAB_1002d8f56;
            goto LAB_1002d8edb;
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
joined_r0x0001002d8dfe:
        if (cVar1 != '\0') {
LAB_1002d8edb:
          local_46a = iVar2;
          iVar2 = local_46a;
          local_46c = 0x400;
          local_474 = "Assertion failure";
          local_478 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
      }
LAB_1002d8f56:
      if (local_480 != 0) {
        FUN_10017cdfb();
      }
      if (iVar2 != 0) {
        FUN_1000bfd00(*param_2);
        *param_2 = 0;
        *param_3 = 0;
        iVar4 = iVar2;
      }
      goto LAB_1002d8dbe;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_44a = "keybagSize != nullptr";
      goto LAB_1002d8d8a;
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_1002d8dbe:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

