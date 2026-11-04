// name: FUN_10045f418
// address: 10045f418

int FUN_10045f418(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 local_70 [23];
  undefined1 local_59;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_59 = 0;
  FUN_100238ca8(local_70,param_1 + 0x428);
  if (*(long *)(param_1 + 0x488) == 0) {
    iVar2 = 0;
    goto LAB_10045f601;
  }
  lVar3 = FUN_100170ea9(DAT_1008c4d90,0);
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "mutableData != nullptr";
LAB_10045f650:
      local_4c = 0x822;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_10045f5df:
    lVar4 = 0;
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
  }
  else {
    plVar6 = (long *)(param_1 + 0x480);
    while (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0) {
      FUN_1001b8d18(&local_58,plVar6 + 2);
      FUN_1001663dc(lVar3,CONCAT44(uStack_54,local_58));
      FUN_10014d890(&local_58);
      FUN_1001710c1(lVar3,&local_59,1);
      FUN_1001710c1(lVar3,plVar6 + 4,0x10);
    }
    lVar4 = FUN_100197893(DAT_1008c4d90,lVar3);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_4a = "compressedData != nullptr";
        goto LAB_10045f650;
      }
      goto LAB_10045f5df;
    }
    iVar2 = FUN_10016614c(lVar4,param_1,"LivePhotoGUIDCacheMac",0,0);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
LAB_10045f601:
  FUN_10015a142(local_70);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

