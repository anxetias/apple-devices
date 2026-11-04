// name: FUN_10061f74d
// address: 10061f74d

undefined1 FUN_10061f74d(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = FUN_1004744bf(param_2[1],0);
  if ((uVar3 >> 0x14 & 1) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "IsIPodVoiceMemoTrack(playlistTrack->trackInfo)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(char *)(lVar1 + 0x36) == '\0') {
    uVar5 = FUN_10061f891(*(undefined8 *)(param_1 + 0x20),param_2);
    goto LAB_10061f7cb;
  }
  if (((*(char *)(lVar1 + 0x40) == '\0') && (*(char *)(lVar1 + 0x31c) != '\0')) &&
     (*(char *)(lVar1 + 0xd30) != '\0')) {
    if (*(char *)(lVar1 + 0x2a2) != '\0') {
      cVar2 = FUN_1003a7f56(param_2);
      if (cVar2 != '\0') goto LAB_10061f7bb;
    }
    uVar5 = 1;
    if (*(char *)(lVar1 + 0x3a4) == '\x01') goto LAB_10061f7cb;
    if (*(char *)(lVar1 + 0x3a4) == '\x02') {
      uVar5 = (*(byte *)(*param_2 + 0x240) & 4) == 0;
      goto LAB_10061f7cb;
    }
  }
LAB_10061f7bb:
  uVar5 = 0;
LAB_10061f7cb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

