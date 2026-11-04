// name: FUN_100502d4c
// address: 100502d4c

undefined8 FUN_100502d4c(void)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_108 [2];
  long local_f8 [2];
  undefined8 local_e8 [2];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 local_c0;
  undefined ***local_a8;
  long *local_98;
  long local_90;
  undefined1 local_88 [16];
  long **local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 local_58 [2];
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1004de449();
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      local_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0xde6a;
      local_58[0] = 0x1007a;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(long *)(lVar3 + 0x16640) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      local_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0x6bc7;
      local_58[0] = 0x1007d;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x3dc);
    uVar4 = 0;
    cVar2 = FUN_100537ef0(0);
    local_68 = (long *)CONCAT44(local_68._4_4_,(undefined4)local_68);
    if ((cVar2 == '\0') ||
       (local_68 = (long *)CONCAT44(local_68._4_4_,(undefined4)local_68), DAT_1008c7854 < uVar1))
    goto LAB_100502fe0;
    uVar4 = FUN_1001705fc(*(undefined8 *)(*(long *)(lVar3 + 0x16640) + 0x15d0));
    FUN_1001a78e6(local_f8,uVar4,0);
    if (local_f8[0] != 0) {
      lVar3 = FUN_1002f463c();
      uVar4 = FUN_1001705fc(*(undefined8 *)(lVar3 + 200));
      FUN_1001a78e6(local_108,uVar4,0);
      if (local_108[0] != 0) {
        FUN_10032f0f2(local_e8);
        local_60 = 0;
        uStack_5c = 0;
        uStack_5a = 0;
        local_68 = local_108;
        FUN_1001aa318(local_58);
        local_90 = FUN_1001a7bfa(local_108);
        local_98 = local_108;
        FUN_1001aa318(local_88);
        lVar3 = CONCAT26(uStack_5a,CONCAT24(uStack_5c,local_60));
        while ((local_68 != local_98 || (lVar3 != local_90))) {
          FUN_100527694(&local_c8);
          FUN_1001aaadc(local_58,&local_c8);
          FUN_1001ab006(&local_c8);
          FUN_1001a8c1c(&local_d8,local_58);
          local_c0 = FUN_1001a7bfa(local_f8);
          local_c8 = (undefined **)0x0;
          cVar2 = FUN_10014a3be(local_f8,&local_d8);
          if (cVar2 != '\0') {
            FUN_1002e85ae(local_e8,&local_d8);
          }
          FUN_1001ab006(&local_d8);
          lVar3 = CONCAT26(uStack_5a,CONCAT24(uStack_5c,local_60)) + 1;
          local_60 = (undefined4)lVar3;
          uStack_5c = (undefined2)((ulong)lVar3 >> 0x20);
          uStack_5a = (undefined2)((ulong)lVar3 >> 0x30);
        }
        FUN_1001ab006(local_88);
        FUN_1001ab006(local_58);
        local_c8 = &PTR_FUN_100868688;
        local_a8 = &local_c8;
        local_d0 = FUN_1001a7bfa(local_e8);
        local_d8 = 0;
        if (local_a8 == (undefined ***)0x0) {
          local_78 = (long **)0x0;
        }
        else if (local_a8 == &local_c8) {
          local_78 = &local_98;
          (*(code *)(*local_a8)[3])();
        }
        else {
          local_78 = (long **)(*(code *)(*local_a8)[2])();
        }
        local_48 = (long *)0x0;
        plVar5 = operator_new(0x40);
        *plVar5 = (long)&PTR_FUN_1008685f8;
        if (local_78 == (long **)0x0) {
          lVar3 = 0;
LAB_1005030ac:
          plVar5[6] = lVar3;
        }
        else {
          if (local_78 != &local_98) {
            lVar3 = (*(code *)(*local_78)[2])();
            goto LAB_1005030ac;
          }
          plVar5[6] = (long)(plVar5 + 2);
          (*(code *)(*local_78)[3])();
        }
        local_48 = plVar5;
        FUN_1001a7e00(local_e8,&local_d8,&local_68);
        if (local_48 == &local_68) {
          lVar3 = 0x20;
LAB_1005030fb:
          (**(code **)(*local_48 + lVar3))();
        }
        else {
          lVar3 = 0x28;
          if (local_48 != (long *)0x0) goto LAB_1005030fb;
        }
        if (local_78 == &local_98) {
          lVar3 = 0x20;
LAB_100503122:
          (**(code **)((long)*local_78 + lVar3))();
        }
        else {
          lVar3 = 0x28;
          if (local_78 != (long **)0x0) goto LAB_100503122;
        }
        if (local_a8 == &local_c8) {
          lVar3 = 0x20;
LAB_100503145:
          (**(code **)((long)*local_a8 + lVar3))();
        }
        else {
          lVar3 = 0x28;
          if (local_a8 != (undefined ***)0x0) goto LAB_100503145;
        }
        uVar4 = FUN_1001705fc(local_e8[0]);
        FUN_1001a7a94(local_e8);
        FUN_1001a7a94(local_108);
        FUN_1001a7a94(local_f8);
        goto LAB_100502fe0;
      }
      FUN_1001a7a94(local_108);
    }
    FUN_1001a7a94(local_f8);
  }
  uVar4 = 0;
LAB_100502fe0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

