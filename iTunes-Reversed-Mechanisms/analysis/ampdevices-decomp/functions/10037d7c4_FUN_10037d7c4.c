// name: FUN_10037d7c4
// address: 10037d7c4

void FUN_10037d7c4(long *param_1,long param_2,uint param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  long *plVar13;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a8 = 0;
  plStack_a0 = (long *)0x0;
  local_98 = 0;
  uStack_90 = (long *)0x0;
  if ((param_3 == 0) ||
     (((param_3 - 0x2afc < 0xfffffffd && (0x70 < param_3)) && (param_3 - 0x2737 < 0xffffffda)))) {
    uVar9 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar9,0x10);
    if (cVar7 != '\0') {
      pcVar12 = "IsValidTrackOrder(inSortOrder)";
LAB_10037dadd:
      uStack_6c = 0x822;
      uStack_70 = 1;
      uStack_74 = 0x7a0a90;
      local_78 = 0x8220202;
      uStack_6a = SUB82(pcVar12,0);
      uStack_68 = (undefined6)((ulong)pcVar12 >> 0x10);
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_78,0x16);
    }
LAB_10037d842:
    FUN_1001782e9(0,0);
    plVar13 = param_1;
  }
  else {
    uVar9 = 0;
    lVar10 = FUN_10037c952(param_2,param_3,param_4,0,0);
    plVar13 = plStack_a0;
    if (lVar10 == 0) {
LAB_10037d8cc:
      uVar11 = FUN_1004909fc(param_2 + 8);
      if (uVar11 == 0) {
        uVar9 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar9,0x10);
        if (cVar7 != '\0') {
          pcVar12 = "playlist != nullptr";
          goto LAB_10037dadd;
        }
        goto LAB_10037d842;
      }
      local_80 = uVar11;
      if (param_3 == 1) {
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_6a = 0;
        uStack_68 = 0;
        uStack_62 = 0;
        local_78 = 0x70626c74;
        FUN_10037b1be(&local_58,0);
        uVar6 = uStack_50;
        uVar5 = uStack_54;
        uVar4 = local_58;
        plVar13 = uStack_90;
        uVar3 = CONCAT22(uStack_4a,uStack_4c);
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_4a = 0;
        local_98 = CONCAT44(uVar5,uVar4);
        uStack_90 = (long *)CONCAT44(uVar3,uVar6);
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar2 = plVar13 + 1;
          lVar10 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar13 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar2 = plVar13 + 1;
          lVar10 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_98 == 0) {
          uVar9 = FUN_1001cc310();
          cVar7 = _os_log_type_enabled(uVar9,0x10);
          if (cVar7 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0xe47a;
            uStack_48 = 0x7b;
            uStack_46 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar11 = 0;
        }
        else {
          FUN_100203686(&uStack_70,&local_98);
          iVar8 = FUN_10048492e(*(undefined8 *)(local_80 + 0x78),FUN_10037e135,&local_78);
          if (iVar8 != -0x80) {
            if (iVar8 == 0) {
              uVar11 = CONCAT71((int7)((ulong)uVar9 >> 8),1);
              goto LAB_10037db7c;
            }
            local_80 = FUN_1001cc310();
            cVar7 = _os_log_type_enabled(local_80,0x10);
            if (cVar7 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4c = 0x400;
              uStack_4a = (undefined2)iVar8;
              uStack_48 = (undefined2)((uint)iVar8 >> 0x10);
              __os_log_error_impl(0x100000000,local_80,0x10,"%{public}s: err == (%d)",&local_58,0x12
                                 );
            }
          }
          uVar11 = 0;
        }
LAB_10037db7c:
        plVar13 = (long *)CONCAT26(uStack_62,uStack_68);
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar2 = plVar13 + 1;
          lVar10 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            local_80 = CONCAT44(local_80._4_4_,(int)uVar11);
            (**(code **)(*plVar13 + 0x10))(plVar13);
            std::__shared_weak_count::__release_weak();
            uVar11 = local_80 & 0xffffffff;
          }
        }
        if ((char)uVar11 != '\0') {
LAB_10037dbb3:
          plVar13 = uStack_90;
          local_b8 = (undefined4)local_98;
          uStack_b4 = local_98._4_4_;
          uStack_b0 = (undefined4)uStack_90;
          uStack_ac = uStack_90._4_4_;
          if (uStack_90 != (long *)0x0) {
            LOCK();
            uStack_90[1] = uStack_90[1] + 1;
            UNLOCK();
          }
          FUN_10037d01c(param_2,param_3,param_4,&local_b8);
          if (plVar13 != (long *)0x0) {
            LOCK();
            plVar2 = plVar13 + 1;
            lVar10 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar10 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              std::__shared_weak_count::__release_weak();
            }
          }
          FUN_100203686(&local_a8,&local_98);
        }
      }
      else {
        FUN_10037d27a(&local_78,param_2,1,0,0);
        uVar6 = uStack_70;
        uVar5 = uStack_74;
        uVar4 = local_78;
        plVar13 = uStack_90;
        uVar3 = CONCAT22(uStack_6a,uStack_6c);
        local_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_6a = 0;
        local_98 = CONCAT44(uVar5,uVar4);
        uStack_90 = (long *)CONCAT44(uVar3,uVar6);
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar2 = plVar13 + 1;
          lVar10 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar13 = (long *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
        if (plVar13 != (long *)0x0) {
          LOCK();
          plVar2 = plVar13 + 1;
          lVar10 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_98 != 0) {
          FUN_10037aa86(local_98,local_80,param_3,param_4);
          goto LAB_10037dbb3;
        }
        uVar9 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar9,0x10);
        if (cVar7 != '\0') {
          local_78 = 0x8220202;
          uStack_74 = 0x7a0a90;
          uStack_70 = 1;
          uStack_6c = 0x822;
          uStack_6a = 0x6a86;
          uStack_68 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_78,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *param_1 = local_a8;
    }
    else {
      local_a8 = *(long *)(lVar10 + 0x30);
      plVar2 = *(long **)(lVar10 + 0x38);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar2[1] = plVar2[1] + 1;
        UNLOCK();
      }
      if (plStack_a0 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_a0 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          lVar10 = *plStack_a0;
          plStack_a0 = plVar2;
          (**(code **)(lVar10 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
          plVar2 = plStack_a0;
        }
      }
      plStack_a0 = plVar2;
      uVar9 = 0;
      if (local_a8 == 0) goto LAB_10037d8cc;
      *param_1 = local_a8;
    }
    plVar13 = &local_a8;
    param_1[1] = (long)plStack_a0;
  }
  *plVar13 = 0;
  plVar13[1] = 0;
  if (uStack_90 != (long *)0x0) {
    LOCK();
    plVar13 = uStack_90 + 1;
    lVar10 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*uStack_90 + 0x10))(uStack_90);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plStack_a0 != (long *)0x0) {
    LOCK();
    plVar13 = plStack_a0 + 1;
    lVar10 = *plVar13;
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

