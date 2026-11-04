// name: FUN_100584358
// address: 100584358

undefined1 FUN_100584358(long param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_78);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if ((((*(byte *)(param_1 + 0x298) & 1) != 0) && (*(long *)(param_1 + 0x2a8) != 0)) &&
     (*(char *)(param_1 + 0x2a2) != '\0')) {
    FUN_100587c3c(param_1);
  }
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x2a0) != '\0') {
      bVar1 = *(byte *)(param_1 + 0x298) & 4;
      goto joined_r0x0001005843dc;
    }
LAB_1005843de:
    uVar5 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x2a3) != '\0') {
      bVar1 = *(byte *)(param_1 + 0x2a0);
joined_r0x0001005843dc:
      if (bVar1 == 0) goto LAB_1005843de;
    }
    if ((*(byte *)(param_1 + 0x298) & 8) == 0) {
      *(byte *)(param_1 + 0x298) = *(byte *)(param_1 + 0x298) | 8;
      iVar3 = FUN_100483f95(param_1,0x706c7375,local_78);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      *(byte *)(param_1 + 0x298) = *(byte *)(param_1 + 0x298) & 0xf7;
      uVar5 = (undefined1)local_68;
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "playlist->updatingSmartPlaylist == false";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar5 = 0;
      FUN_1001782e9(0,0);
    }
  }
  FUN_1001b7a50(local_78);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

