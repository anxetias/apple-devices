// name: FUN_100225f55
// address: 100225f55

int FUN_100225f55(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  char *local_2c4;
  undefined2 local_2bc;
  int local_2ba;
  undefined4 local_2a8;
  char *local_2a4;
  undefined2 local_29c;
  int local_29a;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined1 local_3e;
  int local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_98[0] = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffffffffffff;
  local_40 = 0;
  local_3c = 0;
  local_a8 = param_1;
  local_a0 = param_2;
  local_3e = param_3;
  FUN_1001c62d9(local_98,0x48);
  iVar6 = FUN_1001e9c3e(local_98);
  if ((iVar6 != -0x80) && (iVar6 != 0)) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_2a8 = 0x8220202;
      local_2a4 = "Assertion failure";
      local_29c = 0x400;
      local_29a = iVar6;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_2a8,0x12);
    }
  }
  FUN_1001c34b7(0x10cf0021,&local_2a8);
  local_40 = CONCAT11(local_40._1_1_,1);
  iVar6 = FUN_1001ee6ff(FUN_10022a90d,&local_a8,0,0,0,"");
  if (iVar6 != -0x80) {
    if (iVar6 == 0) {
      iVar6 = local_3c;
      if ((char)local_40 == '\x01') {
        do {
          iVar6 = FUN_1001e9de0(local_98);
          if ((iVar6 != -0x80) && (iVar6 != 0)) {
            uVar7 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar7,0x10);
            if (cVar5 != '\0') {
              local_2c8 = 0x8220202;
              local_2c4 = "Assertion failure";
              local_2bc = 0x400;
              local_2ba = iVar6;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_2c8,0x12);
            }
          }
          uVar4 = local_48;
          uVar7 = local_50;
          iVar6 = FUN_1001e9eb9(local_98);
          if ((iVar6 != -0x80) && (iVar6 != 0)) {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 != '\0') {
              local_2c8 = 0x8220202;
              local_2c4 = "Assertion failure";
              local_2bc = 0x400;
              local_2ba = iVar6;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_2c8,0x12);
            }
          }
          local_2d8 = *param_4;
          uStack_2d4 = param_4[1];
          uStack_2d0 = param_4[2];
          uStack_2cc = param_4[3];
          if (*(long *)(param_4 + 2) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(param_4 + 2) + 8);
            *plVar1 = *plVar1 + 1;
            UNLOCK();
          }
          FUN_1001ceb3c(&local_2d8,0x7570726d,uVar7,uVar4,&local_2a8);
          plVar1 = (long *)CONCAT44(uStack_2cc,uStack_2d0);
          if (plVar1 != (long *)0x0) {
            LOCK();
            plVar2 = plVar1 + 1;
            lVar3 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar1 = *(long **)(param_4 + 2);
          local_2e8 = *param_4;
          uStack_2e4 = param_4[1];
          uStack_2e0 = param_4[2];
          uStack_2dc = param_4[3];
          if (plVar1 != (long *)0x0) {
            LOCK();
            plVar1[1] = plVar1[1] + 1;
            UNLOCK();
          }
          iVar6 = FUN_1002252e1(&local_2e8);
          if (plVar1 != (long *)0x0) {
            LOCK();
            plVar2 = plVar1 + 1;
            lVar3 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (iVar6 != 0) {
            local_40 = CONCAT11(1,(char)local_40);
          }
          iVar6 = local_3c;
        } while ((char)local_40 != '\0');
      }
      goto LAB_10022626b;
    }
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_2c8 = 0x8220202;
      local_2c4 = "Assertion failure";
      local_2bc = 0x400;
      local_2ba = iVar6;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_2c8,0x12);
    }
  }
  local_40 = local_40 & 0xff00;
LAB_10022626b:
  FUN_10022aac8(&local_a8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

