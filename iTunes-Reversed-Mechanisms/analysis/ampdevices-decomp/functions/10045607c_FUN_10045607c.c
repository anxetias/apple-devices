// name: FUN_10045607c
// address: 10045607c

int FUN_10045607c(long *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long **pplVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  long local_2d0 [2];
  long *local_2c0;
  long *local_2b8;
  uint local_2ac;
  int local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined2 uStack_29c;
  undefined2 uStack_29a;
  undefined1 auStack_298 [8];
  undefined1 local_290 [4];
  undefined1 local_28c;
  long local_288;
  undefined1 local_278;
  undefined1 local_270 [16];
  undefined4 local_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_1003c59c2();
  if (iVar3 == -0x80) goto LAB_100456940;
  if (iVar3 != 0) {
    uVar10 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar10,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x400;
      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,0x12);
    }
    goto LAB_100456940;
  }
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  if (lVar4 == 0) {
    uVar10 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar10,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "trackData != nullptr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_100456940;
  }
  puVar5 = operator_new(0xb0,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_100220a12(puVar5);
    *puVar5 = &PTR_FUN_100859b58;
    FUN_10045493e(puVar5 + 5);
    *(undefined1 *)(puVar5 + 0x15) = 0;
  }
  local_2a8 = (int)puVar5;
  uStack_2a4 = (undefined4)((ulong)puVar5 >> 0x20);
  plVar6 = operator_new(0x20);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_100859c08;
  plVar6[3] = (long)puVar5;
  uStack_2a0 = SUB84(plVar6,0);
  uStack_29c = (undefined2)((ulong)plVar6 >> 0x20);
  uStack_29a = (undefined2)((ulong)plVar6 >> 0x30);
  if (puVar5 != (undefined8 *)0x0) {
    if (puVar5[2] == 0) {
      LOCK();
      plVar6[1] = plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar6[2] = plVar6[2] + 1;
      UNLOCK();
      puVar5[1] = puVar5;
      puVar5[2] = plVar6;
    }
    else {
      if (*(long *)(puVar5[2] + 8) != -1) goto LAB_100456254;
      LOCK();
      plVar6[1] = plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar6[2] = plVar6[2] + 1;
      UNLOCK();
      puVar5[1] = puVar5;
      puVar5[2] = plVar6;
      std::__shared_weak_count::__release_weak();
    }
    plVar7 = plVar6 + 1;
    LOCK();
    lVar9 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_100456254:
  plVar6 = (long *)CONCAT44(uStack_2a4,local_2a8);
  if (plVar6 == (long *)0x0) {
    uVar10 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar10,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1004562b2:
    pplVar8 = &local_2c0;
  }
  else {
    cVar2 = (**(code **)(*plVar6 + 0x18))(plVar6,param_1 + 4);
    if (cVar2 == '\0') goto LAB_1004562b2;
    pplVar8 = (long **)&local_2a8;
    local_2b8 = (long *)CONCAT26(uStack_29a,CONCAT24(uStack_29c,uStack_2a0));
    local_2c0 = plVar6;
  }
  *pplVar8 = (long *)0x0;
  pplVar8[1] = (long *)0x0;
  plVar6 = (long *)CONCAT26(uStack_29a,CONCAT24(uStack_29c,uStack_2a0));
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    lVar9 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar7 = local_2b8;
  plVar6 = local_2c0;
  if (local_2c0 == (long *)0x0) {
    uVar10 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar10,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "unpacker != nullptr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,0x16);
    }
    iVar3 = -0x32;
    FUN_1001782e9(0,0);
  }
  else {
    if (local_2b8 != (long *)0x0) {
      LOCK();
      local_2b8[1] = local_2b8[1] + 1;
      UNLOCK();
    }
    local_2d0[0] = 0;
    if ((char)local_2c0[0x15] == '\0') {
      FUN_100455838(local_2c0);
    }
    if (plVar6[6] == 0) {
      uVar10 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar10,0x10);
      if (cVar2 != '\0') {
        local_2a8 = 0x8220202;
        uStack_2a4 = 0x7a0a90;
        uStack_2a0 = 1;
        uStack_29c = 0x822;
        uStack_29a = 0xfaf5;
        auStack_298._0_6_ = 0x1007c;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_2a8,0x16);
      }
      FUN_1001782e9(0,0);
