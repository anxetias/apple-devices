// name: FUN_1002b9206
// address: 1002b9206

undefined8 FUN_1002b9206(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  short *psVar3;
  long lVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  ushort local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10048c3a1();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "IsDistinguishedPodcastStylePlaylist(inPlaylist)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = param_1 + 0x158;
    uVar2 = FUN_1005396f9(&DAT_1008c7700,&DAT_10074afd0,0);
    FUN_100538877(lVar4,uVar2);
    FUN_1005389ba(lVar4,0x36);
    FUN_1005389ba(lVar4,0x37);
    FUN_1005389ba(lVar4,0x22);
    if ((*(byte *)(*(long *)(param_1 + 8) + 0x1bb5) & 8) != 0) {
      FUN_100538c95(lVar4,0x5a);
    }
    FUN_100538877(param_1 + 0x138,lVar4);
    FUN_100538abf(param_1 + 0x138,&DAT_100740410);
    *(uint *)(param_1 + 0x330) = *(uint *)(param_1 + 0x330) & 0xfffeff6f | 0x10010;
    psVar3 = (short *)FUN_100352848(param_1);
    if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
      lVar4 = FUN_100351d04(psVar3,0x22);
      if (lVar4 == 0) {
        lVar4 = FUN_100351ae9(psVar3,0x22,0xd,1);
        if (lVar4 != 0) {
          *(undefined1 *)(lVar4 + 7) = 1;
        }
      }
    }
    FUN_1001c62d9(&local_58,0x22);
    local_38 = local_38 & 0xf17a | 0x684;
    uVar2 = FUN_1005396f9(&DAT_1008c7742,&DAT_10074b090,0);
    FUN_100538877(&local_58,uVar2);
    FUN_1005389ba(&local_58,8);
    if ((*(byte *)(*(long *)(param_1 + 8) + 0x1bb5) & 0x10) != 0) {
      FUN_100538c95(&local_58,0x5a);
    }
    if (*(short *)(param_1 + 0x10) == 0xb) {
      local_38 = local_38 & 0xffe5 | 10;
      *(byte *)(param_1 + 0x241) = *(byte *)(param_1 + 0x241) | 4;
    }
    else {
      local_38 = local_38 & 0xffc5 | 0x38;
    }
    FUN_100352633(param_1);
    FUN_10049089c(param_1,&local_58);
    FUN_100489e7b(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

