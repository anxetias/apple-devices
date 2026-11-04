// name: FUN_1004c31b8
// address: 1004c31b8

int FUN_1004c31b8(long *param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar6 = param_1[0x9e];
  if (lVar6 == 0) {
    FUN_1004c3f8e(param_1);
    lVar6 = param_1[0x9e];
  }
  plVar3 = (long *)param_1[0x9f];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  uVar2 = *param_2;
  if ((uVar2 & 0x24) == 0) {
    if (lVar6 == 0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "cmItem != __null";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      iVar5 = -0x32;
      FUN_1001782e9(0,0);
    }
    else {
      *(uint *)(param_1 + 0xa0) = param_2[4];
      *(uint *)(param_1 + 0xa9) = uVar2;
      *(bool *)(param_1 + 0xa5) = (char)param_2[8] != '\0';
      *(undefined8 *)((long)param_1 + 0x52c) = *(undefined8 *)(param_2 + 6);
      lVar6 = param_1[0x9e];
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x480) = uVar2;
      }
      uVar2 = param_2[9];
      param_1[0xa2] = (ulong)uVar2;
      param_1[0xa3] = (ulong)uVar2;
      param_2[0x20] = uVar2;
      param_1[0xa4] = (ulong)param_2[10];
      if (((char)param_2[0x30] != '\0') && (iVar5 = FUN_1004437d8(lVar6,1), iVar5 - 3U < 0xfffffffe)
         ) {
        uVar7 = (**(code **)(*param_1 + 0x2f8))(param_1,*(char *)((long)param_2 + 0xc1) != '\0');
        *(undefined8 *)(param_2 + 0x32) = uVar7;
      }
      *(undefined1 *)((long)param_1 + 0x50b) = 1;
      iVar5 = (**(code **)(*param_1 + 0x378))(param_1);
      if (iVar5 < -0x80) {
        if ((iVar5 + 0xa665U < 3) || (iVar5 + 0xa415U < 2)) goto LAB_1004c322a;
      }
      else if (iVar5 < 0x2375) {
        if (iVar5 == -0x80) goto LAB_1004c322a;
        if (iVar5 == 0) {
          param_2[0x20] = *(uint *)(param_1 + 0xa3);
          FUN_1001eb9fe(1);
          iVar5 = 0;
          (**(code **)(*param_1 + 0x358))(param_1,0);
          goto LAB_1004c322a;
        }
      }
      else if ((iVar5 == 0x2375) || (iVar5 == 0x2380)) goto LAB_1004c322a;
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  else {
    iVar5 = (**(code **)(*param_1 + 0x3a0))(param_1,param_2);
  }
LAB_1004c322a:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

