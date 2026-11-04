// name: waitForProperty:onObject:withTimeout:withMainThreadCallback:progressInfo:resultObject:
// address: 10045274b

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x68 bytes */

int MediaLibraryObserver::
    waitForProperty_onObject_withTimeout_withMainThreadCallback_progressInfo_resultObject_
              (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5,
              function<void_(const___CFString_*)> param_6,ProgressInfo *param_7,ID *param_8)

{
  ProgressInfo *pPVar1;
  undefined *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  long local_138;
  char *local_130;
  char *local_128;
  char *local_120;
  ID local_118;
  ID local_110;
  ID local_108;
  long local_100;
  char local_f8 [16];
  long local_e8 [4];
  long *local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined4 uStack_76;
  undefined2 uStack_72;
  long *local_68;
  long local_58 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6.field0_0x0.field0_0x0.field0_0x0._0_8_ != 0) {
    *(undefined8 *)param_6.field0_0x0.field0_0x0.field0_0x0._0_8_ = 0;
  }
  puVar2 = PTR__objc_retain_10082c7b8;
  local_110 = param_4;
  local_108 = param_1;
  local_138 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  local_118 = param_3;
  local_100 = local_138;
  local_130 = (char *)(*(code *)puVar2)(param_3);
  pcVar7 = local_f8;
  local_120 = local_130;
  FUN_100453cd4(pcVar7);
  local_128 = pcVar7;
  cVar3 = FUN_1001edfc7();
  if (cVar3 == '\0') {
    cVar3 = FUN_1001ee068();
    if (cVar3 == '\0') {
      iVar5 = FUN_1001e8dd6(local_a8,1,0);
      if (iVar5 != 0xffffff80) {
        if (iVar5 == 0) {
          local_f8[2] = 1;
          goto LAB_100452a8a;
        }
        uVar12 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar12,0x10);
        if (cVar3 != '\0') {
          uStack_7a = (undefined2)iVar5;
          uStack_78 = (undefined2)(iVar5 >> 0x10);
          goto LAB_1004530b8;
        }
      }
    }
    else {
      iVar5 = FUN_1001e96d3(local_b8,1,0);
      if (iVar5 != 0xffffff80) {
        if (iVar5 != 0) {
          uVar12 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar12,0x10);
          if (cVar3 != '\0') {
            uStack_7a = (undefined2)iVar5;
            uStack_78 = (undefined2)(iVar5 >> 0x10);
LAB_1004530b8:
            uStack_7c = 0x400;
            local_80 = 1;
            local_88._4_4_ = 0x7a0a90;
            local_88._0_4_ = 0x8220202;
            __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_88,0x12);
          }
          goto LAB_10045297a;
        }
        local_f8[1] = 1;
        goto LAB_100452a8a;
      }
    }
LAB_10045297a:
    lVar9 = 0;
  }
  else {
    pcVar7 = operator_new(0x70,(nothrow_t *)PTR_nothrow_10082c970);
    if (pcVar7 == (char *)0x0) {
      uVar12 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar12,0x10);
      if (cVar3 != '\0') {
        local_88._0_4_ = 0x8220202;
        local_88._4_4_ = 0x7a0a90;
        local_80 = 1;
        uStack_7c = 0x822;
        uStack_7a = 0xf688;
        uStack_78 = 0x7c;
        uStack_76 = 1;
        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
      }
      FUN_1001782e9(0,0);
      iVar5 = 0xffffff94;
      goto LAB_10045297a;
    }
    FUN_100453cd4(pcVar7);
    *pcVar7 = '\x01';
    plVar10 = (long *)(pcVar7 + 0x10);
    pPVar1 = *(ProgressInfo **)(param_7 + 0x20);
    local_128 = pcVar7;
    if (pPVar1 == (ProgressInfo *)0x0) {
      local_68 = (long *)0x0;
      plVar11 = *(long **)(pcVar7 + 0x30);
      if (plVar11 != plVar10) {
        plVar8 = (long *)0x0;
        goto LAB_1004529aa;
      }
LAB_1004529b9:
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_88);
      (**(code **)(**(long **)(pcVar7 + 0x30) + 0x20))();
      *(long **)(pcVar7 + 0x30) = local_68;
      local_68 = &local_88;
