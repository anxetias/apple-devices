// name: FUN_100351687
// address: 100351687

ulong FUN_100351687(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                   uint param_6)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "inArtistInfo1 != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "inArtistInfo2 != __null";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar5 = 0xffffffff;
      goto LAB_100351886;
    }
    if (param_5 < 0x1e) {
      if (param_5 == 4) {
LAB_100351760:
        if (((param_6 & 0x10) != 0) &&
           (uVar5 = FUN_1003513f0(param_1,param_3,param_4,param_6), (int)uVar5 != 0))
        goto LAB_100351886;
        if ((*(short *)(param_1 + 0x62) != 2) || (*(short *)(param_2 + 0x62) != 2)) {
          FUN_1005e48f8(param_1,1,&local_58,&local_60);
          FUN_1005e48f8(param_2,1,&local_68,&local_5c);
          uVar5 = FUN_1002dd449(CONCAT44(uStack_54,local_58),local_60,local_68,local_5c);
          goto LAB_100351886;
        }
      }
      else if (param_5 == 0x1b) {
LAB_100351746:
        uVar5 = 0xffffffff;
        if (*(uint *)(param_2 + 0x14) <= *(uint *)(param_1 + 0x14)) {
          uVar5 = (ulong)(*(uint *)(param_2 + 0x14) < *(uint *)(param_1 + 0x14));
        }
        goto LAB_100351886;
      }
    }
    else {
      if (param_5 == 0xc2) goto LAB_100351760;
      if (param_5 == 0x1e) goto LAB_100351746;
    }
    lVar3 = FUN_1005e3fda(param_1);
    if (lVar3 == 0) {
      for (lVar3 = *(long *)(param_1 + 200); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x48)) {
        if ((*(uint *)(lVar3 + 0xc2) & 0x10000100) == 0x10000000) goto LAB_1003517cd;
      }
      lVar3 = 0;
    }
LAB_1003517cd:
    lVar4 = FUN_1005e3fda(param_2);
    if (lVar4 == 0) {
      for (lVar4 = *(long *)(param_2 + 200); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x48)) {
        if ((*(uint *)(lVar4 + 0xc2) & 0x10000100) == 0x10000000) goto LAB_1003517da;
      }
      uVar5 = (ulong)(-(uint)(lVar3 != 0) | 1);
      goto LAB_100351886;
    }
LAB_1003517da:
    if (lVar3 != 0) {
      uStack_54 = 0;
      local_58 = param_5;
      uVar5 = FUN_1002dfd64(lVar3,lVar4,&local_58,param_6);
      goto LAB_100351886;
    }
  }
  uVar5 = 1;
LAB_100351886:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

