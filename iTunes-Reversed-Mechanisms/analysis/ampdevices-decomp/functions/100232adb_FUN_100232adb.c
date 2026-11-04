// name: FUN_100232adb
// address: 100232adb

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100232adb(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  double local_50;
  undefined1 local_48 [16];
  undefined2 local_38 [12];
  
  if (*(long *)(param_1 + 0x6750) != 0) {
    cVar2 = FUN_100529831();
    if (cVar2 == '\0') {
      if (*(char *)(param_1 + 0x67a8) != '\0') {
        iVar3 = FUN_1001e9de0(param_1 + 0x6760);
        if (iVar3 == 0) {
          *(undefined1 *)(param_1 + 0x67a8) = 0;
          if ((*(uint *)(param_1 + 0x67b0) != 0) && (*(uint *)(param_1 + 0x67ac) != 0)) {
            FUN_100528f93((double)*(uint *)(param_1 + 0x67ac) / (double)*(uint *)(param_1 + 0x67b0),
                          *(undefined8 *)(param_1 + 0x6750));
          }
          iVar3 = *(int *)(param_1 + 0x67b4);
          if ((iVar3 != 0) &&
             ((((iVar3 != *(int *)(param_1 + 0x67b8) || (iVar3 == 0x636f7079)) ||
               (iVar3 == 0x6f707470)) || (iVar3 == 0x6d656d6f)))) {
            FUN_1001b7a44(local_38);
            FUN_1001b7a44(local_48);
            FUN_100231b73(param_1,*(undefined4 *)(param_1 + 0x67b4),local_38,local_48,0);
            uVar1 = *(undefined8 *)(param_1 + 0x6750);
            FUN_1001b7a44(local_70);
            FUN_1001b7a44(local_60);
            FUN_10052918c(uVar1,local_38,local_48,local_70,local_60);
            FUN_1001b7a50(local_60);
            FUN_1001b7a50(local_70);
            *(undefined4 *)(param_1 + 0x67b8) = *(undefined4 *)(param_1 + 0x67b4);
            FUN_1001b7a50(local_48);
            FUN_1001b7a50(local_38);
          }
          FUN_1001e9eb9(param_1 + 0x6760);
        }
      }
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_38[0] = 0;
        __os_log_impl(0x100000000,uVar1,1,"sync> aborting sync due to stopped sync progress bar",
                      local_38,2);
      }
      FUN_1004e2d0e(param_1,0);
      if (*(int *)(param_1 + 0x6b14) != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar1 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          local_38[0] = 0;
          __os_log_impl(0x100000000,uVar1,1,
                        "sync> aborting cleanup due to stopped sync progress bar",local_38,2);
        }
      }
      FUN_1004e3321(param_1,0);
      if ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2be0) & 0x20) != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar1 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          local_38[0] = 0;
          __os_log_impl(0x100000000,uVar1,1,
                        "sync> aborting copy fiber due to stopped sync progress bar",local_38,2);
        }
        FUN_100407827(*(undefined8 *)(param_1 + 0x30));
      }
      if ((*(long *)(param_1 + 0x16640) != 0) &&
         (*(int *)(*(long *)(param_1 + 0x16640) + 0x78) != 0)) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar1 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          local_38[0] = 0;
          __os_log_impl(0x100000000,uVar1,1,
                        "sync> aborting speech generation due to stopped sync progress bar",local_38
                        ,2);
        }
        if (*(int *)(*(long *)(param_1 + 0x16640) + 0x78) != 0) {
          *(undefined1 *)(*(long *)(param_1 + 0x16640) + 0x7d) = 1;
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x6740) != 0) {
    dVar5 = *(double *)(*(long *)(param_1 + 0x6740) + 0x850);
    dVar6 = 0.0;
    if ((dVar5 == 0.0) && (!NAN(dVar5))) goto LAB_100232f9f;
    cVar2 = FUN_100529831();
    if (cVar2 == '\0') {
      if (*(char *)(*(long *)(param_1 + 0x6740) + 0x8e0) == '\0') {
        dVar6 = 0.0;
        if ((*(char *)(param_1 + 0x6acc) == '\0') &&
           ((((*(long *)(param_1 + 0x30) != 0 &&
              (lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x2c60), lVar4 != 0)) &&
             ((*(double *)(lVar4 + 0x850) != 0.0 || (NAN(*(double *)(lVar4 + 0x850)))))) ||
            ((lVar4 = *(long *)(param_1 + 0x6750), lVar4 != 0 &&
             ((*(double *)(lVar4 + 0x850) != 0.0 || (NAN(*(double *)(lVar4 + 0x850)))))))))) {
          dVar6 = *(double *)(param_1 + 0x153e0);
          if (((dVar6 == 0.0) && (!NAN(dVar6))) ||
             (local_50 = dVar6, dVar5 = (double)FUN_1001ebd46(), dVar6 = local_50, dVar5 < local_50)
             ) {
            if ((dVar6 != 0.0) || (NAN(dVar6))) goto LAB_100232f9f;
          }
          else {
            FUN_1005299c9(*(undefined8 *)(param_1 + 0x6740),lVar4);
          }
          dVar6 = (double)FUN_1001ebd46();
          dVar6 = dVar6 + _DAT_10070e600;
        }
        goto LAB_100232f9f;
      }
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_38[0] = 0;
        __os_log_impl(0x100000000,uVar1,1,"sync> aborting sync due to stopped update progress bar",
                      local_38,2);
      }
      FUN_1004e2d0e(param_1,0);
      if (*(int *)(param_1 + 0x6b14) != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar1 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          local_38[0] = 0;
          __os_log_impl(0x100000000,uVar1,1,
                        "sync> aborting cleanup due to stopped update progress bar",local_38,2);
        }
      }
      FUN_1004e3321(param_1,0);
      if ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2be0) & 0x20) != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar1 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          local_38[0] = 0;
          __os_log_impl(0x100000000,uVar1,1,
                        "sync> aborting copy fiber due to stopped update progress bar",local_38,2);
        }
        FUN_100407827(*(undefined8 *)(param_1 + 0x30));
      }
      dVar6 = 0.0;
      if (*(long *)(param_1 + 0x16640) == 0) goto LAB_100232f9f;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_38[0] = 0;
        __os_log_impl(0x100000000,uVar1,1,
                      "sync> aborting speech generation due to stopped update progress bar",local_38
                      ,2);
      }
      if (*(int *)(*(long *)(param_1 + 0x16640) + 0x78) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x16640) + 0x7d) = 1;
      }
    }
  }
  dVar6 = 0.0;
LAB_100232f9f:
  *(double *)(param_1 + 0x153e0) = dVar6;
  return;
}

