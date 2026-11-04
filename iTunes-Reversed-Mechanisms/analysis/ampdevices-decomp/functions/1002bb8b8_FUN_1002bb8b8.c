// name: FUN_1002bb8b8
// address: 1002bb8b8

void FUN_1002bb8b8(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_10048c3a1();
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "IsDistinguishedPodcastStylePlaylist(inPodcastPlaylist)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      return;
    }
  }
  else {
    FUN_100314020(param_1);
    lVar3 = FUN_100485529(param_1);
    while (lVar3 != 0) {
      lVar1 = *(long *)(lVar3 + 0x18);
      if (((*(long *)(lVar3 + 8) == 0) || ((*(byte *)(*(long *)(lVar3 + 8) + 0xc5) & 4) == 0)) ||
         ((lVar1 != 0 &&
          ((*(long *)(lVar1 + 8) == 0 || ((*(byte *)(*(long *)(lVar1 + 8) + 0xc5) & 4) == 0)))))) {
        *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) & 0xfd;
        lVar3 = lVar1;
      }
      else {
        *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 2;
        lVar3 = lVar1;
      }
    }
    FUN_10048aa9c(param_1,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      FUN_1003142ca(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

