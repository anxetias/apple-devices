// name: FUN_1005d40d7
// address: 1005d40d7

int FUN_1005d40d7(int *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 local_c8;
  long local_c0;
  long *local_b8;
  long *local_b0;
  long local_a8;
  char local_99;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  undefined8 local_6a;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [24];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61727461)) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_78 = 0x8220202;
      local_74 = "Assertion failure";
      local_6c = 0x822;
      local_6a = "ArtworkArrayIsValid(inArray)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
      FUN_1005974ad(param_2,0);
      local_98 = 0;
      uStack_94 = 0;
      iVar4 = FUN_1005d38c7(0,0);
      if (iVar4 != 0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_78 = 0x8220202;
          local_74 = "Assertion failure";
          local_6c = 0x400;
          local_6a = (char *)CONCAT44(local_6a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_78,0x12);
        }
        if (CONCAT44(uStack_94,local_98) != 0) {
          piVar1 = (int *)(CONCAT44(uStack_94,local_98) + 4);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_1005d3cba();
          }
        }
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_78 = 0x8220202;
          local_74 = "Assertion failure";
          local_6c = 0x400;
          local_6a = (char *)CONCAT44(local_6a._4_4_,iVar4);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_78,0x12);
        }
        goto LAB_1005d423f;
      }
      iVar4 = param_1[0x14];
      local_c0 = CONCAT44(uStack_94,local_98);
      if (0 < iVar4) {
        iVar9 = 0;
        local_a8 = param_2;
        do {
          lVar7 = FUN_1005d3da4(param_1,iVar9);
          if ((lVar7 != 0) && (cVar3 = FUN_1005d23de(lVar7,4), cVar3 != '\0')) {
            FUN_1005d3b11(local_c0,0x7fffffff,lVar7);
          }
          iVar9 = iVar9 + 1;
          param_2 = local_a8;
        } while (iVar4 != iVar9);
      }
      FUN_100314161(param_2);
      FUN_1002e42fe(&local_78,param_2);
      lVar7 = local_c0;
      uVar5 = FUN_1005d3a5b(local_c0);
      local_99 = '\0';
      local_c8 = 0;
      local_98 = 0;
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_8a = 0;
      FUN_100241e02(&local_b8,*(undefined8 *)(param_2 + 0x58),0x42,0,0,0);
      local_a8 = CONCAT44(local_a8._4_4_,uVar5);
      local_98 = SUB84(local_b8,0);
      uStack_94 = (undefined4)((ulong)local_b8 >> 0x20);
      uStack_90 = SUB84(local_b0,0);
      uStack_8c = (undefined2)((ulong)local_b0 >> 0x20);
      uStack_8a = (undefined2)((ulong)local_b0 >> 0x30);
      if (local_b8 == (long *)0x0) {
        iVar4 = 1000;
      }
      else {
        iVar4 = (**(code **)(*local_b8 + 0x30))
                          (local_b8,(uint)(param_3 >> 1) & 2,lVar7,&local_99,&local_c8);
        if (iVar4 == -4) {
          cVar3 = FUN_1005d1c19(param_2);
          iVar4 = -4;
          if ((cVar3 != '\0') && (*(int *)(*(long *)(param_2 + 0x58) + 0x3c) == 0x46494c45)) {
            iVar9 = FUN_1002b1325();
            uVar5 = 10;
            if ((iVar9 == 0x57415620) || (iVar9 == 0x41412020)) goto LAB_1005d4391;
          }
        }
        else {
          uVar5 = 6;
          if (iVar4 == 0) {
LAB_1005d4391:
            local_6a._0_6_ = CONCAT42(uVar5,(ushort)local_6a);
            iVar4 = 0;
          }
        }
      }
      if (local_b0 != (long *)0x0) {
        LOCK();
        plVar2 = local_b0 + 1;
        lVar8 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar8 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          FUN_10032f0f2(&local_98);
          if (((int)local_a8 < 1) || (lVar8 = FUN_1005d3da4(lVar7,0), lVar8 == 0)) {
            local_6a._0_6_ = (uint6)(ushort)local_6a;
            uVar6 = 0;
          }
          else {
            FUN_1001a790a(&local_b8,*(undefined8 *)(lVar8 + 0x90));
            FUN_1001a7b1c(&local_98,&local_b8);
            FUN_1001a85d4(&local_b8);
            uVar6 = FUN_1005d1bb6(&local_98);
          }
          if (local_99 != '\0') {
            FUN_1005d46be(param_2,&local_c8);
          }
          FUN_1002e4439(param_2,&local_78,&local_98,uVar6);
          FUN_1001a85d4(&local_98);
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_98 = 0x8220202;
            uStack_94 = 0x7a0a90;
            uStack_90 = 1;
            uStack_8c = 0x400;
            uStack_8a = (undefined2)iVar4;
            uStack_88 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_98,0x12);
          }
        }
      }
      FUN_1001ab006(local_50);
      FUN_1001ab006(local_58);
      FUN_1001ab006(local_60);
      FUN_100314411(param_2);
      if (lVar7 != 0) {
        piVar1 = (int *)(lVar7 + 4);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_1005d3cba(lVar7);
        }
      }
      goto LAB_1005d423f;
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_78 = 0x8220202;
      local_74 = "Assertion failure";
      local_6c = 0x822;
      local_6a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar4 = -0x32;
LAB_1005d423f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

