// name: FUN_10061f1cd
// address: 10061f1cd

ulong FUN_10061f1cd(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 local_268 [16];
  undefined4 local_258;
  undefined8 local_254;
  undefined2 local_24c;
  long local_24a;
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1002bd03f(*(undefined8 *)(param_2 + 8),
                        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x39e),
                        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x39d));
  if (cVar1 != '\0') {
    lVar3 = *(long *)(param_1 + 0x20);
    cVar1 = FUN_1002bd244(*(undefined8 *)(param_2 + 8));
    if (cVar1 == '\0') {
      if ((((*(char *)(lVar3 + 0x39e) != '\0') && (*(char *)(lVar3 + 0xd30) != '\0')) &&
          (*(char *)(lVar3 + 0x42) == '\0')) &&
         ((*(char *)(lVar3 + 0x2a2) == '\0' || (cVar1 = FUN_1003a7f56(param_2), cVar1 == '\0')))) {
        if (*(char *)(lVar3 + 0x39f) == '\x02') {
          uVar2 = FUN_1002be216(*(undefined8 *)(lVar3 + 0x840),**(undefined8 **)(param_2 + 8));
          uVar7 = (ulong)uVar2;
          goto LAB_10061f3a0;
        }
        if (*(char *)(lVar3 + 0x39f) == '\x01') {
          uVar7 = 1;
          goto LAB_10061f3a0;
        }
      }
    }
    else {
      uVar7 = 0;
      lVar3 = FUN_100597ce2(param_2,0);
      if (lVar3 == 0) goto LAB_10061f3a0;
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x58);
      if (lVar3 != 0) {
        uVar4 = FUN_1003085d6(param_2);
        lVar5 = FUN_10048bbac(uVar4,5,0);
        if (lVar5 == 0) {
          uVar4 = FUN_1003085d6(param_2);
          lVar5 = FUN_10048604a(uVar4);
        }
        for (lVar5 = FUN_100485529(lVar5); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x18)) {
          uVar2 = FUN_1004744bf(*(undefined8 *)(lVar5 + 8),0);
          if (((uVar2 & 0x21800c) == 8) &&
             (cVar1 = FUN_1002bd328(*(undefined8 *)(lVar5 + 8)), cVar1 != '\0')) {
            lVar6 = FUN_100597ce2(lVar5);
            lVar8 = 0;
            if (lVar6 != 0) {
              lVar8 = *(long *)(*(long *)(lVar6 + 0x10) + 0x58);
            }
            if (lVar8 == lVar3) {
              if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
                uVar7 = FUN_10061f695(param_1,lVar5);
                return uVar7;
              }
              goto LAB_10061f452;
            }
          }
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          FUN_10048687f(param_2,local_238);
          FUN_1001b8dfc(local_268,local_238);
          local_254 = FUN_1001b83ae(local_268);
          local_258 = 0x8220202;
          local_24c = 0x800;
          local_24a = lVar3;
          __os_log_impl(0x100000000,uVar4,1,
                        "sync> did not find audiobook track for supplemental PDF \"%{public}s\", playlist id %llu"
                        ,&local_258,0x16);
          FUN_1001b7a50(local_268);
        }
      }
    }
  }
  uVar7 = 0;
LAB_10061f3a0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar7 & 0xff;
  }
LAB_10061f452:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

