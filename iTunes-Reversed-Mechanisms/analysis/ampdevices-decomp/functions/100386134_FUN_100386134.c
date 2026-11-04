// name: FUN_100386134
// address: 100386134

void FUN_100386134(long param_1,undefined4 param_2,long *param_3,long param_4,long param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  ulong local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  ulong *local_e8;
  ulong *local_e0;
  ulong *local_d8;
  undefined1 local_d0;
  ulong *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long local_b0 [2];
  int local_a0;
  undefined1 local_9c;
  undefined4 local_94;
  ulong local_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  undefined2 local_52;
  ulong local_50;
  ulong *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = 0;
  uStack_80 = 0;
  local_78[0] = 0;
  lVar11 = *param_3;
  local_108 = param_3[1];
  lVar5 = param_5;
  lVar3 = param_1;
  local_f0 = param_4;
  local_94 = param_2;
  if (lVar11 != local_108) {
    do {
      local_f8 = lVar3;
      local_100 = lVar5;
      FUN_1001aa318(&local_c8);
      local_c0 = *(undefined4 *)PTR__CGSizeZero_10082e370;
      uStack_bc = *(undefined4 *)(PTR__CGSizeZero_10082e370 + 4);
      uStack_b8 = *(undefined4 *)(PTR__CGSizeZero_10082e370 + 8);
      uStack_b4 = *(undefined4 *)(PTR__CGSizeZero_10082e370 + 0xc);
      FUN_10032f0f2();
      local_a0 = 0;
      local_9c = 2;
      FUN_1001a8c4a(&local_c8,lVar11);
      local_c0 = *(undefined4 *)(lVar11 + 8);
      uStack_bc = *(undefined4 *)(lVar11 + 0xc);
      uStack_b8 = *(undefined4 *)(lVar11 + 0x10);
      uStack_b4 = *(undefined4 *)(lVar11 + 0x14);
      local_a0 = *(int *)(lVar11 + 0x20);
      local_9c = *(undefined1 *)(lVar11 + 0x24);
      if ((local_a0 == 0) && (*(long *)(lVar11 + 0x18) != 0)) {
        local_e8 = (ulong *)0x0;
        lVar5 = FUN_100165e44(DAT_1008c4d98,*(long *)(lVar11 + 0x18),&local_e8);
        if (lVar5 == 0) {
          local_a0 = FUN_100171607(local_e8);
        }
        else {
          FUN_1001a78d6(&local_68,lVar5);
          FUN_1001a7b1c(local_b0,&local_68);
          FUN_1001a85d4(&local_68);
          local_a0 = 0;
          if (local_b0[0] == 0) {
            local_a0 = -0x6c;
          }
        }
        FUN_10017060f(local_e8);
      }
      if (*(char *)(param_1 + 0x50) == '\x01') {
        if (DAT_1008c7568 != -1) {
          _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
        }
        uVar6 = DAT_1008c7560;
        cVar4 = _os_log_type_enabled(DAT_1008c7560,2);
        if (cVar4 != '\0') {
          local_68 = 0x8400302;
          uStack_64 = SUB84(local_c8,0);
          uStack_60 = (undefined4)((ulong)local_c8 >> 0x20);
          uStack_5c = 0x800;
          uStack_5a = (undefined2)local_b0[0];
          uStack_58 = (undefined6)((ulong)local_b0[0] >> 0x10);
          local_52 = 0x400;
          local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(lVar11 + 0x20));
          __os_log_impl(0x100000000,uVar6,2," fetched %@ %p (%d)",&local_68,0x1c);
        }
      }
      uVar10 = uStack_80;
      local_110 = lVar11;
      if (uStack_80 < local_78[0]) {
        FUN_100387028(uStack_80,&local_c8);
        uVar10 = uVar10 + 0x30;
      }
      else {
        lVar11 = (long)(uStack_80 - local_88) >> 4;
        uVar10 = lVar11 * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_10022a8ca(&local_88);
        }
        lVar5 = (long)(local_78[0] - local_88) >> 4;
        uVar7 = lVar5 * 0x5555555555555556;
        if (uVar10 < uVar7) {
          uVar10 = uVar7;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
          uVar10 = 0x555555555555555;
        }
        local_48 = local_78;
        if (uVar10 == 0) {
          auVar12 = ZEXT816(0);
        }
        else {
          auVar12 = FUN_1002e719a(local_78);
        }
        local_68 = auVar12._0_4_;
        uStack_64 = auVar12._4_4_;
        lVar11 = lVar11 * 0x10 + auVar12._0_8_;
        uStack_58 = (undefined6)lVar11;
        local_52 = (undefined2)((ulong)lVar11 >> 0x30);
        uStack_60 = (undefined4)lVar11;
        uStack_5c = (undefined2)((ulong)lVar11 >> 0x20);
        local_50 = auVar12._8_8_ * 0x30 + auVar12._0_8_;
        uStack_5a = local_52;
        FUN_100387028(lVar11,&local_c8);
        uVar2 = uStack_80;
        uVar7 = local_88;
        uVar10 = CONCAT26(local_52,uStack_58) + 0x30;
        uVar8 = (local_88 - uStack_80) + CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_60));
        uStack_58 = (undefined6)uVar10;
        local_52 = (undefined2)(uVar10 >> 0x30);
        local_e0 = &local_118;
        local_d8 = &local_90;
        local_d0 = 0;
        local_90 = uVar8;
        uVar9 = local_88;
        local_118 = uVar8;
        local_e8 = local_78;
        if (local_88 == uStack_80) {
          local_d0 = 1;
        }
        else {
          do {
            FUN_100387028(local_90,uVar9);
            uVar9 = uVar9 + 0x30;
            local_90 = local_90 + 0x30;
          } while (uVar9 != uVar2);
          local_d0 = 1;
          do {
            FUN_1001a85d4(uVar7 + 0x18);
            FUN_1001ab006(uVar7);
            uVar7 = uVar7 + 0x30;
          } while (uVar7 != uVar2);
          uVar10 = CONCAT26(local_52,uStack_58);
        }
        FUN_1002e71d2(&local_e8);
        uVar7 = local_78[0];
        uStack_60 = (undefined4)local_88;
        uStack_5c = (undefined2)(local_88 >> 0x20);
        uStack_5a = (undefined2)(local_88 >> 0x30);
        uStack_58 = (undefined6)local_88;
        local_78[0] = local_50;
        local_50 = uVar7;
        uStack_64 = (undefined4)(local_88 >> 0x20);
        local_88 = uVar8;
        uStack_80 = uVar10;
        local_68 = uStack_60;
        local_52 = uStack_5a;
        FUN_10038707a(&local_68);
        param_1 = local_f8;
        param_5 = local_100;
      }
      uStack_80 = uVar10;
      FUN_1001a85d4(local_b0);
      FUN_1001ab006(&local_c8);
      lVar11 = local_110 + 0x28;
      lVar5 = local_100;
      lVar3 = local_f8;
    } while (lVar11 != local_108);
  }
  uVar6 = _mach_approximate_time();
  *(undefined8 *)(param_5 + 8) = uVar6;
  std::mutex::lock();
  FUN_1003860fc(param_1 + 0x98,param_5);
  std::mutex::unlock();
  local_68 = local_94;
  plVar1 = *(long **)(local_f0 + 0x20);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10016bf14();
  }
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_68,&local_88);
  local_c8 = &local_88;
  FUN_1002e7228();
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