LAB_1004563a5:
      FUN_10027367c(&local_2a8);
      local_2a8 = (int)plVar6[7];
      uStack_2a0 = (undefined4)lVar4;
      uStack_29c = (undefined2)((ulong)lVar4 >> 0x20);
      uStack_29a = (undefined2)((ulong)lVar4 >> 0x30);
      local_288 = plVar6[6];
      local_28c = *(char *)((long)plVar6 + 0x49) != '\0';
      local_278 = (undefined1)plVar6[9];
      local_260 = *(undefined4 *)((long)plVar6 + 0x44);
      cVar2 = FUN_1001b8428(plVar6 + 0xd);
      if (cVar2 == '\0') {
        FUN_1001bb41a(plVar6 + 0xd,&local_238);
        lVar9 = lVar4 + 0x1c60;
        if (local_2a8 == 4) {
          lVar9 = lVar4 + 0x2070;
        }
        FUN_1001dda84(lVar9,&local_238);
      }
      cVar2 = FUN_1001b8428(plVar6 + 0xf);
      if (cVar2 == '\0') {
        FUN_1001bb41a(plVar6 + 0xf,&local_238);
        FUN_1001dda84(lVar4 + 0x1cb0,&local_238,auStack_298 + 4);
      }
      cVar2 = FUN_1001b8428(plVar6 + 0x11);
      if (cVar2 == '\0') {
        FUN_1001bb41a(plVar6 + 0x11,&local_238);
        FUN_1001dda84(lVar4 + 0x1cb0,&local_238,local_290);
      }
      iVar3 = FUN_10027373a(&local_2a8,local_2d0);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(local_2d0[0] + 0x18);
        lVar9 = local_2d0[0];
      }
      else {
        lVar9 = 0;
      }
      FUN_1001b7a50(local_248);
      FUN_1001b7a50(local_258);
      FUN_1001b7a50(local_270);
    }
    else {
      lVar9 = FUN_1003a3354(lVar4);
      local_2d0[0] = lVar9;
      if (lVar9 == 0) goto LAB_1004563a5;
    }
    if (plVar7 != (long *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar4 = *plVar6;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (lVar9 == 0) {
      uVar10 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar10,0x10);
      if (cVar2 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x822;
        local_22a = "album != nullptr";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,0x16);
      }
      iVar3 = -0x32;
      FUN_1001782e9(0,0);
    }
    else {
      uVar10 = FUN_1003c5880();
      cVar2 = _os_log_type_enabled(uVar10,1);
      if (cVar2 != '\0') {
        uVar1 = *(undefined8 *)(lVar9 + 0x20);
        FUN_1001de8ee(lVar9 + 0xb8,&local_238);
        FUN_1001b8dfc(local_2d0,&local_238);
        uVar11 = FUN_1001b83ae(local_2d0);
        local_2a8 = 0x8000202;
        uStack_2a4 = (undefined4)uVar1;
        uStack_2a0 = (undefined4)((ulong)uVar1 >> 0x20);
        uStack_29c = 0x820;
        uStack_29a = (undefined2)uVar11;
        auStack_298._0_6_ = (undefined6)((ulong)uVar11 >> 0x10);
        __os_log_impl(0x100000000,uVar10,1,"ch> ALBUM: %16.16llx \'%s\'",&local_2a8,0x16);
        FUN_1001b7a50(local_2d0);
      }
      plVar7 = local_2b8;
      plVar6 = local_2c0;
      if (local_2b8 != (long *)0x0) {
        LOCK();
        local_2b8[1] = local_2b8[1] + 1;
        UNLOCK();
      }
      if ((char)local_2c0[0x15] == '\0') {
        FUN_100455838(local_2c0);
      }
      local_2ac = 0;
      uVar15 = 0;
      if (plVar6[5] != 0) {
        if ((plVar6[5] & 1U) != 0) {
          if (plVar6[6] != *(long *)(lVar9 + 0x20)) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 != '\0') {
              local_238 = 0x8220202;
              local_234 = "Assertion failure";
              local_22c = 0x822;
              local_22a = "inChangeDataFixed->mPersistentID == inAlbumInfo->GetPersistentID()";
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          if ((int)plVar6[7] != *(int *)(lVar9 + 0x10)) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 != '\0') {
              local_238 = 0x8220202;
              local_234 = "Assertion failure";
              local_22c = 0x822;
              local_22a = "inChangeDataFixed->mAlbumKind == inAlbumInfo->GetAlbumKind()";
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          lVar4 = plVar6[9];
          cVar2 = FUN_1003a2088(lVar9);
          if ((char)lVar4 != cVar2) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 != '\0') {
              local_238 = 0x8220202;
              local_234 = "Assertion failure";
              local_22c = 0x822;
              local_22a = "inChangeDataFixed->mMediaDomain == inAlbumInfo->GetMediaDomain()";
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          if (*(long *)((long)plVar6 + 0x3c) != *(long *)(lVar9 + 0x30)) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 != '\0') {
              local_238 = 0x8220202;
              local_234 = "Assertion failure";
              local_22c = 0x822;
              local_22a = 
              "inChangeDataFixed->mITunesPersistentID == inAlbumInfo->GetITunesPersistentID()";
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          iVar3 = *(int *)(lVar9 + 0x10);
          iVar13 = 0;
          if (iVar3 == 4) {
            iVar13 = *(int *)(lVar9 + 0x100);
          }
          if (*(int *)((long)plVar6 + 0x44) != iVar13) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 != '\0') {
              local_238 = 0x8220202;
              local_234 = "Assertion failure";
              local_22c = 0x822;
              local_22a = "inChangeDataFixed->mSeasonNumber == inAlbumInfo->GetSeasonNumber()";
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            iVar3 = *(int *)(lVar9 + 0x10);
          }
          if (iVar3 == 2) {
            bVar16 = *(char *)(lVar9 + 0x108) != '\0';
          }
          else {
            bVar16 = false;
          }
          if ((bool)*(char *)((long)plVar6 + 0x49) != bVar16) {
            uVar10 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar10,0x10);
            if (cVar2 != '\0') {
              local_238 = 0x8220202;
              local_234 = "Assertion failure";
              local_22c = 0x822;
              local_22a = 
              "inChangeDataFixed->mAllTracksAreCompilations == inAlbumInfo->GetAllTracksAreCompilations()"
              ;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_238,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
        }
        uVar12 = plVar6[5];
        uVar14 = 0;
        if (((uVar12 & 2) != 0) &&
           ((*(char *)((long)plVar6 + 0x4c) != '\0' || (*(char *)((long)plVar6 + 0x4d) != '\0')))) {
          uVar14 = 8;
        }
        uVar15 = uVar14;
        if ((uVar12 & 4) != 0) {
          cVar2 = FUN_1003a2ffa(lVar9,*(undefined1 *)((long)plVar6 + 0x4e),
                                *(undefined4 *)((long)plVar6 + 0x5c));
          uVar15 = uVar14 + 0x10;
          if (cVar2 == '\0') {
            uVar15 = uVar14;
          }
          uVar12 = plVar6[5];
        }
        if (((uVar12 & 0x10) != 0) && (*(long *)(lVar9 + 0xd0) != plVar6[10])) {
          FUN_1003a4d8e(lVar9);
          uVar15 = uVar15 | 1;
          uVar12 = plVar6[5];
        }
        if (((uVar12 & 0x20) != 0) && (*(int *)(lVar9 + 0xe0) != (int)plVar6[0xb])) {
          *(int *)(lVar9 + 0xe0) = (int)plVar6[0xb];
          *(byte *)(lVar9 + 0xfa) = *(byte *)(lVar9 + 0xfa) & 0xfb;
          FUN_1003a2686(lVar9,1);
          uVar15 = uVar15 | 1;
          uVar12 = plVar6[5];
        }
        if (((uVar12 & 8) != 0) && (*(char *)(lVar9 + 0xe4) != *(char *)((long)plVar6 + 0x4f))) {
          *(char *)(lVar9 + 0xe4) = *(char *)((long)plVar6 + 0x4f);
          *(byte *)(lVar9 + 0xfa) = *(byte *)(lVar9 + 0xfa) & 0xfb;
          FUN_1003a2686(lVar9,2);
          uVar15 = uVar15 | 2;
        }
      }
      if ((*(byte *)(plVar6 + 0xc) & 2) != 0) {
        FUN_1001b7f2a(&local_238,lVar9 + 200);
        iVar3 = FUN_1001b9c66(plVar6 + 0x13,&local_238);
        FUN_1001b7a50(&local_238);
        if (iVar3 != 0) {
          FUN_1001aaf14(&local_238,plVar6 + 0x13);
          FUN_1003a4d36(lVar9,&local_238);
          FUN_1001ab006(&local_238);
          local_2ac = 1;
        }
      }
      local_2ac = local_2ac | uVar15;
      if (local_2ac != 0) {
        FUN_1003a2686(lVar9,local_2ac);
      }
      iVar3 = 0;
      if (plVar7 != (long *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        lVar4 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  if (local_2b8 != (long *)0x0) {
    LOCK();
    plVar6 = local_2b8 + 1;
    lVar4 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*local_2b8 + 0x10))(local_2b8);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_100456940:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