LAB_100452a7c:
      lVar9 = 0x20;
    }
    else {
      if (pPVar1 == param_7) {
        local_68 = &local_88;
        (**(code **)(*(long *)pPVar1 + 0x18))();
      }
      else {
        local_68 = (long *)(**(code **)(*(long *)pPVar1 + 0x10))();
      }
      pcVar14 = pcVar7 + 0x30;
      plVar11 = *(long **)(pcVar7 + 0x30);
      if (local_68 == &local_88) {
        if (plVar11 == plVar10) {
          (**(code **)(*local_68 + 0x18))(local_68,local_58);
          (**(code **)(*local_68 + 0x20))();
          local_68 = (long *)0x0;
          (**(code **)(**(long **)pcVar14 + 0x18))(*(long **)pcVar14,&local_88);
          (**(code **)(**(long **)pcVar14 + 0x20))();
          pcVar14[0] = '\0';
          pcVar14[1] = '\0';
          pcVar14[2] = '\0';
          pcVar14[3] = '\0';
          pcVar14[4] = '\0';
          pcVar14[5] = '\0';
          pcVar14[6] = '\0';
          pcVar14[7] = '\0';
          local_68 = &local_88;
          (**(code **)(local_58[0] + 0x18))(local_58,plVar10);
          (**(code **)(local_58[0] + 0x20))();
          *(long **)pcVar14 = plVar10;
        }
        else {
          (**(code **)(*local_68 + 0x18))(local_68,plVar10);
          (**(code **)(*local_68 + 0x20))();
          local_68 = *(long **)pcVar14;
          *(long **)pcVar14 = plVar10;
        }
      }
      else {
        plVar8 = local_68;
        if (plVar11 == plVar10) goto LAB_1004529b9;
LAB_1004529aa:
        local_68 = plVar11;
        *(long **)(pcVar7 + 0x30) = plVar8;
      }
      if (local_68 == &local_88) goto LAB_100452a7c;
      lVar9 = 0x28;
      if (local_68 == (long *)0x0) goto LAB_100452a8a;
    }
    (**(code **)(*local_68 + lVar9))(local_68);
LAB_100452a8a:
    (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(local_108 + 0x30),PTR_s_lock_10088d288);
    lVar9 = local_108 + 0x38;
    auVar18 = FUN_1004545fc(lVar9,&local_138);
    if (auVar18._0_8_ == auVar18._8_8_) {
      (*(code *)PTR__objc_msgSend_10082c770)
                (local_110,PTR_s_addObserver_forKeyPath_options_c_10088d298,local_108,local_118,0,
                 local_108);
    }
    if (*pcVar7 != '\0') {
      auVar18 = FUN_1004545fc(lVar9,&local_138);
      plVar10 = auVar18._0_8_;
      while (plVar10 != auVar18._8_8_) {
        bVar15 = true;
        if (*(char *)plVar10[6] != '\0') goto LAB_100452b83;
        plVar11 = plVar10;
        plVar8 = (long *)plVar10[1];
        if ((long *)plVar10[1] == (long *)0x0) {
          do {
            plVar10 = (long *)plVar11[2];
            bVar15 = (long *)*plVar10 != plVar11;
            plVar11 = plVar10;
          } while (bVar15);
        }
        else {
          do {
            plVar10 = plVar8;
            plVar8 = (long *)*plVar10;
          } while ((long *)*plVar10 != (long *)0x0);
        }
      }
    }
    uVar12 = (*(code *)PTR__objc_retain_10082c7b8)(local_100);
    local_88._0_4_ = (undefined4)uVar12;
    local_88._4_4_ = (undefined4)((ulong)uVar12 >> 0x20);
    uVar12 = (*(code *)PTR__objc_retain_10082c7b8)(local_120);
    local_80 = (undefined4)uVar12;
    uStack_7c = (undefined2)((ulong)uVar12 >> 0x20);
    uStack_7a = (undefined2)((ulong)uVar12 >> 0x30);
    uStack_78 = SUB82(pcVar7,0);
    uStack_76 = (undefined4)((ulong)pcVar7 >> 0x10);
    uStack_72 = (undefined2)((ulong)pcVar7 >> 0x30);
    FUN_100454770(lVar9);
    FUN_100453b6a(&local_88);
    bVar15 = false;
