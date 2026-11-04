// name: FUN_10060375e
// address: 10060375e

int FUN_10060375e(long param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_2c0 [16];
  long local_2b0;
  undefined8 local_2a8;
  long local_2a0;
  long local_298;
  char local_289;
  undefined4 local_288;
  undefined8 local_284;
  undefined2 local_27c;
  undefined8 local_27a;
  long local_268 [4];
  long *local_248;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  long local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = *(long *)(param_1 + 0x10);
  local_289 = '\0';
  local_2b0 = param_1;
  local_298 = lVar4;
  iVar3 = FUN_100601cd5(param_1,&local_2a0);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_238 = 0x8000200;
        local_22c = 0x800;
        local_22a = local_2a0;
        local_234 = param_2;
        __os_log_impl(0x100000000,uVar6,1,
                      "sync> required free bytes = %lld, available free bytes = %lld",&local_238,
                      0x16);
      }
      iVar3 = 0;
      if (local_2a0 < (long)param_2) {
        FUN_10031c2c9(*(undefined8 *)(lVar4 + 0x30));
        lVar4 = FUN_1002f9977(*(undefined8 *)(lVar4 + 0x30));
        if (lVar4 != 0) {
          do {
            if (((*(byte *)(lVar4 + 0xc6) & 4) != 0) && ((*(byte *)(lVar4 + 0xc3) & 1) == 0)) {
              lVar1 = *(long *)(lVar4 + 0x28);
              local_2a8 = 0;
              if (lVar1 != 0) {
                local_248 = operator_new(0x30);
                *local_248 = (long)&PTR_FUN_100870fc0;
                local_248[1] = (long)&local_298;
                local_248[2] = (long)&local_2b0;
                local_248[3] = (long)&local_2a0;
                local_248[4] = (long)&local_2a8;
                local_248[5] = (long)&local_289;
                FUN_1003a0178(lVar1,0,local_268);
                if (local_248 == local_268) {
                  lVar5 = 0x20;
                }
                else {
                  lVar5 = 0x28;
                  if (local_248 == (long *)0x0) goto LAB_100603913;
                }
                (**(code **)(*local_248 + lVar5))();
              }
LAB_100603913:
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar6 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8);
              if (cVar2 != '\0') {
                FUN_1001de8ee(lVar1 + 0xb8,&local_238);
                FUN_1001b8dfc(local_2c0,&local_238);
                local_284 = FUN_1001b83ae(local_2c0);
                local_288 = 0x8220202;
                local_27c = 0x800;
                local_27a = local_2a8;
                __os_log_impl(0x100000000,uVar6,1,
                              "sync> pruned album \"%{public}s\", total size = %llu",&local_288,0x16
                             );
                FUN_1001b7a50(local_2c0);
              }
              if ((long)param_2 <= local_2a0) break;
            }
            lVar4 = FUN_1002f9abc(lVar4);
          } while (lVar4 != 0);
          if (local_289 == '\0') {
            iVar3 = 0;
          }
          else {
            FUN_100313e0b(*(undefined8 *)(local_298 + 0x30));
            iVar3 = FUN_100603b3e(local_2b0);
            FUN_1002fbbfc(*(undefined8 *)(local_298 + 0x30));
            FUN_100321e5c(*(undefined8 *)(local_298 + 0x30));
          }
        }
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure";
        local_22c = 0x400;
        local_22a = CONCAT44(local_22a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_238,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

