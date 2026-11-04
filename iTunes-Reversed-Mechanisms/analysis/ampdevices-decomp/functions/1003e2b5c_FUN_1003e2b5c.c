// name: FUN_1003e2b5c
// address: 1003e2b5c

int FUN_1003e2b5c(int param_1,long param_2,undefined4 param_3,uint *param_4,undefined4 *param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined4 *local_a0;
  undefined4 local_98;
  char *local_94;
  undefined2 local_8c;
  char *local_8a;
  int local_7c;
  int local_78;
  int local_70;
  long local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_98 = 0x8220202;
      local_94 = "Assertion failure";
      local_8c = 0x822;
      local_8a = "location != nullptr";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_4 == (uint *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_98 = 0x8220202;
      local_94 = "Assertion failure";
      local_8c = 0x822;
      local_8a = "numDetails != nullptr";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_5 != (undefined4 *)0x0) {
      local_a8 = CONCAT44(local_a8._4_4_,param_3);
      local_a0 = param_5;
      if ((param_1 == 0x4d46494c) || (iVar7 = -0x32, param_1 == 0x46494c45)) {
        *param_4 = 0;
        local_98 = 0;
        uVar6 = FUN_1003b73be(param_1,param_2,0);
        iVar7 = FUN_100466aac("FFIAFFIAFFIA FIAFFIAFFIACFIACFIACFIAADDCFFIAFFIAEVAWEVAWEVAW VAWEVAWEVAWVAW.EVAWEVAW"
                              ,uVar6,local_98,&local_b8,0,0xf);
        iVar10 = 0x41494646;
        if ((int)local_b8 != 0x41494643) {
          iVar10 = (int)local_b8;
        }
        if (iVar7 == 0) {
          local_b8 = (long *)0x0;
          uStack_b0 = (long *)0x0;
          iVar7 = FUN_1003db90a(param_1,param_2,0,0,0);
          plVar2 = uStack_b0;
          if (iVar7 == 0) {
            local_108 = (int)local_b8;
            uStack_104 = local_b8._4_4_;
            uStack_100 = (undefined4)uStack_b0;
            uStack_fc = uStack_b0._4_4_;
            if (uStack_b0 != (long *)0x0) {
              LOCK();
              uStack_b0[1] = uStack_b0[1] + 1;
              UNLOCK();
            }
            iVar7 = FUN_1003dc014(&local_108,iVar10,0,0,&local_98,0,0);
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar1 = plVar2 + 1;
              lVar3 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar3 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (iVar7 == 0) {
              if ((uint)local_a8 == 0) {
                uVar11 = 0;
              }
              else {
                FUN_1001c34b7(0xc810001,local_a0 + 1);
                uVar9 = 0xc810003;
                if (local_7c != 1) {
                  uVar9 = local_7c == 2 ^ 0xc810005;
                }
                uVar11 = 1;
                FUN_1001c34b7(uVar9,local_a0 + 0x81);
              }
              if (uVar11 < (uint)local_a8) {
                iVar10 = local_78;
                if (local_78 == 0) {
                  iVar10 = local_70;
                }
                if (iVar10 != 0) {
                  FUN_1001c334a(local_f8,0xc810002);
                  puVar4 = local_a0;
                  local_a8 = (ulong)(uVar11 * 0x404);
                  FUN_1001bb41a(local_f8,(long)local_a0 + local_a8 + 4);
                  local_a0 = (undefined4 *)((long)puVar4 + local_a8);
                  *local_a0 = 0x73616d73;
                  FUN_1001c334a(local_d8,0xc810006);
                  FUN_1001b8e86(local_c8,iVar10,1);
                  FUN_1001bbec4(local_e8,local_d8,local_c8);
                  FUN_1001b7a50(local_c8);
                  FUN_1001b7a50(local_d8);
                  FUN_1001bb41a(local_e8,local_a0 + 0x81);
                  uVar11 = uVar11 + 1;
                  FUN_1001b7a50(local_e8);
                  FUN_1001b7a50(local_f8);
                }
              }
              *param_4 = uVar11;
            }
            (**(code **)(*local_b8 + 0x1d0))();
            plVar2 = uStack_b0;
            local_b8 = (long *)0x0;
            uStack_b0 = (long *)0x0;
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar1 = plVar2 + 1;
              lVar3 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar3 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (local_48 != 0) {
              FUN_1001c64c1();
            }
          }
          if (uStack_b0 != (long *)0x0) {
            LOCK();
            plVar2 = uStack_b0 + 1;
            lVar3 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar3 == 0) {
              (**(code **)(*uStack_b0 + 0x10))(uStack_b0);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
      }
      goto LAB_1003e2da5;
    }
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_98 = 0x8220202;
      local_94 = "Assertion failure";
      local_8c = 0x822;
      local_8a = "details != nullptr";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar7 = -0x32;
LAB_1003e2da5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

