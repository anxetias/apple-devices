// name: FUN_1002c6008
// address: 1002c6008

int FUN_1002c6008(long param_1,int param_2,long param_3,long param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  char *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  undefined8 local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = (char *)0x0;
  iVar6 = 0;
  iVar3 = iVar6;
  if (param_2 < 0x6969686d) {
    if (param_2 == 300) {
      iVar3 = FUN_1002c5122(param_1,param_3,param_4,param_1 + 0x230);
      pcVar5 = "name";
      uVar2 = 0;
    }
    else {
      if (param_2 != 0x12d) goto LAB_1002c63f9;
      *(undefined2 *)(param_1 + 0x230) = 0;
      pcVar5 = "sort_name";
      uVar2 = 1;
      iVar3 = 0;
    }
    if (param_4 != 0 && iVar3 == 0) {
      iVar3 = FUN_1002c5198(param_1,param_3,param_4,"artist",*(undefined8 *)(param_1 + 0x38),pcVar5,
                            uVar2);
    }
    goto LAB_1002c63f9;
  }
  if (param_2 == 0x6969686d) {
    if (param_4 != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 0x14);
      FUN_1002cc4f8(&local_48,param_1 + 0x88,param_3 + 0x10,param_3 + 0x14);
      if (local_3a._2_1_ == '\0') {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "success";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        iVar3 = -0x6c;
        goto LAB_1002c63f9;
      }
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
      if (*(char *)(param_1 + 0x51) == '\0') {
        iVar3 = FUN_1001d357f(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),1);
        if (iVar3 == -0x80) goto LAB_1002c63f9;
        if (iVar3 == 0) {
          *(undefined1 *)(param_1 + 0x51) = 1;
          goto LAB_1002c6190;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') goto LAB_1002c63f9;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
      }
      else {
LAB_1002c6190:
        local_50 = _sqlite3_mprintf("INSERT INTO artist (pid,kind,artwork_status,artwork_album_pid,name_order) VALUES (%lld,%u,%u,%lld,0)"
                                    ,*(undefined8 *)(param_3 + 0x14),
                                    (ulong)*(byte *)(param_3 + 0x1c),
                                    (ulong)*(byte *)(param_3 + 0x1d),*(undefined8 *)(param_3 + 0x20)
                                   );
        iVar3 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
        if (iVar3 == -0x80) goto LAB_1002c63f9;
        if (iVar3 == 0) {
          *(undefined2 *)(param_1 + 0x230) = 0;
          iVar3 = 0;
          goto LAB_1002c63f9;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') goto LAB_1002c63f9;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
      }
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      goto LAB_1002c63f9;
    }
    iVar3 = FUN_1002c53b6(param_1,param_1 + 0x230,"artist","pid","sort_name");
    if ((*(char *)(param_1 + 0x51) != '\x01') || (*(ulong *)(param_1 + 0x58) < 100))
    goto LAB_1002c63f9;
    if (iVar3 == 0) {
      iVar3 = FUN_1001d3605(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68));
    }
    else {
      iVar3 = FUN_1001d3677();
    }
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
LAB_1002c64ea:
        local_3c = 0x400;
        local_44 = "Assertion failure";
        local_48 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
LAB_1002c63ed:
    *(undefined1 *)(param_1 + 0x51) = 0;
  }
  else {
    if (param_2 != 0x696c686d) goto LAB_1002c63f9;
    if (param_4 == 0) {
      iVar3 = 0;
      if (*(char *)(param_1 + 0x51) == '\x01') {
        iVar3 = FUN_1001d3605(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68));
        if ((iVar3 != -0x80) && (iVar3 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
            goto LAB_1002c64ea;
          }
        }
        goto LAB_1002c63ed;
      }
    }
    else {
      *(long *)(param_1 + 0x218) = *(long *)(param_1 + 0x218) + (ulong)*(uint *)(param_3 + 8);
      iVar3 = FUN_1001d357f(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),1);
      if (iVar3 == -0x80) goto LAB_1002c63f9;
      if (iVar3 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
        goto LAB_1002c63f9;
      }
      *(undefined1 *)(param_1 + 0x51) = 1;
      iVar3 = iVar6;
    }
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
LAB_1002c63f9:
  _sqlite3_free(local_50);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

