// name: FUN_1001ee2a0
// address: 1001ee2a0

int FUN_1001ee2a0(undefined8 param_1,long param_2,long param_3,int param_4,uint param_5,
                 pthread_t *param_6,char *param_7)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  size_t sVar7;
  pthread_t local_a0;
  size_t local_98;
  sched_param local_90;
  long local_88;
  long local_80;
  pthread_attr_t local_78;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90.sched_priority = 0;
  local_90.__opaque[0] = '\0';
  local_90.__opaque[1] = '\0';
  local_90.__opaque[2] = '\0';
  local_90.__opaque[3] = '\0';
  if (param_6 == (pthread_t *)0x0) {
    param_6 = &local_a0;
  }
  else {
    *param_6 = (pthread_t)0x0;
  }
  if (0xb < param_4 + 2U) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006c52a4(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_1001ee65f;
  }
  local_88 = param_3;
  local_80 = param_2;
  iVar3 = _pthread_attr_init(&local_78);
  if (iVar3 == -0x80) goto LAB_1001ee65f;
  if (iVar3 != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006c5618(iVar3,uVar4);
    }
    goto LAB_1001ee65f;
  }
  iVar3 = _pthread_attr_setdetachstate(&local_78,2);
  if (iVar3 == -0x80) {
LAB_1001ee63e:
    _pthread_attr_destroy(&local_78);
    goto LAB_1001ee65f;
  }
  if (iVar3 == 0) {
    if ((param_5 & 1) != 0) {
      iVar3 = _pthread_attr_getstacksize(&local_78,&local_98);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          sVar7 = 1000000;
          if (1000000 < local_98 * 2) {
            sVar7 = local_98 * 2;
          }
          iVar3 = _pthread_attr_setstacksize(&local_78,sVar7);
          if (iVar3 != -0x80) {
            if (iVar3 != 0) {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                FUN_1006c531a(iVar3,uVar4);
              }
              goto LAB_1001ee544;
            }
            goto LAB_1001ee34b;
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            FUN_1006c5386(iVar3,uVar4);
          }
        }
      }
      goto LAB_1001ee63e;
    }
LAB_1001ee34b:
    if (((5 < param_4) && (iVar3 = _pthread_attr_setschedpolicy(&local_78,2), iVar3 != -0x80)) &&
       (iVar3 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006c53f2(iVar3,uVar4);
      }
    }
    if ((param_4 != -2) && (param_4 != 0)) {
      iVar3 = FUN_1001ee16d();
      local_90.sched_priority = iVar3 + param_4;
      iVar3 = _pthread_attr_setschedparam(&local_78,&local_90);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_1006c545e(iVar3,uVar4);
        }
      }
    }
    plVar5 = (long *)FUN_1001c629e(0x90,&DAT_100711c6e);
    if (plVar5 == (long *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006c5536(uVar4);
      }
      FUN_1001782e9(0,0);
      _pthread_attr_destroy(&local_78);
      iVar3 = -0x6c;
      goto LAB_1001ee65f;
    }
    plVar5[0x10] = 0;
    plVar5[0x11] = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0xc] = 0;
    plVar5[0xd] = 0;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[2] = 0;
    plVar5[3] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    FUN_1001c128c(plVar5,param_1);
    plVar5[6] = local_80;
    plVar5[7] = local_88;
    *(bool *)(plVar5 + 8) = param_4 == -2;
    if ((param_7 != (char *)0x0) && (*param_7 != '\0')) {
      FUN_1001dfbb3(param_7,(long)plVar5 + 0x41,0x40);
    }
    iVar3 = _pthread_create(param_6,&local_78,(void **)FUN_1001ee804,plVar5);
    if (iVar3 == -0x80) {
LAB_1001ee4ad:
      plVar1 = (long *)plVar5[4];
      if (plVar1 == plVar5) {
        lVar6 = 0x20;
LAB_1001ee68a:
        (**(code **)(*plVar1 + lVar6))();
      }
      else {
        lVar6 = 0x28;
        if (plVar1 != (long *)0x0) goto LAB_1001ee68a;
      }
      operator_delete(plVar5);
      goto LAB_1001ee544;
    }
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006c54ca(iVar3,uVar4);
      }
      if (iVar3 != 0) goto LAB_1001ee4ad;
    }
    _pthread_attr_destroy(&local_78);
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006c55ac(iVar3,uVar4);
    }
LAB_1001ee544:
    _pthread_attr_destroy(&local_78);
    if (iVar3 != 0) goto LAB_1001ee65f;
  }
  LOCK();
  DAT_1008c5420 = DAT_1008c5420 + 1;
  UNLOCK();
  iVar3 = 0;
LAB_1001ee65f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

