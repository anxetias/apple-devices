// name: FUN_1004c90a4
// address: 1004c90a4

int FUN_1004c90a4(long *param_1)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long **pplVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *local_2c8;
  long *local_2c0;
  long *local_2b8;
  long *local_2b0;
  ulong local_2a8;
  uint local_29c;
  undefined4 local_298;
  ulong local_294;
  undefined2 local_28c;
  int local_28a;
  undefined2 local_286;
  uint local_284;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined2 uStack_26c;
  undefined2 uStack_26a;
  undefined1 auStack_268 [8];
  long local_260;
  undefined8 local_258;
  undefined1 local_250;
  undefined1 local_248 [16];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar5 = FUN_1003c59c2();
  if (iVar5 == -0x80) goto LAB_1004c9972;
  if (iVar5 != 0) {
    uVar11 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar11,0x10);
    if (cVar4 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x400;
      local_22a = (char *)CONCAT44(local_22a._4_4_,iVar5);
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_238,0x12);
    }
    goto LAB_1004c9972;
  }
  lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  if (lVar6 == 0) {
    uVar11 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar11,0x10);
    if (cVar4 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "trackData != nullptr";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
    goto LAB_1004c9972;
  }
  puVar7 = operator_new(0xd0,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_100220a12(puVar7);
    *puVar7 = &PTR_FUN_10085e260;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    *(undefined2 *)(puVar7 + 0xd) = 0;
    FUN_1004c7638(puVar7 + 0xe);
    *(undefined1 *)(puVar7 + 0x19) = 0;
  }
  local_278._0_2_ = SUB82(puVar7,0);
  local_278._2_2_ = (undefined2)((ulong)puVar7 >> 0x10);
  local_278._4_4_ = (undefined4)((ulong)puVar7 >> 0x20);
  plVar8 = operator_new(0x20);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_10085e310;
  plVar8[3] = (long)puVar7;
  uStack_270 = SUB84(plVar8,0);
  uStack_26c = (undefined2)((ulong)plVar8 >> 0x20);
  uStack_26a = (undefined2)((ulong)plVar8 >> 0x30);
  if (puVar7 != (undefined8 *)0x0) {
    if (puVar7[2] == 0) {
      LOCK();
      plVar8[1] = plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar8[2] = plVar8[2] + 1;
      UNLOCK();
      puVar7[1] = puVar7;
      puVar7[2] = plVar8;
    }
    else {
      if (*(long *)(puVar7[2] + 8) != -1) goto LAB_1004c929f;
      LOCK();
      plVar8[1] = plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar8[2] = plVar8[2] + 1;
      UNLOCK();
      puVar7[1] = puVar7;
      puVar7[2] = plVar8;
      std::__shared_weak_count::__release_weak();
    }
    plVar14 = plVar8 + 1;
    LOCK();
    lVar13 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1004c929f:
  plVar8 = (long *)CONCAT44(local_278._4_4_,CONCAT22(local_278._2_2_,(undefined2)local_278));
  if (plVar8 == (long *)0x0) {
    uVar11 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar11,0x10);
    if (cVar4 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "obj != nullptr";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1004c92fd:
    pplVar9 = &local_2c0;
  }
  else {
    cVar4 = (**(code **)(*plVar8 + 0x18))(plVar8,param_1 + 4);
    if (cVar4 == '\0') goto LAB_1004c92fd;
    pplVar9 = (long **)&local_278;
    local_2b8 = (long *)CONCAT26(uStack_26a,CONCAT24(uStack_26c,uStack_270));
    local_2c0 = plVar8;
  }
  *pplVar9 = (long *)0x0;
  pplVar9[1] = (long *)0x0;
  plVar8 = (long *)CONCAT26(uStack_26a,CONCAT24(uStack_26c,uStack_270));
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar14 = plVar8 + 1;
    lVar13 = *plVar14;
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (lVar13 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar14 = local_2b8;
  plVar8 = local_2c0;
  if (local_2c0 == (long *)0x0) {
    uVar11 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar11,0x10);
    if (cVar4 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "unpacker != nullptr";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_238,0x16);
    }
    iVar5 = -0x32;
    FUN_1001782e9(0,0);
  }
  else {
    if (local_2b8 != (long *)0x0) {
      LOCK();
      local_2b8[1] = local_2b8[1] + 1;
      UNLOCK();
    }
    local_2c8 = (long *)0x0;
    if ((char)local_2c0[0x19] == '\0') {
      FUN_1004c8736(local_2c0);
    }
    local_2a8 = plVar8[6];
    if (local_2a8 == 0) {
      uVar11 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar11,0x10);
      if (cVar4 != '\0') {
        local_278._0_2_ = 0x202;
        local_278._2_2_ = 0x822;
        local_278._4_4_ = 0x7a0a90;
        uStack_270 = 1;
        uStack_26c = 0x822;
        uStack_26a = 0x564d;
        auStack_268._0_6_ = 0x1007d;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_278,0x16);
      }
      FUN_1001782e9(0,0);
