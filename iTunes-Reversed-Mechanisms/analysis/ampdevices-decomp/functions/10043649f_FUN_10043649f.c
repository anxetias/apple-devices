// name: FUN_10043649f
// address: 10043649f

undefined8 FUN_10043649f(long param_1,undefined8 *param_2,char param_3,ulong *param_4,long param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 local_260 [16];
  ulong *local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_250 = param_4;
  if ((param_2 == (undefined8 *)0x0) || (param_2[2] == 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
    goto LAB_100436c94;
  }
  uVar2 = FUN_1004744bf(param_2,0);
  FUN_100476ac1(local_260,param_2);
  if ((*(char *)(param_1 + 0x14cda) != '\0') &&
     ((param_3 == '\0' || (cVar1 = FUN_1002bd328(param_2), cVar1 != '\0')))) {
    if ((short)uVar2 < 0) {
      if (((*(char *)(param_1 + 0x37a) != '\0' && (~uVar2 & 0x8002) == 0) ||
          ((~uVar2 & 0x8040) == 0 && *(char *)(param_1 + 0x37b) != '\0')) &&
         (cVar1 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15380),*param_2), cVar1 == '\0')) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_234 = (char *)FUN_1001b83ae(local_260);
          local_238 = 0x8220102;
          __os_log_impl(0x100000000,uVar5,1,"sync> adding \"%{public}s\" to rental track list",
                        &local_238,0xc);
        }
        FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15380),*param_2);
        uVar4 = 0x80000000;
