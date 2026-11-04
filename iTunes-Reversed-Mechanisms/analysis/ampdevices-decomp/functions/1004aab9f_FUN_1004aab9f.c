// name: FUN_1004aab9f
// address: 1004aab9f

int * FUN_1004aab9f(char param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined2 local_13c;
  int local_13a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c7790 == '\0') {
    piVar5 = DAT_1008c7798;
    if (param_1 != '\0' && DAT_1008c7798 == (int *)0x0) {
      FUN_10015805a(&local_148);
      local_148 = 0x854ac0;
      uStack_144 = 1;
      piVar5 = (int *)FUN_1001c629e(0x638,&DAT_100711c6e);
      if (piVar5 == (int *)0x0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "downloadManager != __null";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        FUN_10015811a(&local_148);
        iVar3 = -0x6c;
LAB_1004ab027:
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_148 = 0x8220202;
          uStack_144 = 0x7a0a90;
          uStack_140 = 1;
          local_13c = 0x400;
          local_13a = iVar3;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_148,0x12);
        }
        goto LAB_1004ab0a6;
      }
      piVar5[0x5c] = 0;
      piVar5[0x5d] = 0;
      piVar5[0x5e] = 0;
      piVar5[0x5f] = 0;
      piVar5[0] = 1;
      piVar5[1] = 0x646f776e;
      iVar3 = FUN_1001ea5dc();
      piVar5[2] = iVar3;
      *(undefined2 *)(piVar5 + 0x173) = 1;
      *(undefined1 *)(piVar5 + 0x68) = 1;
      piVar5[0x17a] = 0x51eb851f;
      piVar5[0x17b] = 0x3fd51eb8;
      piVar5[0x17e] = 0;
      piVar5[0x17f] = 0x40140000;
      *(undefined1 *)(piVar5 + 0x187) = 1;
      puVar1 = PTR_cf_userMaxConcurrentDownloads_100854a88;
      iVar3 = FUN_1001585c2(&local_148,PTR_cf_userMaxConcurrentDownloads_100854a88);
      if ((iVar3 < 1) || (iVar3 = FUN_1001585c2(&local_148,puVar1), 3 < iVar3)) {
        FUN_1001587d4(&local_148,puVar1,3);
        FUN_100159630(&local_148);
      }
      uVar4 = FUN_1001585c2(&local_148,puVar1);
      iVar3 = FUN_1004bd90d(piVar5 + 0x54,piVar5,0x6d61696e,1,(char)piVar5[0x173],uVar4);
      if (iVar3 == -0x80) {
LAB_1004ab002:
        FUN_1004ada4f(piVar5);
        FUN_10015811a(&local_148);
        piVar5 = (int *)0x0;
        if (iVar3 == -0x80) goto LAB_1004ab0a8;
        if (iVar3 != 0) goto LAB_1004ab027;
      }
      else {
        if (iVar3 == 0) {
          iVar3 = FUN_1004bd90d(piVar5 + 0x56,piVar5,0x61757820,0,(char)piVar5[0x173],uVar4);
          if (iVar3 == -0x80) goto LAB_1004ab002;
          if (iVar3 != 0) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
              goto LAB_1004aafe6;
            }
            goto LAB_1004aaff9;
          }
          iVar3 = FUN_1001c703f(piVar5 + 0x58,FUN_1004bdc47,piVar5);
          if (iVar3 == -0x80) goto LAB_1004ab002;
          if (iVar3 != 0) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
              goto LAB_1004aafe6;
            }
            goto LAB_1004aaff9;
          }
          uVar6 = FUN_1001c156e();
          iVar3 = FUN_1001c6b4a(uVar6,piVar5 + 0x58);
          if (iVar3 == -0x80) goto LAB_1004ab002;
          if (iVar3 != 0) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
              goto LAB_1004aafe6;
            }
            goto LAB_1004aaff9;
          }
          FUN_1004bb2cc(piVar5);
          iVar3 = FUN_1004bdda7(piVar5);
          if (iVar3 == -0x80) goto LAB_1004ab002;
          if (iVar3 != 0) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
              goto LAB_1004aafe6;
            }
            goto LAB_1004aaff9;
          }
          uVar4 = FUN_1004af470(piVar5);
          FUN_1004bdf86(uVar4);
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
LAB_1004aafe6:
            local_3c = 0x400;
            local_44 = "Assertion failure";
            local_48 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
LAB_1004aaff9:
          if (iVar3 != 0) goto LAB_1004ab002;
          piVar5 = (int *)0x0;
        }
        FUN_10015811a(&local_148);
      }
    }
    DAT_1008c7798 = piVar5;
    piVar5 = DAT_1008c7798;
    if (DAT_1008c7798 != (int *)0x0) {
      LOCK();
      *DAT_1008c7798 = *DAT_1008c7798 + 1;
      UNLOCK();
      goto LAB_1004ab0a8;
    }
  }
LAB_1004ab0a6:
  piVar5 = (int *)0x0;
LAB_1004ab0a8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return piVar5;
}

