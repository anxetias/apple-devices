// name: FUN_1002a177d
// address: 1002a177d

void FUN_1002a177d(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined4 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long **pplVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long *local_90;
  long local_88 [3];
  undefined4 local_70;
  undefined1 local_69;
  uint local_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined8 local_58;
  long local_50;
  long lStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar10 = 0;
  local_88[2] = param_4;
  local_70 = param_5;
  do {
    plVar1 = (long *)(param_2 + uVar10 * 0x78);
    if (*(char *)(param_2 + 0x33 + uVar10 * 0x78) == '\0') {
      lVar7 = FUN_1004993ef(param_1,(int)*plVar1,0,1);
      if (((char)local_70 == '\0') || (lVar7 != 0)) {
        if (lVar7 != 0) {
          local_68 = local_68 & 0xffffff00;
          iStack_64 = (int)*(undefined8 *)(lVar7 + 0x38);
          uStack_60 = (undefined4)((ulong)*(undefined8 *)(lVar7 + 0x38) >> 0x20);
          local_50 = 0;
          lStack_48 = 0;
          local_58._0_6_ = SUB86(&local_50,0);
          local_58._6_2_ = (undefined2)((ulong)&local_50 >> 0x30);
          local_90 = plVar1;
          lVar7 = FUN_1002a4228(local_88[2],plVar1,&DAT_100712240,&local_90,&local_a8);
          *(undefined4 *)(lVar7 + 0x30) = uStack_60;
          *(ulong *)(lVar7 + 0x28) = CONCAT44(iStack_64,local_68);
          FUN_1002a41f4((long *)(lVar7 + 0x38),*(undefined8 *)(lVar7 + 0x40));
          *(ulong *)(lVar7 + 0x38) = CONCAT26(local_58._6_2_,(undefined6)local_58);
          *(long *)(lVar7 + 0x40) = local_50;
          *(long *)(lVar7 + 0x48) = lStack_48;
          if (lStack_48 == 0) {
            *(long *)(lVar7 + 0x38) = lVar7 + 0x40;
          }
          else {
            *(long *)(local_50 + 0x10) = lVar7 + 0x40;
            local_58._0_6_ = SUB86(&local_50,0);
            local_58._6_2_ = (undefined2)((ulong)&local_50 >> 0x30);
            local_50 = 0;
            lStack_48 = 0;
          }
          pplVar9 = (long **)&local_58;
          lVar7 = local_50;
          goto LAB_1002a1a39;
        }
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75b8);
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        if (cVar6 != '\0') {
          iStack_64 = (int)*plVar1;
          local_68 = 0x4000100;
          __os_log_impl(0x100000000,uVar8,0x10,"Missing existing ITImageInstance format %d!",
                        &local_68,8);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      }
    }
    else {
      local_90 = local_88;
      local_88[0] = 0;
      local_88[1] = 0;
      for (puVar11 = *(undefined8 **)(param_1 + 0x68); puVar11 != (undefined8 *)0x0;
          puVar11 = (undefined8 *)*puVar11) {
        if ((*(int *)(puVar11 + 2) == (int)*plVar1) && (*(int *)(puVar11 + 0x90) != 0)) {
          cVar6 = FUN_1002a3daf(param_1,*(undefined2 *)((long)puVar11 + 0x47c),&local_a8);
          uVar5 = uStack_9c;
          uVar4 = uStack_a0;
          if (cVar6 == '\0') {
            uVar8 = FUN_1001cc310();
            uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
            cVar6 = _os_log_type_enabled(uVar8,0x10);
            if (cVar6 != '\0') {
              local_68 = 0x8220202;
              iStack_64 = 0x7a0a90;
              uStack_60 = 1;
              local_5c = 0x822;
              uStack_5a = 0x6eef;
              local_58._0_6_ = 0x1007a;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar8);
            FUN_1001782e9(0,0);
          }
          else {
            uVar8 = puVar11[7];
            uVar2 = (undefined4)local_a8;
            uVar3 = local_a8._4_4_;
            lVar7 = FUN_1002a3ee0(&local_90,*(undefined2 *)((long)puVar11 + 0x47c),
                                  (long)puVar11 + 0x47c);
            *(undefined8 *)(lVar7 + 0x20) = uVar8;
            *(undefined4 *)(lVar7 + 0x28) = uVar2;
            *(undefined4 *)(lVar7 + 0x2c) = uVar3;
            *(undefined4 *)(lVar7 + 0x30) = uVar4;
            *(undefined4 *)(lVar7 + 0x34) = uVar5;
          }
        }
      }
      local_68 = CONCAT31(local_68._1_3_,1);
      iStack_64 = 0;
      uStack_60 = 0;
      FUN_1002a3fa0(&local_58,&local_90);
      local_a8 = plVar1;
      lVar7 = FUN_1002a4228(local_88[2],plVar1,&DAT_100712240,&local_a8,&local_69);
      *(undefined4 *)(lVar7 + 0x30) = uStack_60;
      *(ulong *)(lVar7 + 0x28) = CONCAT44(iStack_64,local_68);
      FUN_1002a41f4((long *)(lVar7 + 0x38),*(undefined8 *)(lVar7 + 0x40));
      *(ulong *)(lVar7 + 0x38) = CONCAT26(local_58._6_2_,(undefined6)local_58);
      *(long *)(lVar7 + 0x40) = local_50;
      *(long *)(lVar7 + 0x48) = lStack_48;
      if (lStack_48 == 0) {
        *(long *)(lVar7 + 0x38) = lVar7 + 0x40;
      }
      else {
        *(long *)(local_50 + 0x10) = lVar7 + 0x40;
        local_58._0_6_ = SUB86(&local_50,0);
        local_58._6_2_ = (undefined2)((ulong)&local_50 >> 0x30);
        local_50 = 0;
        lStack_48 = 0;
      }
      FUN_1002a41f4(&local_58,local_50);
      pplVar9 = &local_90;
      lVar7 = local_88[0];
LAB_1002a1a39:
      FUN_1002a41f4(pplVar9,lVar7);
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == (param_3 & 0xffffffff)) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  } while( true );
}