LAB_1004c93f7:
      FUN_1004cf570(&local_278);
      local_278._0_2_ = (undefined2)plVar8[7];
      uStack_270 = (undefined4)lVar6;
      uStack_26c = (undefined2)((ulong)lVar6 >> 0x20);
      uStack_26a = (undefined2)((ulong)lVar6 >> 0x30);
      local_260 = plVar8[6];
      local_258 = *(undefined8 *)((long)plVar8 + 0x5a);
      local_250 = *(undefined1 *)((long)plVar8 + 0x3a);
      cVar4 = FUN_1001b8428(plVar8 + 0xf);
      if (cVar4 == '\0') {
        FUN_1001bb41a(plVar8 + 0xf,&local_238);
        FUN_1001dda84(lVar6 + 0x1cb0,&local_238,auStack_268);
      }
      cVar4 = FUN_1001b8428(plVar8 + 0x11);
      if (cVar4 == '\0') {
        FUN_1001bb41a(plVar8 + 0x11,&local_238);
        FUN_1001dda84(lVar6 + 0x24d0,&local_238,auStack_268 + 4);
      }
      iVar5 = FUN_1004cf5be(&local_278,&local_2c8);
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)((long)local_2c8 + 0x14);
        plVar10 = local_2c8;
      }
      else {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        uVar11 = DAT_1008c7658;
        cVar4 = _os_log_type_enabled(DAT_1008c7658,0x10);
        if (cVar4 != '\0') {
          local_298 = 0x8000300;
          local_294 = local_2a8;
          local_28c = 0x400;
          local_286 = 0x400;
          local_284 = (uint)*(ushort *)(plVar8 + 7);
          local_28a = iVar5;
          __os_log_impl(0x100000000,uVar11,0x10,
                        "ch> **ERROR** CreateArtistWithParams %lld err %d kind %d",&local_298,0x18);
        }
        plVar10 = (long *)0x0;
      }
      FUN_1001b7a50(local_248);
    }
    else {
      plVar10 = (long *)FUN_1004cfdd1(lVar6);
      local_2c8 = plVar10;
      if (plVar10 == (long *)0x0) goto LAB_1004c93f7;
    }
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar8 = plVar14 + 1;
      lVar6 = *plVar8;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar10 == (long *)0x0) {
      uVar11 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar11,0x10);
      if (cVar4 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x822;
        local_22a = "artist != nullptr";
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_238,0x16);
      }
      iVar5 = -0x32;
      FUN_1001782e9(0,0);
    }
    else {
      uVar11 = FUN_1003c5880();
      cVar4 = _os_log_type_enabled(uVar11,1);
      if (cVar4 != '\0') {
        lVar6 = plVar10[3];
        FUN_1005e4722(plVar10,0,&local_238);
        FUN_1001b8dfc(&local_298,&local_238);
        uVar12 = FUN_1001b83ae(&local_298);
        local_278._0_2_ = 0x202;
        local_278._2_2_ = 0x800;
        local_278._4_4_ = (undefined4)lVar6;
        uStack_270 = (undefined4)((ulong)lVar6 >> 0x20);
        uStack_26c = 0x820;
        uStack_26a = (undefined2)uVar12;
        auStack_268._0_6_ = (undefined6)((ulong)uVar12 >> 0x10);
        __os_log_impl(0x100000000,uVar11,1,"ch> ARTIST: %16.16llx \'%s\'",&local_278,0x16);
        FUN_1001b7a50(&local_298);
      }
      plVar14 = local_2b8;
      plVar8 = local_2c0;
      if (local_2b8 != (long *)0x0) {
        LOCK();
        local_2b8[1] = local_2b8[1] + 1;
        UNLOCK();
      }
      if ((char)local_2c0[0x19] == '\0') {
        FUN_1004c8736(local_2c0);
      }
      uVar3 = plVar8[5];
      local_2a8 = local_2a8 & 0xffffffff00000000;
      local_29c = 0;
      if (uVar3 != 0) {
        if (((uVar3 & 2) != 0) && (*(int *)((long)plVar8 + 0x4a) != *(int *)((long)plVar10 + 0x6c)))
        {
          *(int *)((long)plVar10 + 0x6c) = *(int *)((long)plVar8 + 0x4a);
        }
        local_29c = 0;
        if (((uVar3 & 4) != 0) && (*(long *)((long)plVar8 + 0x5a) != plVar10[9])) {
          plVar10[9] = *(long *)((long)plVar8 + 0x5a);
          local_29c = 8;
        }
        if (((uVar3 & 0x20) != 0) && (*(long *)((long)plVar8 + 0x62) != plVar10[10])) {
          plVar10[10] = *(long *)((long)plVar8 + 0x62);
          local_29c = local_29c + 0x100;
        }
        if ((uVar3 & 8) != 0) {
          if (*(int *)((long)plVar8 + 0x4e) != (int)plVar10[0x14]) {
            *(int *)(plVar10 + 0x14) = *(int *)((long)plVar8 + 0x4e);
            local_29c = local_29c | 2;
          }
          if (*(long *)((long)plVar8 + 0x52) != plVar10[0x13]) {
            plVar10[0x13] = *(long *)((long)plVar8 + 0x52);
            local_29c = local_29c | 2;
          }
        }
        if ((uVar3 & 0x10) != 0) {
          if ((*(char *)((long)plVar8 + 0x3b) != (char)plVar10[0x11]) ||
             (*(int *)((long)plVar8 + 0x46) != *(int *)((long)plVar10 + 0xa4))) {
            cVar4 = FUN_1005e5f8e(plVar10,*(char *)((long)plVar8 + 0x3b));
            if (cVar4 != '\0') {
              local_29c = local_29c | 0x10;
            }
          }
        }
      }
      if (plVar8[0xe] != 0) {
        local_2a8 = local_2a8 & 0xffffffff00000000;
        if ((plVar8[0xe] & 4U) != 0) {
          FUN_1001b7f2a(&local_238,plVar10 + 0x12);
          local_2b0 = plVar14;
          iVar5 = FUN_1001b9c66(plVar8 + 0x13,&local_238);
          FUN_1001b7a50(&local_238);
          plVar14 = local_2b0;
          if (iVar5 != 0) {
            local_2a8 = CONCAT44(local_2a8._4_4_,2);
            FUN_1001ab076(plVar10 + 0x12,plVar8 + 0x13);
          }
        }
        if ((*(byte *)(plVar8 + 0xe) & 0x10) != 0) {
          iVar5 = FUN_1001b9c66(plVar8 + 0x17,plVar10 + 0x15);
          if (iVar5 != 0) {
            FUN_1001b8172(plVar10 + 0x15,plVar8 + 0x17);
            local_2a8 = CONCAT44(local_2a8._4_4_,(uint)local_2a8 + 0x80);
          }
        }
        if ((*(byte *)(plVar8 + 0xe) & 8) != 0) {
          (**(code **)(*plVar10 + 0x78))(&local_278,plVar10,1);
          lVar6 = CONCAT44(local_278._4_4_,CONCAT22(local_278._2_2_,(undefined2)local_278));
          if (lVar6 != 0) {
            lVar13 = *(long *)(lVar6 + 0x18);
            if (lVar13 == 0) {
              lVar13 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                     PTR__kCFTypeDictionaryValueCallBacks_10082e140);
              *(long *)(lVar6 + 0x18) = lVar13;
              if (lVar13 == 0) {
                uVar11 = FUN_1001cc310(0);
                cVar4 = _os_log_type_enabled(uVar11,0x10);
                if (cVar4 != '\0') {
                  local_238 = 0x8220202;
                  local_234 = "Assertion failure (expected to be not NULL)";
                  local_22c = 0x822;
                  local_22a = "persistentDataDict";
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_238,
                                      0x16);
                }
                cVar4 = FUN_1001782e9(0,0);
                if (cVar4 == '\0') goto LAB_1004c98a1;
                lVar13 = 0;
              }
            }
            FUN_100166802(lVar13,plVar8[0x15]);
            local_2a8 = local_2a8 | 4;
          }
LAB_1004c98a1:
          plVar8 = (long *)CONCAT26(uStack_26a,CONCAT24(uStack_26c,uStack_270));
          if (plVar8 != (long *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            lVar6 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar6 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
      }
      uVar2 = (uint)local_2a8 | local_29c;
      local_2a8 = CONCAT44(local_2a8._4_4_,uVar2);
      if (uVar2 != 0) {
        FUN_1005e5e26(plVar10,uVar2);
      }
      iVar5 = 0;
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar8 = plVar14 + 1;
        lVar6 = *plVar8;
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (lVar6 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  if (local_2b8 != (long *)0x0) {
    LOCK();
    plVar8 = local_2b8 + 1;
    lVar6 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*local_2b8 + 0x10))(local_2b8);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1004c9972:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

