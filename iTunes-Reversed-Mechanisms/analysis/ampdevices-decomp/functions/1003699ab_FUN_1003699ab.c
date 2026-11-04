// name: FUN_1003699ab
// address: 1003699ab

int FUN_1003699ab(long param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 local_48;
  undefined2 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x55bb;
      local_48 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_2 = 0;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    if ((param_1 != 0) && (lVar7 = *(long *)(param_1 + 0x10), lVar7 != 0)) {
      lVar2 = *(long *)(param_1 + 400);
      if (lVar2 == 0) {
        iVar6 = 0;
      }
      else {
        lVar3 = *(long *)(lVar7 + 0x2cb0);
        plVar4 = *(long **)(lVar7 + 0x2cb8);
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar4[1] = plVar4[1] + 1;
          UNLOCK();
        }
        iVar6 = -0x2b;
        if ((lVar3 != 0) &&
           (local_60 = lVar2, cVar5 = FUN_10053916d(lVar3 + 0x70,0xc9), cVar5 != '\0')) {
          FUN_100626f3e(lVar3,0xc9,&local_58);
          iVar6 = FUN_1001d4041(*(undefined8 *)(lVar3 + 0x68),CONCAT44(uStack_54,local_58),
                                CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50)),local_60,
                                CONCAT26(uStack_42,local_48),0,&local_70,&local_68);
          if ((local_70 != 0 && local_68 != 0) && iVar6 == 0) {
            iVar6 = 0;
            lVar7 = FUN_100170dc5(0);
            *param_2 = lVar7;
            if (lVar7 == 0) {
              iVar6 = -0x6c;
            }
          }
          if (local_68 != 0) {
            FUN_1001c64c1(local_68);
          }
          if (param_3 != (undefined4 *)0x0) {
            FUN_1001d408a(*(undefined8 *)(lVar3 + 0x68),CONCAT44(uStack_54,local_58),
                          CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50)),local_60,"version",
                          param_3);
          }
        }
        if (plVar4 != (long *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar7 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      goto LAB_100369b8a;
    }
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x6950;
      local_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar6 = -0x32;
LAB_100369b8a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

