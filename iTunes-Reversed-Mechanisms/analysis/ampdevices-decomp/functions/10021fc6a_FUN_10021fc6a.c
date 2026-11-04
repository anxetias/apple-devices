// name: FUN_10021fc6a
// address: 10021fc6a

int FUN_10021fc6a(long *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long **pplVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  long *local_b8;
  long *plStack_b0;
  long *local_a8;
  long *plStack_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *plStack_70;
  uint local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar6 = FUN_1003c59c2();
  if (iVar6 == -0x80) goto LAB_10022063e;
  if (iVar6 != 0) {
    uVar11 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar11,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    goto LAB_10022063e;
  }
  lVar7 = (**(code **)(*param_1 + 0x10))(param_1);
  if (lVar7 == 0) {
    uVar11 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar11,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "trackData != nullptr";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x32;
    goto LAB_10022063e;
  }
  plVar8 = operator_new(0xb8,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar8 != (long *)0x0) {
    FUN_100220a12(plVar8);
    *plVar8 = (long)&PTR_FUN_10083e290;
    FUN_10021e3a6(plVar8 + 5);
    *(undefined1 *)(plVar8 + 0x16) = 0;
  }
  local_78 = plVar8;
  plVar9 = operator_new(0x20);
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_10083e340;
  plVar9[3] = (long)plVar8;
  plStack_70 = plVar9;
  if (plVar8 != (long *)0x0) {
    if (plVar8[2] == 0) {
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar9[2] = plVar9[2] + 1;
      UNLOCK();
      plVar8[1] = (long)plVar8;
      plVar8[2] = (long)plVar9;
    }
    else {
      if (*(long *)(plVar8[2] + 8) != -1) goto LAB_10021fe37;
      LOCK();
      plVar9[1] = plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar9[2] = plVar9[2] + 1;
      UNLOCK();
      plVar8[1] = (long)plVar8;
      plVar8[2] = (long)plVar9;
      std::__shared_weak_count::__release_weak();
    }
    plVar8 = plVar9 + 1;
    LOCK();
    lVar2 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10021fe37:
  plVar8 = local_78;
  if (local_78 == (long *)0x0) {
    uVar11 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar11,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
LAB_10021fe92:
    pplVar10 = &local_98;
  }
  else {
    cVar5 = (**(code **)(*local_78 + 0x18))(local_78,param_1 + 4);
    if (cVar5 == '\0') goto LAB_10021fe92;
    local_98 = plVar8;
    pplVar10 = &local_78;
    local_90 = plStack_70;
  }
  *pplVar10 = (long *)0x0;
  pplVar10[1] = (long *)0x0;
  if (plStack_70 != (long *)0x0) {
    LOCK();
    plVar8 = plStack_70 + 1;
    lVar2 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar9 = local_90;
  plVar8 = local_98;
  if (local_98 == (long *)0x0) {
    uVar11 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar11,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "unpacker != nullptr";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    iVar6 = -0x32;
    FUN_1001782e9(0,0);
  }
  else {
    if (local_90 != (long *)0x0) {
      LOCK();
      local_90[1] = local_90[1] + 1;
      UNLOCK();
    }
    local_78 = (long *)0x0;
    plStack_70 = (long *)0x0;
    local_b8 = (long *)0x0;
    plStack_b0 = (long *)0x0;
    iVar6 = FUN_100322110(lVar7,&local_b8);
    pplVar10 = &local_a8;
    if (iVar6 != -0x80) {
      if (iVar6 == 0) {
        if ((char)plVar8[0x16] == '\0') {
          FUN_10021f24e(plVar8);
        }
        lVar7 = plVar8[6];
        if (lVar7 == 0) {
          uVar11 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar11,0x10);
          if (cVar5 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "profilePersistentID != 0";
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
LAB_10022001b:
          FUN_100625382(local_b8,lVar7,plVar8 + 10,&local_78);
        }
        else {
          iVar6 = FUN_100625128(local_b8,lVar7,&local_78);
          if (iVar6 != 0) goto LAB_10022001b;
        }
        pplVar10 = &local_78;
        local_a8 = local_78;
        plStack_a0 = plStack_70;
      }
      else {
        uVar11 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar11,0x10);
        if (cVar5 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    *pplVar10 = (long *)0x0;
    pplVar10[1] = (long *)0x0;
    if (plStack_b0 != (long *)0x0) {
      LOCK();
      plVar8 = plStack_b0 + 1;
      lVar7 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_70 != (long *)0x0) {
      LOCK();
      plVar8 = plStack_70 + 1;
      lVar7 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar7 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar8 = local_a8;
    if (local_a8 == (long *)0x0) {
      uVar11 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar11,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "socialProfile != nullptr";
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      iVar6 = -0x32;
      FUN_1001782e9(0,0);
    }
    else {
      uVar11 = FUN_1003c5880();
      cVar5 = _os_log_type_enabled(uVar11,1);
      if (cVar5 != '\0') {
        pcVar3 = (char *)plVar8[3];
        FUN_1001b7a5c(&local_78,plVar8 + 7);
        local_4a = (char *)FUN_1001b83ae(&local_78);
        local_58 = 0x8000202;
        local_4c = 0x820;
        local_54 = pcVar3;
        __os_log_impl(0x100000000,uVar11,1,"ch> PROFILE: %16.16llx \'%s\'",&local_58,0x16);
        FUN_1001b7a50(&local_78);
      }
      plVar4 = local_90;
      plVar1 = local_98;
      plVar9 = plStack_a0;
      if (plStack_a0 != (long *)0x0) {
        LOCK();
        plStack_a0[1] = plStack_a0[1] + 1;
        UNLOCK();
      }
      if (local_90 != (long *)0x0) {
        LOCK();
        local_90[1] = local_90[1] + 1;
        UNLOCK();
      }
      if ((char)local_98[0x16] == '\0') {
        FUN_10021f24e(local_98);
      }
      if (plVar9 == (long *)0x0) {
        plStack_70 = (long *)0x0;
      }
      else {
        LOCK();
        plVar9[1] = plVar9[1] + 1;
        UNLOCK();
        plStack_70 = plVar9;
        LOCK();
        plVar9[1] = plVar9[1] + 1;
        UNLOCK();
      }
      local_78 = plVar8;
      uVar12 = plVar1[5];
      if (uVar12 == 0) {
        local_5c = 0;
      }
      else {
        if (((uVar12 & 1) != 0) && (plVar1[6] != plVar8[3])) {
          uVar11 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar11,0x10);
          if (cVar5 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "inChangeDataFixed->mPersistentID == ioSocialProfileInfo->GetPersistentID()";
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar12 = plVar1[5];
        }
        local_5c = 0;
        if (((uVar12 & 4) != 0) && (plVar8[0x12] != plVar1[7])) {
          plVar8[0x12] = plVar1[7];
          *(undefined1 *)((long)plVar8 + 0x9d) = 0;
          local_5c = 4;
          FUN_10058e136(plVar8,4);
          uVar12 = plVar1[5];
        }
        if (((uVar12 & 8) != 0) && ((int)plVar8[0x13] != (int)plVar1[8])) {
          *(int *)(plVar8 + 0x13) = (int)plVar1[8];
          local_5c = 4;
          FUN_10058e136(plVar8,4);
          uVar12 = plVar1[5];
        }
        if (((uVar12 & 2) != 0) &&
           (*(char *)((long)plVar8 + 0x9c) != *(char *)((long)plVar1 + 0x44))) {
          *(char *)((long)plVar8 + 0x9c) = *(char *)((long)plVar1 + 0x44);
          FUN_10058e136(plVar8,8);
          local_5c = local_5c + 8;
          uVar12 = plVar1[5];
        }
        if (((uVar12 & 0x10) != 0) && (*(char *)((long)plVar1 + 0x45) != (char)plVar8[0xb])) {
          *(char *)(plVar8 + 0xb) = *(char *)((long)plVar1 + 0x45);
          FUN_10058e136(plVar8,0x40);
          local_5c = local_5c + 0x40;
        }
      }
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar14 = plVar9 + 1;
        lVar7 = *plVar14;
        *plVar14 = *plVar14 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_b8 = plVar8;
      plStack_b0 = plVar9;
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar9[1] = plVar9[1] + 1;
        UNLOCK();
      }
      if (plVar1[9] == 0) {
        uVar13 = 0;
      }
      else {
        local_80 = plVar8;
        plVar14 = plVar8;
        uVar13 = 0;
        if ((plVar1[9] & 2U) != 0) {
          FUN_1001b7a5c(&local_58,plVar8 + 7);
          local_88 = plVar1 + 0xc;
          iVar6 = FUN_1001b9c66(local_88,&local_58);
          FUN_1001b7a50(&local_58);
          plVar14 = local_80;
          uVar13 = 0;
          if (iVar6 != 0) {
            uVar13 = 1;
            FUN_10058e5b6(local_80,local_88);
          }
        }
        if ((*(byte *)(plVar1 + 9) & 4) != 0) {
          FUN_1001b7a5c(&local_58,plVar14 + 9);
          local_88 = plVar1 + 0xe;
          iVar6 = FUN_1001b9c66(local_88,&local_58);
          FUN_1001b7a50(&local_58);
          plVar14 = local_80;
          if (iVar6 != 0) {
            FUN_10058e604(local_80,local_88);
            uVar13 = uVar13 | 2;
          }
        }
        if ((*(byte *)(plVar1 + 9) & 0x10) != 0) {
          FUN_1001b7a5c(&local_58,plVar14 + 0xe);
          local_88 = plVar1 + 0x12;
          iVar6 = FUN_1001b9c66(local_88,&local_58);
          FUN_1001b7a50(&local_58);
          plVar14 = local_80;
          if (iVar6 != 0) {
            FUN_10058e22a(local_80,local_88);
            uVar13 = uVar13 | 0x20;
          }
        }
        if ((*(byte *)(plVar1 + 9) & 8) != 0) {
          FUN_1001b7a5c(&local_58,plVar14 + 0xc);
          local_88 = plVar1 + 0x10;
          iVar6 = FUN_1001b9c66(local_88,&local_58);
          FUN_1001b7a50(&local_58);
          plVar14 = local_80;
          if (iVar6 != 0) {
            FUN_10058e1dc(local_80,local_88);
            uVar13 = uVar13 | 0x10;
          }
        }
        if ((*(byte *)(plVar1 + 9) & 0x20) != 0) {
          FUN_1001b7a5c(&local_58,plVar14 + 0x10);
          iVar6 = FUN_1001b9c66(plVar1 + 0x14,&local_58);
          FUN_1001b7a50(&local_58);
          if (iVar6 != 0) {
            FUN_10058e038(local_80,plVar1 + 0x14);
            uVar13 = uVar13 | 4;
          }
        }
      }
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar13 = uVar13 | local_5c;
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (uVar13 != 0) {
        FUN_10058e136(plVar8,uVar13);
      }
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar8 = plVar4 + 1;
        lVar7 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          std::__shared_weak_count::__release_weak();
        }
      }
      iVar6 = 0;
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        lVar7 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (plStack_a0 != (long *)0x0) {
      LOCK();
      plVar8 = plStack_a0 + 1;
      lVar7 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar7 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_90 != (long *)0x0) {
    LOCK();
    plVar8 = local_90 + 1;
    lVar7 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*local_90 + 0x10))(local_90);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10022063e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

