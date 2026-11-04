// name: FUN_1004b0271
// address: 1004b0271

int FUN_1004b0271(long param_1,char param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 local_898 [256];
  undefined2 local_698 [256];
  undefined4 local_498;
  char *local_494;
  undefined2 local_48c;
  char *local_48a;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_698[0] = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48a = "inItem->downloadManager != __null";
LAB_1004b053b:
      local_48c = 0x822;
      local_494 = "Assertion failure";
      local_498 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_498,0x16);
    }
LAB_1004b0430:
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    if (*(char *)(param_1 + 0x779) == '\0') {
      iVar2 = FUN_1004b056a(param_1,param_2,&local_498);
    }
    else {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48a = "parent != __null";
          goto LAB_1004b053b;
        }
        goto LAB_1004b0430;
      }
      iVar2 = FUN_1004b013c(*(long *)(param_1 + 0x38),param_2,&local_498);
    }
    if (iVar2 == 0) {
      FUN_1001bb41a(param_1 + 0x130,local_898);
      if (param_3 != 0) {
        local_898[0] = (short)param_3;
      }
      FUN_1001e26e1(".tmp",local_698);
      FUN_1001c62d9(&local_78,0x38);
      local_70 = SUB84(local_698,0);
      uStack_6c = (undefined2)((ulong)local_698 >> 0x20);
      uStack_6a = (undefined2)((ulong)local_698 >> 0x30);
      local_48 = local_898;
      local_78 = local_898;
      iVar2 = FUN_10018166a(&local_498,&local_78);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          iVar2 = FUN_10017ecc9(&local_498,local_898,param_4,0);
          if (param_2 == '\0' || iVar2 == 0) goto LAB_1004b043e;
          iVar2 = FUN_100181256(&local_498,local_898,param_4);
          if (iVar2 == -0x80) goto LAB_1004b043e;
          if (iVar2 == 0) {
            FUN_10018e077(param_4);
            iVar2 = 0;
            goto LAB_1004b043e;
          }
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') goto LAB_1004b043e;
          uStack_6a = (undefined2)iVar2;
          uStack_68 = (undefined2)((uint)iVar2 >> 0x10);
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') goto LAB_1004b043e;
          uStack_6a = (undefined2)iVar2;
          uStack_68 = (undefined2)((uint)iVar2 >> 0x10);
        }
        local_70 = 1;
        local_78._4_4_ = 0x7a0a90;
        uStack_6c = 0x400;
        local_78._0_4_ = 0x8220202;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_78,0x12);
      }
    }
  }
LAB_1004b043e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

