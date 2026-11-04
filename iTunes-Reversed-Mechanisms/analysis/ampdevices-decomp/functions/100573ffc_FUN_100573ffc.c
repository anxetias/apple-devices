// name: FUN_100573ffc
// address: 100573ffc

int FUN_100573ffc(long *param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  bool bVar10;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long local_b8 [2];
  long local_a8 [2];
  long *local_98;
  long local_90 [2];
  long local_80 [2];
  undefined4 local_6c;
  long local_68 [2];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar4 = 0;
  local_98 = param_1;
  if ((char)param_1[0xe] == '\0') {
    if (param_2 == 0) {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "inXinfArray != __null";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      iVar4 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      lVar5 = FUN_10017076e(param_2);
      if (0 < lVar5) {
        lVar9 = 0;
        iVar4 = 0;
        do {
          FUN_10032f0f2(local_90);
          FUN_10032f0f2(local_b8);
          FUN_10032f0f2(local_80);
          FUN_10032f0f2(local_a8);
          FUN_10032f0f2(local_68);
          lVar6 = FUN_10016499b(param_2,lVar9);
          if (lVar6 == 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "xinfDict != __null";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            iVar8 = 5;
            FUN_1001782e9(0,0);
          }
          else {
            local_6c = FUN_100167d23(lVar6,PTR_cf_id_100852a18);
            uVar7 = FUN_1001669a0(lVar6,PTR_cf_sinf_1008529f8);
            FUN_1001a78d6(&local_58,uVar7);
            FUN_1001a7b1c(local_90,&local_58);
            FUN_1001a85d4(&local_58);
            uVar7 = FUN_1001669a0(lVar6,PTR_cf_sinf2_100852a00);
            FUN_1001a78d6(&local_58,uVar7);
            FUN_1001a7b1c(local_b8,&local_58);
            FUN_1001a85d4(&local_58);
            uVar7 = FUN_1001669a0(lVar6,PTR_cf_pinf_100852a08);
            FUN_1001a78d6(&local_58,uVar7);
            FUN_1001a7b1c(local_80,&local_58);
            FUN_1001a85d4(&local_58);
            uVar7 = FUN_1001669a0(lVar6,PTR_cf_dpInfo_100852a10);
            FUN_1001a78d6(&local_58,uVar7);
            FUN_1001a7b1c(local_a8,&local_58);
            FUN_1001a85d4(&local_58);
            if (local_a8[0] == 0) {
              bVar10 = local_90[0] != 0;
              if (bVar10) {
                FUN_1001a7ad8(local_68,local_90);
              }
              if (local_68[0] == 0) {
                FUN_1001a7ad8(local_68,local_80);
              }
            }
            else {
              FUN_1001a7ad8(local_68,local_80);
              bVar10 = false;
            }
            iVar8 = 2;
            if (((local_90[0] != 0) || (local_b8[0] != 0)) || (local_80[0] != 0)) {
              local_c8 = *param_3;
              uStack_c4 = param_3[1];
              uStack_c0 = param_3[2];
              uStack_bc = param_3[3];
              if (*(long *)(param_3 + 2) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(param_3 + 2) + 8);
                *plVar1 = *plVar1 + 1;
                UNLOCK();
              }
              iVar4 = (**(code **)(*local_98 + 0xf0))
                                (local_98,local_6c,bVar10,local_68[0],local_b8[0],&local_c8);
              plVar1 = (long *)CONCAT44(uStack_bc,uStack_c0);
              if (plVar1 != (long *)0x0) {
                LOCK();
                plVar2 = plVar1 + 1;
                lVar6 = *plVar2;
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (lVar6 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                  std::__shared_weak_count::__release_weak();
                }
              }
              if (iVar4 != -0x80) {
                if (iVar4 == 0) {
                  iVar8 = 0;
                  iVar4 = 0;
                }
                else {
                  uVar7 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar3 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
              }
            }
          }
          FUN_1001a85d4(local_68);
          FUN_1001a85d4(local_a8);
          FUN_1001a85d4(local_80);
          FUN_1001a85d4(local_b8);
          FUN_1001a85d4(local_90);
          if ((iVar8 != 0) && (iVar8 != 5)) {
            if (iVar8 != 2) goto LAB_100574039;
            break;
          }
          lVar9 = lVar9 + 1;
        } while (lVar5 != lVar9);
      }
    }
  }
  *(undefined1 *)(local_98 + 0xe) = 1;
LAB_100574039:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

