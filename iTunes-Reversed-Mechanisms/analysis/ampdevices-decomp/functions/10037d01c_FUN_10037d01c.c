// name: FUN_10037d01c
// address: 10037d01c

/* WARNING: Type propagation algorithm not settling */

void FUN_10037d01c(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long local_70;
  long *local_68;
  int local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5c[0] = param_2;
  FUN_10037c504(param_1,local_5c,0);
  if (*param_4 == 0) {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
      FUN_10037c1de(param_1,local_5c[0]);
      return;
    }
    goto LAB_10037d275;
  }
  lVar3 = FUN_10037c952(param_1,local_5c[0],param_3,1,1);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_5c[1] = 0x8220202;
      local_54 = "Assertion failure (expected to be not NULL)";
      local_4c = 0x822;
      local_4a = "entryPtr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_5c + 1,0x16);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 != '\0') goto LAB_10037d0ae;
  }
  else {
LAB_10037d0ae:
    local_70 = *param_4;
    local_68 = (long *)param_4[1];
    if (local_68 != (long *)0x0) {
      LOCK();
      local_68[1] = local_68[1] + 1;
      UNLOCK();
    }
    if (local_70 != *(long *)(lVar3 + 0x30)) {
      FUN_100203686(lVar3 + 0x30,&local_70);
    }
    if (local_68 != (long *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_1001c62d9(local_5c + 1,0x20);
    iVar6 = 0x2713;
    if (local_5c[0] != 0x34) {
      iVar6 = local_5c[0];
    }
    iVar7 = 0x2712;
    if (local_5c[0] != 0x35) {
      iVar7 = iVar6;
    }
    lVar5 = FUN_1002ddacc(iVar7);
    if (lVar5 != 0) {
      FUN_100538abf(local_5c + 1,lVar5);
    }
    if (iVar7 - 0x2afcU < 0xfffffffd) {
      if (0xffffffd9 < iVar7 - 0x2737U) {
        uVar4 = FUN_1005396f9(&DAT_1008c789d,&DAT_1007565a0,0);
        FUN_100538b99(local_5c + 1,uVar4);
        uVar4 = FUN_1005396f9(&DAT_1008c78df,&DAT_1007565cc,0);
        goto LAB_10037d1ee;
      }
    }
    else {
      uVar4 = FUN_1005396f9(&DAT_1008c7b19,&DAT_10075bfd8,0);
      FUN_100538b99(local_5c + 1,uVar4);
      uVar4 = FUN_1005e280e();
LAB_10037d1ee:
      FUN_100538b99(local_5c + 1,uVar4);
    }
    FUN_100538877(lVar3 + 0x10,local_5c + 1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
LAB_10037d275:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