LAB_100452b83:
    (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(local_108 + 0x30),PTR_s_unlock_10088d290)
    ;
    uVar12 = _NSSelectorFromString(local_118);
    local_100 = (*(code *)PTR__objc_msgSend_10082c770)
                          (local_110,PTR_s_performSelector__10088d2a0,uVar12);
    if (local_100 == 0) {
      if (*pcVar7 == '\0') {
        dVar16 = (double)FUN_1001ebd46();
        local_120 = pcVar7 + 0x50;
        local_100 = 0;
        iVar5 = 0;
        do {
          if (((param_5 != DAT_100700af8) || (NAN(param_5) || NAN(DAT_100700af8))) &&
             (dVar17 = (double)FUN_1001ebd46(), dVar16 + param_5 <= dVar17)) {
            if (iVar5 != 0) goto LAB_100452be2;
            break;
          }
          iVar5 = FUN_1001ceb24(param_8,0x696d7074,0,0,0);
          if (iVar5 != 0) {
            if (iVar5 == 0xffffff80) goto LAB_100452dc9;
            uVar12 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar12,0x10);
            if (cVar3 != '\0') {
              local_88._0_4_ = 0x8220202;
              local_88._4_4_ = 0x7a0a90;
              local_80 = 1;
              uStack_7c = 0x400;
              uStack_7a = (undefined2)iVar5;
              uStack_78 = (undefined2)(iVar5 >> 0x10);
              __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_88,0x12);
            }
            if (iVar5 != 0) goto LAB_100452dc9;
          }
          cVar3 = FUN_1001c19cd();
          if (cVar3 != '\0') {
            iVar5 = 0xffffff80;
            goto LAB_100452dc9;
          }
          if (pcVar7[1] == '\x01') {
            iVar5 = FUN_1001e991a(pcVar7 + 0x40,90000);
          }
          else {
            iVar5 = FUN_1001e91e4(local_120,90000);
          }
        } while (iVar5 != 0);
        uVar12 = _NSSelectorFromString(local_118);
        local_100 = (*(code *)PTR__objc_msgSend_10082c770)
                              (local_110,PTR_s_performSelector__10088d2a0,uVar12);
        iVar5 = 0x6bd;
        if (local_100 != 0) {
          iVar5 = 0;
        }
      }
      else {
        iVar5 = 0x6b8;
LAB_100452be2:
        local_100 = 0;
      }
    }
    else {
      iVar5 = 0;
    }
LAB_100452dc9:
    (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(local_108 + 0x30),PTR_s_lock_10088d288);
    if (*pcVar7 == '\0') {
      FUN_100452695(lVar9,&local_138,&local_128);
    }
    auVar18 = FUN_1004545fc(lVar9,&local_138);
    if (auVar18._0_8_ == auVar18._8_8_) {
      (*(code *)PTR__objc_msgSend_10082c770)
                (local_110,PTR_s_removeObserver_forKeyPath_contex_10088d270,local_108,local_118,
                 local_108);
    }
    (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(local_108 + 0x30),PTR_s_unlock_10088d290)
    ;
    if (*pcVar7 == '\0') {
      if (pcVar7[1] == '\x01') {
        iVar6 = FUN_1001e9bb5(pcVar7 + 0x40);
        if ((iVar6 != -0x80) && (iVar6 != 0)) {
          uVar12 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar12,0x10);
          if (cVar3 != '\0') {
            uStack_7a = (undefined2)iVar6;
            uStack_78 = (undefined2)((uint)iVar6 >> 0x10);
LAB_100452fa8:
            uStack_7c = 0x400;
            local_80 = 1;
            local_88._4_4_ = 0x7a0a90;
            local_88._0_4_ = 0x8220202;
            __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_88,0x12);
          }
        }
      }
      else {
        iVar6 = FUN_1001e9587(pcVar7 + 0x50);
        if ((iVar6 != -0x80) && (iVar6 != 0)) {
          uVar12 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar12,0x10);
          if (cVar3 != '\0') {
            uStack_7a = (undefined2)iVar6;
            uStack_78 = (undefined2)((uint)iVar6 >> 0x10);
            goto LAB_100452fa8;
          }
        }
      }
    }
    lVar9 = local_100;
    if (bVar15) {
      if (*pcVar7 == '\0') {
        uVar12 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar12,0x10);
        if (cVar3 != '\0') {
          local_88._0_4_ = 0x8220202;
          local_88._4_4_ = 0x7ab58c;
          local_80 = 1;
          uStack_7c = 0x822;
          uStack_7a = 0xf69e;
          uStack_78 = 0x7c;
          uStack_76 = 1;
          __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
        }
        bVar4 = FUN_1001782e9(0,0);
        pcVar7 = local_128;
        lVar9 = local_100;
        if ((bVar4 & local_128 != (char *)0x0) != 1) goto LAB_100452fd3;
      }
      lVar9 = local_100;
      plVar10 = *(long **)(pcVar7 + 0x30);
      if (plVar10 == (long *)(pcVar7 + 0x10)) {
        lVar13 = 0x20;
LAB_100452fc5:
        (**(code **)(*plVar10 + lVar13))();
      }
      else {
        lVar13 = 0x28;
        if (plVar10 != (long *)0x0) goto LAB_100452fc5;
      }
      operator_delete(pcVar7);
    }
  }
LAB_100452fd3:
  if (param_6.field0_0x0.field0_0x0.field0_0x0._0_8_ != 0) {
    *(long *)param_6.field0_0x0.field0_0x0.field0_0x0._0_8_ = lVar9;
  }
  if (local_c8 == local_e8) {
    lVar9 = 0x20;
  }
  else {
    lVar9 = 0x28;
    if (local_c8 == (long *)0x0) goto LAB_100453006;
  }
  (**(code **)(*local_c8 + lVar9))();
LAB_100453006:
  FUN_100453b6a(&local_138);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

