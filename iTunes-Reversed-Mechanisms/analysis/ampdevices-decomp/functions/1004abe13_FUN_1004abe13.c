// name: FUN_1004abe13
// address: 1004abe13

int FUN_1004abe13(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar4 = FUN_1004aa626();
  if (cVar4 == '\0') {
    uVar8 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar8,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x393b;
      uStack_48 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar10 = 0x1f49;
    goto LAB_1004ac188;
  }
  if (param_2 < 0x6f70746e) {
    if (0x64706c78 < param_2) {
      if (param_2 == 0x64706c79) {
        cVar4 = FUN_1004aa626(param_1);
        if ((cVar4 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
          *(undefined1 *)param_3 = 0;
          goto LAB_1004ac185;
        }
        uVar5 = *(undefined1 *)(param_1 + 0x1b9b);
        goto LAB_1004abf97;
      }
      if (param_2 == 0x656d6435) {
        cVar4 = FUN_1004aa626(param_1);
        if ((cVar4 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
          uVar8 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar8,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x3958;
            uStack_48 = 0x1007d;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1004ac050;
        }
        param_1 = param_1 + 0x1bc9;
        goto LAB_1004ac182;
      }
LAB_1004ac05b:
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_4a = 0;
      iVar10 = 0x232a;
      if (*(long *)(param_1 + 0x78) == 0) {
LAB_1004ac0a6:
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = (long *)std::__shared_weak_count::lock();
        uStack_50 = SUB84(plVar9,0);
        uStack_4c = (undefined2)((ulong)plVar9 >> 0x20);
        uStack_4a = (undefined2)((ulong)plVar9 >> 0x30);
        if (plVar9 == (long *)0x0) goto LAB_1004ac0a6;
        puVar3 = *(undefined8 **)(param_1 + 0x70);
        local_58 = SUB84(puVar3,0);
        uStack_54 = (undefined4)((ulong)puVar3 >> 0x20);
        if (puVar3 != (undefined8 *)0x0) {
          iVar7 = (**(code **)*puVar3)(puVar3,param_1,param_2,param_3);
          iVar10 = 0x232a;
          if (iVar7 != -0x32) {
            iVar10 = iVar7;
          }
        }
      }
      if (*(code **)(param_1 + 0x80) != (code *)0x0) {
        iVar7 = (**(code **)(param_1 + 0x80))(param_1,0x67707270,param_2,param_3,param_1 + 0x90);
        iVar10 = 0x232a;
        if (iVar7 != -0x32) {
          iVar10 = iVar7;
        }
      }
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto LAB_1004ac188;
    }
    if (param_2 == 0x61636e6c) {
      uVar5 = *(undefined1 *)(param_1 + 0x69);
LAB_1004abf97:
      *(undefined1 *)param_3 = uVar5;
    }
    else {
      if (param_2 != 0x636d6435) goto LAB_1004ac05b;
      cVar4 = FUN_1004aa626(param_1);
      iVar10 = -0x32;
      if ((cVar4 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) goto LAB_1004ac188;
      param_1 = param_1 + 0x1c71;
LAB_1004ac182:
      *param_3 = param_1;
    }
  }
  else {
    if (0x72736f6f < param_2) {
      if (param_2 == 0x72736f70) {
        cVar4 = FUN_1004aa626(param_1);
        if ((cVar4 != '\0') && (*(char *)(param_1 + 0x778) == '\0')) {
          uVar6 = *(undefined4 *)(param_1 + 0x7dc);
          goto LAB_1004ac009;
        }
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x3958;
          uStack_48 = 0x1007d;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (param_2 != 0x73686569) {
          if (param_2 != 0x7374696b) goto LAB_1004ac05b;
          uVar5 = *(undefined1 *)(param_1 + 0x128);
          goto LAB_1004abf97;
        }
        cVar4 = FUN_1004aa626(param_1);
        if ((cVar4 != '\0') && (*(char *)(param_1 + 0x778) == '\0')) {
          param_1 = param_1 + 0x1d88;
          goto LAB_1004ac182;
        }
        uVar8 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar8,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x3958;
          uStack_48 = 0x1007d;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
LAB_1004ac050:
      iVar10 = -0x32;
      goto LAB_1004ac188;
    }
    if (param_2 != 0x6f70746e) {
      if (param_2 != 0x70706d66) goto LAB_1004ac05b;
      uVar5 = *(undefined1 *)(param_1 + 0x1ce);
      goto LAB_1004abf97;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x144);
LAB_1004ac009:
    *(undefined4 *)param_3 = uVar6;
  }
LAB_1004ac185:
  iVar10 = 0;
LAB_1004ac188:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar10;
}

