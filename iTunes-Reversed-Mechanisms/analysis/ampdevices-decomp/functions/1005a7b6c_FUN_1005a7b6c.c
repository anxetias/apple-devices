// name: FUN_1005a7b6c
// address: 1005a7b6c

int FUN_1005a7b6c(long *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 local_688;
  char *local_684;
  undefined2 local_67c;
  int local_67a;
  undefined1 local_668 [1056];
  undefined1 local_248 [518];
  char local_42 [10];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)((long)param_1 + 0x15a3) != '\0') {
    lVar3 = FUN_100315ede(*(undefined8 *)(*param_1 + 0x30));
    if (lVar3 == 0) {
      uVar5 = 0;
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      uVar5 = 0;
      do {
        cVar1 = FUN_1002bded4(lVar3);
        if (cVar1 == '\0') {
          uVar5 = uVar5 + (*(short *)(lVar3 + 0x10) == 0x1e);
        }
        else {
          uVar8 = uVar8 + 1;
        }
        lVar3 = FUN_100316031(lVar3);
      } while (lVar3 != 0);
    }
    if (param_2 != 0) {
      cVar1 = FUN_1002bded4(param_2);
      if (cVar1 == '\0') {
        uVar5 = uVar5 - (*(short *)(param_2 + 0x10) == 0x1e);
      }
      else {
        uVar8 = uVar8 - 1;
      }
    }
    if (uVar5 < uVar8) {
      uVar5 = uVar8;
    }
    if (0xfe < uVar5) {
      uVar5 = 0xff;
    }
    uVar7 = 1;
    do {
      _snprintf(local_42,10,"%s%02X",&DAT_10075b620,uVar7);
      FUN_1001e04f5(local_42,local_248);
      pcVar6 = ".wav";
      if (*(int *)((long)param_1 + 0x15ac) == 0x57415645) {
LAB_1005a7cae:
        FUN_1001e26e1(pcVar6,local_248);
      }
      else if (*(int *)((long)param_1 + 0x15ac) == 0x41494643) {
        pcVar6 = ".aifc";
        goto LAB_1005a7cae;
      }
      iVar2 = FUN_10017ecc9(param_1 + 0x1a6,local_248,local_668,0);
      if (uVar5 < (uint)uVar7) {
        if (((iVar2 == 0) && (iVar2 = FUN_100182d4d(local_668), iVar2 != -0x80)) && (iVar2 != 0)) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_688 = 0x8220202;
            local_684 = "Assertion failure";
            local_67c = 0x400;
            local_67a = iVar2;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_688);
          }
        }
      }
      else if (iVar2 == -0x2b || param_2 == 0) {
        FUN_1001e04f5(local_42,local_248);
        uVar4 = FUN_1001736b8(DAT_1008c4d90,0,&cf__u,uVar7);
        iVar2 = FUN_1005ae396(param_1,uVar4,uVar4,param_1[0x2be],0,0,0,local_248,param_1 + 0x1a6,
                              param_1 + 0x122,local_668);
        FUN_10017060f(uVar4);
        if (iVar2 != 0) {
          if (iVar2 != -0x80) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_688 = 0x8220202;
              local_684 = "Assertion failure";
              local_67c = 0x400;
              local_67a = iVar2;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_688,0x12);
            }
          }
          goto LAB_1005a7e25;
        }
      }
      uVar8 = (uint)uVar7 + 1;
      uVar7 = (ulong)uVar8;
    } while (uVar8 != 0x100);
  }
  iVar2 = 0;
LAB_1005a7e25:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

