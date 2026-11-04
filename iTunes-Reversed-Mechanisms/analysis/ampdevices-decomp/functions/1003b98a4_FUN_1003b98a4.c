// name: FUN_1003b98a4
// address: 1003b98a4

ulong FUN_1003b98a4(long param_1,int param_2,int *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined2 uStack_2ec;
  undefined2 uStack_2ea;
  undefined4 uStack_2e8;
  undefined2 uStack_2e4;
  undefined2 uStack_2e2;
  undefined4 *local_2e0;
  code *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined7 uStack_2c0;
  undefined4 uStack_2b9;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  long *local_2a0;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar6 = *(long *)(param_1 + 0x38);
  if (param_2 < 0x72646576) {
    if (param_2 == 0x70646c79) {
      uVar4 = *(uint *)(param_1 + 0x5c);
      lVar10 = *(long *)(param_3 + 3);
      lVar2 = *(long *)(param_3 + 5);
      local_2d8 = operator_new(0x30);
      *(undefined ***)local_2d8 = &PTR_FUN_100856fc0;
      *(code **)(local_2d8 + 8) = FUN_1003ba3e5;
      *(long *)(local_2d8 + 0x10) = lVar6;
      *(ulong *)(local_2d8 + 0x18) = (ulong)uVar4;
      *(long *)(local_2d8 + 0x20) = lVar10;
      *(long *)(local_2d8 + 0x28) = lVar2;
      uStack_2c8 = 0;
      uStack_2c4 = 0;
      uStack_2c0 = 0;
      uStack_2b9 = 0;
      local_2b0 = 0;
      uStack_2a8 = 0;
      local_2a0 = (long *)0x0;
      FUN_100178574(&local_300,FUN_1003ba3e5,lVar6,(ulong)uVar4,lVar10,lVar2);
      local_2b0 = local_300;
      FUN_10017869a(&local_2f8);
      if (local_2a0 != (long *)0x0) {
        LOCK();
        plVar1 = local_2a0 + 1;
        lVar6 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*local_2a0 + 0x10))(local_2a0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_2d8 == (code *)&local_2f8) {
        lVar6 = 0x20;
LAB_1003b9b99:
        (**(code **)(*(long *)local_2d8 + lVar6))();
      }
      else {
        lVar6 = 0x28;
        if (local_2d8 != (code *)0x0) goto LAB_1003b9b99;
      }
LAB_1003b9b9f:
      uVar5 = 0;
      goto LAB_1003b9dc9;
    }
    if (param_2 != 0x72646220) goto LAB_1003b9ad1;
    if (*param_3 == 10) {
      if ((char)param_3[3] != '\0') {
        for (lVar6 = DAT_1008c75a8; lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
          cVar3 = FUN_1001df957(param_3 + 3,lVar6 + 0x38,0);
          if ((cVar3 != '\0') && (*(long *)(lVar6 + 0x18) != param_1)) goto LAB_1003b9dc3;
        }
        puVar8 = (undefined4 *)FUN_1001c6429(0x88);
        if (puVar8 == (undefined4 *)0x0) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_2f8._0_4_ = 0x8220202;
            local_2f8._4_4_ = 0x7a0a90;
            uStack_2f0 = 1;
            uStack_2ec = 0x822;
            uStack_2ea = 0x92b3;
            uStack_2e8 = 0x1007c;
            uStack_2e4 = 0;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_2f8,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1003b9e54;
        }
        *puVar8 = 0x64622020;
        *(long *)(puVar8 + 6) = param_1;
        *(undefined8 *)(puVar8 + 0xc) = *(undefined8 *)(param_3 + 0x17);
        puVar8[0x1e] = param_3[0x13];
        *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(param_3 + 0x15);
        FUN_1001dfbb3(param_3 + 3,puVar8 + 0xe,0x40);
        lVar6 = DAT_1008c75a8;
        if (*(long *)(puVar8 + 2) != 0) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_2f8._0_4_ = 0x8220202;
            local_2f8._4_4_ = 0x7a0a90;
            uStack_2f0 = 1;
            uStack_2ec = 0x822;
            uStack_2ea = 0x4952;
            uStack_2e8 = 0x1007a;
            uStack_2e4 = 0;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_2f8,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (lVar6 == 0) {
          puVar9 = &DAT_1008c75a8;
        }
        else {
          do {
            lVar10 = lVar6;
            lVar6 = *(long *)(lVar10 + 8);
          } while (lVar6 != 0);
          puVar9 = (undefined8 *)(lVar10 + 8);
        }
        *(undefined8 *)(puVar8 + 2) = 0;
        *puVar9 = puVar8;
        FUN_1001c62d9(&local_2f8,0x20);
        *(code **)(puVar8 + 8) = FUN_1003ba66d;
        local_2f8._0_4_ = SUB84(puVar8,0);
        local_2f8._4_4_ = (undefined4)((ulong)puVar8 >> 0x20);
        uStack_2f0 = 0x3ba66d;
        uStack_2ec = 1;
        uStack_2ea = 0;
        local_2e0 = *(undefined4 **)(puVar8 + 0xc);
        if ((*(byte *)(param_3 + 0x13) & 2) != 0) {
          uVar7 = FUN_1003070df();
          *(undefined8 *)(puVar8 + 0x20) = uVar7;
          *(undefined1 *)((long)puVar8 + 0x12) = 0;
          uStack_2e8 = (undefined4)uVar7;
          uStack_2e4 = (undefined2)((ulong)uVar7 >> 0x20);
          uStack_2e2 = (undefined2)((ulong)uVar7 >> 0x30);
          uVar4 = FUN_1003b8036(puVar8,0x696e6974);
          uVar5 = (ulong)uVar4;
          *(undefined1 *)(puVar8 + 4) = 1;
          *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
          goto LAB_1003b9dc9;
        }
        *(undefined1 *)((long)puVar8 + 0x12) = 1;
        puVar9 = (undefined8 *)(puVar8 + 0x20);
        uVar4 = FUN_100314c1e(param_3[0x14],puVar9);
        if (uVar4 == 0) {
          FUN_100315b87(*(undefined8 *)(puVar8 + 0x20));
          uVar7 = *puVar9;
          uStack_2e8 = (undefined4)uVar7;
          uStack_2e4 = (undefined2)((ulong)uVar7 >> 0x20);
          uStack_2e2 = (undefined2)((ulong)uVar7 >> 0x30);
          uVar4 = FUN_1003b8036(puVar8,0x696e6974);
          if (uVar4 == 0) {
            *(undefined1 *)(puVar8 + 4) = 1;
            *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
            *(undefined4 **)(puVar8 + 0xc) = local_2e0;
            goto LAB_1003b9b9f;
          }
          *(undefined1 *)((long)puVar8 + 0x12) = 0;
          FUN_1003152ce(*(undefined8 *)(puVar8 + 0x20));
          *puVar9 = 0;
        }
        uVar5 = (ulong)uVar4;
        FUN_1003b8359(puVar8);
        goto LAB_1003b9dc9;
      }
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_2f8._0_4_ = 0x8220202;
        local_2f8._4_4_ = 0x7a0a90;
        uStack_2f0 = 1;
        uStack_2ec = 0x822;
        uStack_2ea = 0x9279;
        uStack_2e8 = 0x1007c;
        uStack_2e4 = 0;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_2f8,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_2f8._0_4_ = 0x8220202;
        local_2f8._4_4_ = 0x7a0a90;
        uStack_2f0 = 1;
        uStack_2ec = 0x822;
        uStack_2ea = 0x91c4;
        uStack_2e8 = 0x1007c;
        uStack_2e4 = 0;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_2f8,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  else {
    if (param_2 == 0x72646576) {
      uVar5 = 0xfffffffc;
      goto LAB_1003b9dc9;
    }
    if (param_2 == 0x72656e63) {
      if (*param_3 == 10) {
        if ((char)param_3[3] != '\0') {
          for (puVar8 = DAT_1008c75a0; puVar8 != (undefined4 *)0x0;
              puVar8 = *(undefined4 **)(puVar8 + 2)) {
            cVar3 = FUN_1001df957(param_3 + 3,puVar8 + 0xe,0);
            if ((cVar3 != '\0') && (*(long *)(puVar8 + 6) != param_1)) goto LAB_1003b9dc3;
          }
          puVar8 = (undefined4 *)FUN_1001c6429(0x188);
          if (puVar8 == (undefined4 *)0x0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_2f8._0_4_ = 0x8220202;
              local_2f8._4_4_ = 0x7a0a90;
              uStack_2f0 = 1;
              uStack_2ec = 0x822;
              uStack_2ea = 0x923e;
              uStack_2e8 = 0x1007c;
              uStack_2e4 = 0;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_2f8,0x16)
              ;
            }
            FUN_1001782e9(0,0);
LAB_1003b9e54:
            uVar5 = 0xffffff94;
            goto LAB_1003b9dc9;
          }
          *puVar8 = 0x656e6364;
          *(long *)(puVar8 + 6) = param_1;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(param_3 + 0x14);
          *(undefined8 *)(puVar8 + 0xc) = *(undefined8 *)(param_3 + 0x16);
          FUN_1001dfbb3(param_3 + 3,puVar8 + 0xe,0x40);
          FUN_1001e3c85(param_3 + 0x18,puVar8 + 0x1e,0x7f);
          FUN_1001e3c85(param_3 + 0x38,puVar8 + 0x3e,0x7f);
          puVar8[0x5f] = param_3[0x13];
          *(char *)(puVar8 + 0x60) = (char)param_3[0x58];
          if (*(long *)(puVar8 + 2) != 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_2f8._0_4_ = 0x8220202;
              local_2f8._4_4_ = 0x7a0a90;
              uStack_2f0 = 1;
              uStack_2ec = 0x822;
              uStack_2ea = 0x4952;
              uStack_2e8 = 0x1007a;
              uStack_2e4 = 0;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_2f8,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          *(undefined4 **)(puVar8 + 2) = DAT_1008c75a0;
          DAT_1008c75a0 = puVar8;
          FUN_1001c62d9(&local_2f8,0x2c0);
          uStack_2ec = 10;
          uStack_2ea = 0;
          uStack_2e8 = 9;
          uStack_2e4 = (undefined2)*(undefined4 *)(lVar6 + 0x10);
          uStack_2e2 = (undefined2)((uint)*(undefined4 *)(lVar6 + 0x10) >> 0x10);
          local_2d8 = FUN_1003ba4e7;
          *(code **)(puVar8 + 8) = FUN_1003ba4e7;
          local_2cc = (undefined4)*(undefined8 *)(puVar8 + 0xc);
          uStack_2c8 = (undefined4)((ulong)*(undefined8 *)(puVar8 + 0xc) >> 0x20);
          local_2e0 = puVar8;
          uVar4 = FUN_1003b7eba(puVar8,0x696e6974);
          uVar5 = (ulong)uVar4;
          if (uVar4 != 0) {
            FUN_1003b8c8d(puVar8);
            goto LAB_1003b9dc9;
          }
          *(undefined1 *)(puVar8 + 4) = 1;
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
          puVar8[0x5e] = local_2d0;
          *(ulong *)(puVar8 + 0xc) = CONCAT44(uStack_2c8,local_2cc);
          goto LAB_1003b9b9f;
        }
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_2f8._0_4_ = 0x8220202;
          local_2f8._4_4_ = 0x7a0a90;
          uStack_2f0 = 1;
          uStack_2ec = 0x822;
          uStack_2ea = 0x9205;
          uStack_2e8 = 0x1007c;
          uStack_2e4 = 0;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_2f8,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_2f8._0_4_ = 0x8220202;
          local_2f8._4_4_ = 0x7a0a90;
          uStack_2f0 = 1;
          uStack_2ec = 0x822;
          uStack_2ea = 0x91c4;
          uStack_2e8 = 0x1007c;
          uStack_2e4 = 0;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_2f8,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    else {
      if (param_2 == 0x72706c79) {
        uVar5 = FUN_10043cd8a(lVar6,param_1,param_3);
        return uVar5;
      }
LAB_1003b9ad1:
      if (*param_3 == 10) {
        uVar5 = 0;
        FUN_1003b8245(&local_2f8,0);
        if (param_2 != 0x756e7267) {
          if (param_2 == 0x6974737a) {
            param_3[3] = 0x1660;
          }
          else {
            uVar5 = 0xfffffffc;
          }
        }
        FUN_1001b7a50(&local_2f8);
        goto LAB_1003b9dc9;
      }
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_2f8._0_4_ = 0x8220202;
        local_2f8._4_4_ = 0x7a0a90;
        uStack_2f0 = 1;
        uStack_2ec = 0x822;
        uStack_2ea = 0x91c4;
        uStack_2e8 = 0x1007c;
        uStack_2e4 = 0;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_2f8,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
LAB_1003b9dc3:
  uVar5 = 0xffffffce;
LAB_1003b9dc9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

