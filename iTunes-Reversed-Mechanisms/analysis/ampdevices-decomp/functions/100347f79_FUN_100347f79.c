// name: FUN_100347f79
// address: 100347f79

long FUN_100347f79(long param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 local_58 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  undefined8 local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != (long *)0x0) {
    *param_3 = 0;
  }
  iVar3 = FUN_1004f2b0b(param_1,1);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      lVar5 = FUN_1004983e2(*(undefined8 *)(param_1 + 0x66c0),param_2);
      if ((lVar5 != 0) &&
         (lVar5 = FUN_100300729(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar5 + 0x20)),
         lVar5 != 0)) {
        if (param_3 != (long *)0x0) {
          *param_3 = lVar5;
        }
        lVar8 = lVar5;
        if (*(long *)(lVar5 + 0x188) != 0) {
          lVar6 = FUN_100309333(*(undefined8 *)(lVar5 + 0x180));
          if ((lVar6 == 0) || (*(int *)(lVar6 + 0x84) != 0x2062696c)) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar7 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            if (cVar2 != '\0') {
              local_44 = *(char **)(lVar5 + 0x180);
              local_48 = 0x8000100;
              __os_log_impl(0x100000000,uVar7,0x10,
                            "airtraffic> could not find source library 0x%016llX",&local_48,0xc);
            }
            if (lVar6 == 0) goto LAB_1003480f6;
          }
          lVar6 = FUN_100300729(lVar6,*(undefined8 *)(lVar5 + 0x188));
          if ((lVar6 != 0) &&
             (((lVar1 = *(long *)(lVar5 + 0x58), lVar8 = lVar6, (*(byte *)(lVar1 + 0x4a) & 1) == 0
               || (*(short *)(lVar1 + 0x74) != 0)) && (*(char *)(lVar1 + 0x45) == '\0')))) {
            iVar3 = FUN_1005d1c9c(lVar6);
            iVar4 = FUN_1005d1c9c(lVar5);
            if ((iVar3 != iVar4) && (cVar2 = FUN_1002e5544(lVar6), cVar2 == '\0')) {
              lVar8 = lVar5;
            }
          }
        }
LAB_1003480f6:
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar7 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          FUN_100476ac1(local_58,lVar5);
          local_3a = FUN_1001b83ae(local_58);
          local_44 = "library";
          if (lVar8 == lVar5) {
            local_44 = "device";
          }
          local_48 = 0x8220202;
          local_3c = 0x822;
          __os_log_impl(0x100000000,uVar7,1,
                        "airtraffic> getting artwork from %{public}s track for track \"%{public}s\""
                        ,&local_48,0x16);
          FUN_1001b7a50(local_58);
        }
        goto LAB_1003481ac;
      }
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = CONCAT44(local_3a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  lVar8 = 0;
LAB_1003481ac:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar8;
}