LAB_100436b3b:
        if (local_250 != (ulong *)0x0) {
          *local_250 = *local_250 | uVar4;
        }
      }
    }
    else if (*(char *)(param_1 + 0x6abf) != '\0') {
      if ((((((uVar2 & 0x212004) == 0 && (uVar2 & 0x100101) != 0) &&
            (*(char *)(param_1 + 0x33b) != '\0')) ||
           (((uVar2 & 0x20) != 0 && (*(char *)(param_1 + 0x350) != '\0')))) &&
          (((param_2[8] == 0 ||
            (cVar1 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15300),
                                   *(undefined8 *)(param_2[8] + 0x18)), cVar1 == '\0')) &&
           ((param_2[5] == 0 ||
            (cVar1 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15308),
                                   *(undefined8 *)(param_2[5] + 0x20)), cVar1 == '\0')))))) &&
         ((((iVar3 = FUN_10047a7b5(param_2,&local_238), iVar3 != 0 ||
            (cVar1 = FUN_1002c16fa(*(undefined8 *)(param_1 + 0x15310),&local_238), cVar1 == '\0'))
           && (FUN_100439e7e(param_1,param_5), *(char *)(param_1 + 0x14cdb) == '\x02')) &&
          (cVar1 = FUN_1002be216(*(undefined8 *)(param_1 + 0x152f0),*param_2), cVar1 == '\0')))) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_244 = FUN_1001b83ae(local_260);
          local_248 = 0x8220102;
          __os_log_impl(0x100000000,uVar5,1,"sync> adding \"%{public}s\" to selected music tracks",
                        &local_248,0xc);
        }
        FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x152f0),*param_2);
        if (param_5 != 0) {
          *(byte *)(param_5 + 1) = *(byte *)(param_5 + 1) | 4;
        }
        if (local_250 != (ulong *)0x0) {
          *(byte *)local_250 = (byte)*local_250 | 0x20;
        }
      }
      if ((((uVar2 & 0x402) != 0) && (*(char *)(param_1 + 0x34e) != '\0')) &&
         ((FUN_100439f7e(param_1,param_5), *(char *)(param_1 + 0x14d69) == '\x02' &&
          (cVar1 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15330),*param_2), cVar1 == '\0')))) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_234 = (char *)FUN_1001b83ae(local_260);
          local_238 = 0x8220102;
          __os_log_impl(0x100000000,uVar5,1,"sync> adding \"%{public}s\" to selected movie tracks",
                        &local_238,0xc);
        }
        FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15330),*param_2);
        if (param_5 != 0) {
          *(byte *)(param_5 + 2) = *(byte *)(param_5 + 2) | 0x10;
        }
        if (local_250 != (ulong *)0x0) {
          *(byte *)local_250 = (byte)*local_250 | 0x40;
        }
      }
      if ((((uVar2 & 0x40) != 0) && (*(char *)(param_1 + 0x34f) != '\0')) &&
         (((FUN_10043a039(param_1,param_5), *(char *)(param_1 + 0x14d79) != '\x01' ||
           ((*(char *)(param_1 + 0x14d7a) != '\0' || (*(char *)(param_1 + 0x14d7b) != '\0')))) &&
          (cVar1 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15348),*param_2), cVar1 == '\0')))) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_234 = (char *)FUN_1001b83ae(local_260);
          local_238 = 0x8220102;
          __os_log_impl(0x100000000,uVar5,1,"sync> adding \"%{public}s\" to selected TV show tracks"
                        ,&local_238,0xc);
        }
        FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15348),*param_2);
        if (param_5 != 0) {
          *(byte *)(param_5 + 2) = *(byte *)(param_5 + 2) | 0x80;
        }
        if (local_250 != (ulong *)0x0) {
          *(byte *)local_250 = (byte)*local_250 | 0x80;
        }
      }
      if (((((uVar2 & 8) != 0) && (*(char *)(param_1 + 0x365) != '\0')) &&
          (FUN_10043a11c(param_1,param_5), *(char *)(param_1 + 0x14ded) == '\x02')) &&
         (cVar1 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15360),*param_2), cVar1 == '\0')) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_234 = (char *)FUN_1001b83ae(local_260);
          local_238 = 0x8220102;
          __os_log_impl(0x100000000,uVar5,1,
                        "sync> adding \"%{public}s\" to selected audiobook tracks",&local_238,0xc);
        }
        FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15360),*param_2);
        if (param_5 != 0) {
          *(byte *)(param_5 + 3) = *(byte *)(param_5 + 3) | 8;
        }
        if (local_250 != (ulong *)0x0) {
          *(byte *)((long)local_250 + 1) = *(byte *)((long)local_250 + 1) | 8;
        }
      }
      if ((((uVar2 & 0xc00000) != 0) && (*(char *)(param_1 + 0x39c) != '\0')) &&
         ((FUN_10043a1e7(param_1,param_5), *(char *)(param_1 + 0x14def) == '\x02' &&
          (cVar1 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15370),*param_2), cVar1 == '\0')))) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_234 = (char *)FUN_1001b83ae(local_260);
          local_238 = 0x8220102;
          __os_log_impl(0x100000000,uVar5,1,"sync> adding \"%{public}s\" to selected book tracks",
                        &local_238,0xc);
        }
        FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15370),*param_2);
        if (param_5 != 0) {
          *(byte *)(param_5 + 3) = *(byte *)(param_5 + 3) | 0x20;
        }
        uVar4 = 0x1000;
        goto LAB_100436b3b;
      }
    }
  }
  if (*(char *)(param_1 + 0x6ac2) != '\0') {
    cVar1 = FUN_100474d03(param_2);
    if (cVar1 == '\0') {
      if ((uVar2 & 4) != 0) goto LAB_100436b90;
    }
    else if ((uVar2 & 4) != 0 && *(char *)(param_1 + 0x346) != '\0') {
LAB_100436b90:
      if ((((*(char *)(param_1 + 0x14cda) != '\0') || (*(char *)(param_1 + 0x14d2a) != '\0')) &&
          ((FUN_10043a2a2(param_1,param_5), *(char *)(param_1 + 0x14d29) != '\x01' ||
           ((*(char *)(param_1 + 0x14d2b) != '\0' || (*(char *)(param_1 + 0x14d6b) != '\0')))))) &&
         (cVar1 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15320),*param_2), cVar1 == '\0')) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_234 = (char *)FUN_1001b83ae(local_260);
          local_238 = 0x8220102;
          __os_log_impl(0x100000000,uVar5,1,"sync> adding \"%{public}s\" to selected podcast tracks"
                        ,&local_238,0xc);
        }
        FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15320),*param_2);
        if (param_5 != 0) {
          *(byte *)(param_5 + 1) = *(byte *)(param_5 + 1) | 0x80;
        }
        if (local_250 != (ulong *)0x0) {
          *(byte *)((long)local_250 + 1) = *(byte *)((long)local_250 + 1) | 1;
        }
      }
    }
  }
  FUN_1001b7a50(local_260);
  uVar5 = 0;
LAB_100436c94:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

