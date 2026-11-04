// name: FUN_1005a9036
// address: 1005a9036

int FUN_1005a9036(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  char local_b00 [80];
  long *local_ab0;
  undefined8 local_aa8;
  undefined8 local_aa0;
  undefined4 local_a98;
  char *local_a94;
  undefined2 local_a8c;
  int local_a8a;
  undefined1 local_a78 [512];
  undefined1 local_878 [1056];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  int local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar1 = param_1 + 0x9e;
  cVar3 = FUN_10017cbd0(plVar1);
  if (cVar3 == '\0') {
    iVar4 = 0;
  }
  else {
    local_ab0 = param_1 + 3;
    FUN_1005a93cb();
    iVar4 = FUN_1001888ba(plVar1,"CacheInfo.plist",local_878,0);
    if (iVar4 == 0) {
      FUN_100184b54(local_878);
    }
    lVar2 = *param_1;
    if ((((*(char *)(lVar2 + 0x38c) != '\0') && (*(char *)(lVar2 + 0x38d) == '\0')) &&
        (iVar4 = FUN_1005af482(lVar2,param_1[0x2be],0), iVar4 != -0x80)) && (iVar4 != 0)) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x400;
        local_44a = iVar4;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
    }
    iVar4 = FUN_1001879bd(plVar1,1,&local_aa8);
    if (iVar4 == 0) {
      FUN_1001ceb57(param_2,0xffffffffffffffff,0xffffffffffffffff,0);
      iVar5 = FUN_100187bea(local_aa8,&local_458,local_b00,local_a78);
      if (iVar5 == 0) {
        do {
          if (local_b00[0] == '\0') {
            cVar3 = FUN_1001e4e7c("VoiceOverDB",local_a78,1);
            iVar4 = local_a8a;
            if (((cVar3 != '\0') &&
                (iVar5 = FUN_100182d4d(&local_458), iVar4 = local_a8a, iVar5 != -0x80)) &&
               (iVar5 != 0)) {
              local_aa0 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(local_aa0,0x10);
              iVar4 = local_a8a;
              goto joined_r0x0001005a9329;
            }
          }
          else {
            cVar3 = FUN_1001e4e7c("System",local_a78,1);
            iVar4 = local_a8a;
            if (((cVar3 == '\0') &&
                (iVar5 = FUN_100182d59(&local_458,1), iVar4 = local_a8a, iVar5 != -0x80)) &&
               (iVar5 != 0)) {
              local_aa0 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(local_aa0,0x10);
              iVar4 = local_a8a;
joined_r0x0001005a9329:
              local_a8a = iVar5;
              if (cVar3 != '\0') {
                local_a8c = 0x400;
                local_a94 = "Assertion failure";
                local_a98 = 0x8220202;
                __os_log_error_impl(0x100000000,local_aa0,0x10,"%{public}s: err == (%d)",&local_a98,
                                    0x12);
                iVar4 = local_a8a;
              }
            }
          }
          local_a8a = iVar4;
          FUN_1001ceb57(param_2,0xffffffffffffffff,0xffffffffffffffff,0);
          iVar5 = FUN_100187bea(local_aa8,&local_458,local_b00);
        } while (iVar5 == 0);
      }
      iVar4 = 0;
      if (iVar5 != -0x589) {
        iVar4 = iVar5;
      }
      FUN_100187c42(local_aa8);
    }
    FUN_100230408(param_1[0x2cd]);
    param_1[0x2cc] = (long)(param_1 + 0x2cd);
    param_1[0x2cd] = 0;
    param_1[0x2ce] = 0;
    FUN_1001e9eb9(local_ab0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

