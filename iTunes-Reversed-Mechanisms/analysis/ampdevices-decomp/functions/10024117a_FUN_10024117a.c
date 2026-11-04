// name: FUN_10024117a
// address: 10024117a

char FUN_10024117a(undefined4 *param_1,char param_2,char param_3,long *param_4,undefined4 *param_5)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  char *pcVar11;
  long *plVar12;
  char *pcVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined8 local_88;
  long *plStack_80;
  undefined8 local_78;
  long *plStack_70;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = 0;
  plStack_80 = (long *)0x0;
  if (param_4 != (long *)0x0) {
    FUN_1002188e4(param_4);
  }
  cVar6 = FUN_1002404ba(param_1);
  plVar12 = plStack_80;
  if (cVar6 == '\0') {
    uVar10 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar10,0x10);
    if (cVar6 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x2c9f;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar14 = 0xffffffce;
    goto LAB_10024124f;
  }
  if (param_2 != '\0') {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    local_88 = 0;
    plStack_80 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar1 = plVar12 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*(char *)((long)param_1 + 5) == '\x01') {
      uVar7 = *(undefined1 *)(param_1 + 1);
    }
    else {
      uVar7 = 0;
    }
    if (DAT_1008c54d0 == (long *)0x0) {
      local_78 = 0;
      plStack_70 = (long *)0x0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_4a = 0;
    }
    else {
      (**(code **)(*DAT_1008c54d0 + 0x28))(&local_78,DAT_1008c54d0,uVar7,param_1);
      plVar1 = plStack_70;
      plVar12 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
      local_58 = (undefined4)local_78;
      uStack_54 = local_78._4_4_;
      uStack_50 = plStack_70._0_4_;
      local_78 = 0;
      plStack_70 = (long *)0x0;
      uStack_4c = (undefined2)((ulong)plVar1 >> 0x20);
      uStack_4a = (undefined2)((ulong)plVar1 >> 0x30);
      if (plVar12 != (long *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (plStack_70 != (long *)0x0) {
      LOCK();
      plVar12 = plStack_70 + 1;
      lVar2 = *plVar12;
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((long *)CONCAT44(uStack_54,local_58) == (long *)0x0) {
      cVar6 = '\0';
    }
    else {
      cVar6 = (**(code **)(*(long *)CONCAT44(uStack_54,local_58) + 0x10))();
      FUN_100203686(&local_88,&local_58);
    }
    plVar12 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
    if (plVar12 != (long *)0x0) {
      LOCK();
      plVar1 = plVar12 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((param_4 == (long *)0x0) || (cVar6 == '\0')) {
      if (cVar6 == '\0') goto LAB_100241412;
    }
    else {
      FUN_100203686(param_4,&local_88);
    }
    goto LAB_1002413ca;
  }
LAB_100241412:
  if ((*(char *)(param_1 + 0x115) == '\x01') &&
     (((*(char *)((long)param_1 + 5) != '\x01' || (*(char *)(param_1 + 1) == '\x12')) &&
      (cVar6 = FUN_1003d0a10(param_1[6],param_1 + 0x116), cVar6 != '\0')))) {
    cVar6 = FUN_1004bffa0(param_1);
    uVar14 = 0x234c;
    if (cVar6 != '\x02') {
      cVar6 = '\x12';
      if (param_4 != (long *)0x0) {
        FUN_100240c54(&local_58,0x12,param_1);
        FUN_100217418(param_4,&local_58);
        plVar12 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
        if (plVar12 != (long *)0x0) {
          LOCK();
          plVar1 = plVar12 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (*param_4 == 0) goto LAB_10024124f;
      }
LAB_1002413ca:
      uVar8 = 0;
      bVar5 = true;
      uVar14 = 0;
      if (param_1[0x232] == 0) goto LAB_100241252;
      local_5c = 0;
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_4a = 0;
      if (param_4 == (long *)0x0) {
        FUN_100203686(&local_58,&local_88);
        plVar12 = (long *)CONCAT44(uStack_54,local_58);
        if (plVar12 == (long *)0x0) {
          FUN_100240c54(&local_78,cVar6,param_1);
          plVar1 = plStack_70;
          local_58 = (undefined4)local_78;
          uStack_54 = local_78._4_4_;
          uVar14 = plStack_70._0_4_;
          local_78 = 0;
          plStack_70 = (long *)0x0;
          plVar12 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
          uStack_50 = uVar14;
          uStack_4c = (undefined2)((ulong)plVar1 >> 0x20);
          uStack_4a = (undefined2)((ulong)plVar1 >> 0x30);
          if (plVar12 != (long *)0x0) {
            LOCK();
            plVar1 = plVar12 + 1;
            lVar2 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar2 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (plStack_70 != (long *)0x0) {
            LOCK();
            plVar12 = plStack_70 + 1;
            lVar2 = *plVar12;
            *plVar12 = *plVar12 + -1;
            UNLOCK();
            if (lVar2 == 0) {
              (**(code **)(*plStack_70 + 0x10))(plStack_70);
              std::__shared_weak_count::__release_weak();
            }
          }
          goto LAB_100241400;
        }
LAB_10024152d:
        (**(code **)(*plVar12 + 0x148))();
        uVar4 = param_1[0x232];
        bVar15 = (local_5c & uVar4) != uVar4;
        if (bVar15) {
          cVar6 = '\0';
        }
        if (bVar15 && param_4 != (long *)0x0) {
          FUN_1002188e4(param_4);
          cVar6 = '\0';
        }
      }
      else {
        FUN_100203686(&local_58,param_4);
LAB_100241400:
        plVar12 = (long *)CONCAT44(uStack_54,local_58);
        if (plVar12 != (long *)0x0) goto LAB_10024152d;
      }
      plVar12 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
      uVar14 = uVar8;
      if (plVar12 != (long *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto LAB_100241252;
    }
  }
  else {
    uVar14 = 0x2347;
    if (*(char *)(param_1 + 0x236) == '\0') {
      cVar3 = *(char *)(param_1 + 1);
      if (*(char *)((long)param_1 + 5) == '\x01') {
        if (cVar3 != '\0') {
          if (cVar3 != '\x04') {
            bVar5 = false;
            cVar6 = '\0';
            if (cVar3 != '\x12') goto LAB_100241252;
          }
          goto LAB_100241767;
        }
LAB_1002415b2:
        iVar9 = param_1[6];
        if (iVar9 < 0x4d46494c) {
          if ((iVar9 == 0x46494c45) || (iVar9 == 0x48545450)) {
LAB_100241632:
            if ((iVar9 != 0x48545450 || param_3 != '\x01') ||
               (cVar6 = FUN_1002b8874(param_1 + 0x122,param_1[0x121],0), cVar6 == '\0')) {
              pcVar11 = " V4M V4M V4MPVOMPVOMPVOM VOMVooMVooM 4PM 4PM 4PM GPMGEPMGEPMGEPMGEPMGEPM";
              if (param_3 != '\x03') {
                pcVar11 = (char *)0x0;
              }
              pcVar13 = " PG3 pg3 pg3PPG3ppg3ppg3 2G3 2g3 2g32PG32pg32pg3";
              if (param_3 != '\x01') {
                pcVar13 = pcVar11;
              }
              if ((pcVar13 == (char *)0x0) ||
                 (iVar9 = FUN_100466aac(pcVar13,param_1[0x22e],param_1[0x22f],&local_58,&local_78,
                                        *param_1), iVar9 != 0)) goto LAB_10024124f;
              param_1[0x230] = local_58;
              param_1[0x231] = (undefined4)local_78;
            }
LAB_100241767:
            cVar6 = '\x12';
            if (param_4 != (long *)0x0) {
              FUN_100240c54(&local_58,0x12,param_1);
              FUN_100217418(param_4,&local_58);
              plVar12 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
              if (plVar12 != (long *)0x0) {
                LOCK();
                plVar1 = plVar12 + 1;
                lVar2 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar2 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                  std::__shared_weak_count::__release_weak();
                }
              }
            }
            goto LAB_1002413ca;
          }
        }
        else if ((iVar9 == 0x53485244) || (iVar9 == 0x4d46494c)) goto LAB_100241632;
      }
      else if ((cVar3 == '\x12') || (cVar3 == '\0')) goto LAB_1002415b2;
    }
  }
LAB_10024124f:
  bVar5 = false;
  cVar6 = '\0';
LAB_100241252:
  if (param_5 != (undefined4 *)0x0) {
    uVar8 = 0x2347;
    if (cVar6 != '\0') {
      uVar8 = uVar14;
    }
    if (!bVar5) {
      uVar8 = uVar14;
    }
    *param_5 = uVar8;
  }
  if (plStack_80 != (long *)0x0) {
    LOCK();
    plVar12 = plStack_80 + 1;
    lVar2 = *plVar12;
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_80 + 0x10))(plStack_80);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar6;
}

