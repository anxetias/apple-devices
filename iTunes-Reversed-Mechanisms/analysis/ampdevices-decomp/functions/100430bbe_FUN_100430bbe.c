// name: FUN_100430bbe
// address: 100430bbe

void FUN_100430bbe(long param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_58;
  undefined1 uStack_54;
  undefined2 uStack_53;
  char cStack_51;
  undefined4 uStack_50;
  undefined1 local_4c;
  undefined1 uStack_4b;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = FUN_1004e0c3f(param_1,1);
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x90;
      uStack_53 = 0x7a0a;
      cStack_51 = '\0';
      uStack_50 = 1;
      local_4c = 0x22;
      uStack_4b = 8;
      local_4a = "libraryTrackData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined1 *)(param_1 + 0x6abf) = 1;
    uVar6 = FUN_100309008(lVar5);
    *(undefined8 *)(param_1 + 0x14cdc) = uVar6;
    uVar6 = FUN_1004e116d();
    *(undefined8 *)(param_1 + 0x14ce4) = uVar6;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      uVar1 = *(undefined8 *)(param_1 + 0x14cdc);
      local_58 = 0x8000100;
      uStack_54 = (undefined1)uVar1;
      uStack_53 = (undefined2)((ulong)uVar1 >> 8);
      cStack_51 = (char)((ulong)uVar1 >> 0x18);
      uStack_50 = (undefined4)((ulong)uVar1 >> 0x20);
      __os_log_impl(0x100000000,uVar6,1,"sync> setting home music library to 0x%016llX",&local_58,
                    0xc);
    }
    FUN_100430e89(param_1 + 0x14e50,param_1 + 0x14e90);
    FUN_1004f0290(param_1);
    if (((param_2 != '\0') && (*(long *)(param_1 + 0x30) != 0)) &&
       (lVar5 = FUN_10048604a(), lVar5 != 0)) {
      FUN_100313e0b(*(undefined8 *)(param_1 + 0x30));
      FUN_1004897f6(lVar5,1);
      if (*(char *)(param_1 + 0x37c) != '\0') {
        for (lVar7 = FUN_100485529(lVar5); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x18)) {
          lVar8 = FUN_100242590(lVar7);
          if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc2) < 0)) {
            FUN_1004861af(lVar7,0);
          }
        }
      }
      FUN_100430f31(param_1,lVar5,0);
      FUN_10043107c(lVar5);
      lVar5 = FUN_100315ede(*(undefined8 *)(param_1 + 0x30));
      if (lVar5 != 0) {
        do {
          lVar7 = FUN_1003161a8(lVar5);
          if ((*(byte *)(lVar5 + 0x240) & 4) == 0) {
            uVar3 = FUN_10048c0ca(lVar5);
            cVar2 = FUN_10048c208(uVar3);
            if (cVar2 == '\0') {
              uStack_50 = 0;
              local_4c = 0;
              local_58 = 0;
              uStack_54 = 0;
              uStack_53 = 0;
              cStack_51 = '\0';
              iVar4 = FUN_10048256b(lVar5,&local_58);
              if ((iVar4 == 0) && (cStack_51 == '\0')) {
                FUN_100488d27(lVar5,0,0);
              }
            }
          }
          lVar5 = lVar7;
        } while (lVar7 != 0);
      }
      FUN_1002fbbfc(*(undefined8 *)(param_1 + 0x30));
      FUN_100357184(param_1);
    }
    if (*(char *)(param_1 + 0x39c) != '\0') {
      uVar6 = FUN_1004e0c3f(param_1,1);
      FUN_1002c0ab5(uVar6,0xc00000,*(undefined8 *)(param_1 + 0x15378));
    }
    FUN_1004e1392(param_1,1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

