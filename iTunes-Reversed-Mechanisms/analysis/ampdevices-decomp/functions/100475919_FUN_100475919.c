// name: FUN_100475919
// address: 100475919

ulong FUN_100475919(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 unaff_R14;
  ulong uVar4;
  long local_68;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100480e23(&local_68,param_1,0);
  if (local_68 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(long *)(local_68 + 0x18) == 0) {
      uVar4 = 0;
    }
    else {
      cVar3 = FUN_100171439(*(long *)(local_68 + 0x18),param_2);
      uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8),cVar3 != '\0');
    }
    FUN_1004c5488(local_68,param_2);
    if ((param_3 & (byte)uVar4) == 1) {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      FUN_1005389ba(&local_58,0xac);
      FUN_1004755ef(param_1,0,&local_58);
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

